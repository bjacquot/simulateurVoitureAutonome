#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <circuitwidget.h>
#include <controleur.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(int nbVoitures,QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    CircuitWidget circuit;

};
#endif // MAINWINDOW_H
