#include "mainwindow.hh"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget *widget = new QWidget;
    setCentralWidget(widget);

    setWindowTitle("Viikkotiedotegeneraattori");
    resize(600, 400);
    setStyleSheet("background-color: #DDEEFF");

    QVBoxLayout *mainLayout = new QVBoxLayout;
    widget->setLayout(mainLayout);

    // Pääleiskan täytteet
    QLabel *mainLabel = new QLabel();
    mainLabel->setText("Viikkotiedote:");
    mainLayout->addWidget(mainLabel);

    tiedoteLayout_ = new QVBoxLayout;
    mainLayout->addLayout(tiedoteLayout_);

    QHBoxLayout *buttonLayout = new QHBoxLayout;

    buttonAddTiedote_ = new QPushButton();
    buttonAddTiedote_->setText("Lisää tiedote");
    buttonLayout->addWidget(buttonAddTiedote_);
    mainLayout->addLayout(buttonLayout);

    createMenus();
}

MainWindow::~MainWindow()
{

}

void MainWindow::createMenus()
{
    fileMenu_ = menuBar()->addMenu("File");

}
