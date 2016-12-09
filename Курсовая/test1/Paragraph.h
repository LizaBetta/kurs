#ifndef PARAGRAPH_H
#define PARAGRAPH_H

#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QTextEdit>

class Paragraph: public QDialog
{
    Q_OBJECT
public:
    Paragraph();
private:
    QTextEdit *text;
    QPushButton *ok;
    QPushButton *ext1;
    QPushButton *ext2;
    QPushButton *ext3;
private slots:
    void new_ext1();
    void new_ext2();
    void new_ext3();
};

#endif // PARAGRAPH_H
