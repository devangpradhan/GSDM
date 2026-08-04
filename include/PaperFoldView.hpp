#ifndef PAPERFOLD_VIEW_HPP
#define PAPERFOLD_VIEW_HPP

#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QMatrix4x4>
#include <QMouseEvent>

class PaperFoldView : public QOpenGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT

public:
    explicit PaperFoldView(QWidget* parent = nullptr);
    ~PaperFoldView();

    void setFoldFactor(float factor);

protected:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;

    void mousePressEvent(QMouseEvent* event) override;
    void mouseMoveEvent(QMouseEvent* event) override;

private:
    QMatrix4x4 m_projection;
    float m_foldFactor = 0.5f;
    float m_rotationX = 30.0f;
    float m_rotationY = 45.0f;
    QPoint m_lastMousePos;
};

#endif // PAPERFOLD_VIEW_HPP