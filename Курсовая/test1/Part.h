#ifndef PART_H
#define PART_H

#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QTextEdit>
#include "Paragraph.h"

class Part: public QDialog
{
    Q_OBJECT
public:
    Part();
private:
    QTextEdit *text;
    QPushButton *ok;
    QPushButton *pargr;
private slots:
    void new_paragraph();
};

#endif // PARAGRAPH_H
