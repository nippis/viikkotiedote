#ifndef TIEDOTEWIDGET_HH
#define TIEDOTEWIDGET_HH

#include <QWidget>
#include <QString>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>

class TiedoteWidget : public QWidget
{
    Q_OBJECT
public:
    explicit TiedoteWidget(QWidget *parent = nullptr);

signals:

public slots:

private:
    QLabel *number_;
    QLabel *title_;

};

#endif // TIEDOTEWIDGET_HH
