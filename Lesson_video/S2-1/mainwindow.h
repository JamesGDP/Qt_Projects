#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStatusBar>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

 public slots:

    void Onclick();
    void Oncheck();


private:
    Ui::MainWindow *ui;

    long count=0;

    // QObject interface
protected:
    virtual void timerEvent(QTimerEvent *event) override;
};
#endif // MAINWINDOW_H
