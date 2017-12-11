#ifndef MAINWINDOW_HH
#define MAINWINDOW_HH

#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();


private:
    QMenu *fileMenu_;

    QVBoxLayout *tiedoteLayout_;

    QPushButton *buttonAddTiedote_;

    void createMenus();
};

#endif // MAINWINDOW_HH
