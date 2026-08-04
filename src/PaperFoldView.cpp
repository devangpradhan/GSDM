#include "PaperFoldView.hpp"

PaperFoldView::PaperFoldView(QWidget* parent)
    : QOpenGLWidget(parent)
{
}

PaperFoldView::~PaperFoldView()
{
}

void PaperFoldView::setFoldFactor(float factor)
{
    m_foldFactor = factor;
    update(); // Viewport redraw karega
}

void PaperFoldView::initializeGL()
{
    initializeOpenGLFunctions();
    glClearColor(0.12f, 0.12f, 0.14f, 1.0f); // CAD Dark background
    glEnable(GL_DEPTH_TEST);
}

void PaperFoldView::resizeGL(int w, int h)
{
    glViewport(0, 0, w, h);
    m_projection.setToIdentity();
    m_projection.perspective(45.0f, GLfloat(w) / GLfloat(h ? h : 1), 0.1f, 100.0f);
}

void PaperFoldView::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    QMatrix4x4 view;
    view.translate(0.0f, 0.0f, -6.0f);
    view.rotate(m_rotationX, 1.0f, 0.0f, 0.0f);
    view.rotate(m_rotationY, 0.0f, 1.0f, 0.0f);

    QMatrix4x4 mvp = m_projection * view;

    glLoadMatrixf(mvp.constData());

    // 3D Origami Crease Mesh Rendering (3D Interactive Simulation)
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    // Mountain Crease Line (Red)
    glColor3f(1.0f, 0.2f, 0.2f);
    glVertex3f(-1.5f, 0.0f, 0.0f);
    glVertex3f(0.0f, m_foldFactor * 1.5f, 0.0f);

    // Valley Crease Line (Blue)
    glColor3f(0.2f, 0.5f, 1.0f);
    glVertex3f(0.0f, m_foldFactor * 1.5f, 0.0f);
    glVertex3f(1.5f, 0.0f, 0.0f);
    glEnd();
}

void PaperFoldView::mousePressEvent(QMouseEvent* event)
{
    m_lastMousePos = event->pos();
}

void PaperFoldView::mouseMoveEvent(QMouseEvent* event)
{
    int dx = event->x() - m_lastMousePos.x();
    int dy = event->y() - m_lastMousePos.y();

    if (event->buttons() & Qt::LeftButton) {
        m_rotationX += dy * 0.5f;
        m_rotationY += dx * 0.5f;
        update();
    }
    m_lastMousePos = event->pos();
}