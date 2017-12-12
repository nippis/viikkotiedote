#ifndef ADDTIEDOTEWINDOW_HH
#define ADDTIEDOTEWINDOW_HH

#include <QWidget>
#include <QString>
#include <QPushButton>
#include <QTextEdit>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>

class AddTiedoteWindow : public QWidget
{
    Q_OBJECT
public:
    explicit AddTiedoteWindow(QWidget *parent = nullptr);
    ~AddTiedoteWindow();

signals:
    void tiedoteAdded(QString otsikko, QString teksti);

public slots:
    void addTiedote();
    void cancel();

private:
    QTextEdit *otsikkoEdit_;
    QTextEdit *tekstiEdit_;

};

#endif // ADDTIEDOTEWINDOW_HH
