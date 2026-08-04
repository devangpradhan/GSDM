#include "MainWindow.hpp"
#include <QDockWidget>
#include <QVBoxLayout>
#include <QLabel>

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
{
    setWindowTitle("PaperFold 3D Studio - [Qt6 Engine]");
    resize(1280, 720);

    // Main 3D Canvas
    m_viewport = new PaperFoldView(this);
    setCentralWidget(m_viewport);

    // Left Control Dock
    QDockWidget* dock = new QDockWidget("Origami Controls", this);
    QWidget* dockWidget = new QWidget();
    QVBoxLayout* layout = new QVBoxLayout(dockWidget);

    QLabel* label = new QLabel("Fold Simulation Angle:", dockWidget);
    m_foldSlider = new QSlider(Qt::Horizontal, dockWidget);
    m_foldSlider->setRange(0, 100);
    m_foldSlider->setValue(50);

    layout->addWidget(label);
    layout->addWidget(m_foldSlider);
    dockWidget->setLayout(layout);
    dock->setWidget(dockWidget);
    addDockWidget(Qt::LeftDockWidgetArea, dock);

    connect(m_foldSlider, &QSlider::valueChanged, this, &MainWindow::onSliderValueChanged);
}

MainWindow::~MainWindow()
{
}

void MainWindow::onSliderValueChanged(int value)
{
    float factor = value / 100.0f;
    m_viewport->setFoldFactor(factor);
}