#ifndef MAINWINDOW_HH
#define MAINWINDOW_HH

#include "addtiedotewindow.hh"
#include "tiedotteet.hh"
#include "tiedote.hh"

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

    Tiedotteet tiedoteVector;

    void createMenus();

signals:

public slots:
    void openTiedoteWindow();
    void addTiedote(QString otsikko, QString teksti);

};

#endif // MAINWINDOW_HH
