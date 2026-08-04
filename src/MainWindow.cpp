#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QSlider>
#include "PaperFoldView.hpp"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

private slots:
    void onSliderValueChanged(int value);

private:
    PaperFoldView* m_viewport;
    QSlider* m_foldSlider;
};

#endif // MAINWINDOW_HPP