#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    void turnOnDarkTheme();

private slots:
    void on_actionAbout_program_triggered();
    void on_actionAbout_Qt_triggered();
    void on_actionDark_Theme_triggered(bool checked);
    void on_horizontalSlider_valueChanged(int value);
    void on_action_Open_triggered();
    void on_action_Copy_triggered();
    void on_action_Save_triggered();
    void on_actionaction_Start_triggered();
    void on_checkBox_stateChanged(int arg1);
};
#endif // MAINWINDOW_H
