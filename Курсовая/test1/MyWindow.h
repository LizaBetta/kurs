#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QTextEdit>
#include "Part.h"


class MyWindow : public QDialog
{
    Q_OBJECT
public:
    MyWindow();
private:
    QTextEdit *text;
    QPushButton *ok;
    QPushButton *new_part;
private slots:
    void new_p();
};
#endif // MYWINDOW_H
