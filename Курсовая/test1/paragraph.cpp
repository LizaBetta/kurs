#include "Paragraph.h"

Paragraph::Paragraph() : QDialog()
{
    text = new QTextEdit;

    ok = new QPushButton("OK");
    ext1 = new QPushButton("ext1");
    ext2 = new QPushButton("ext2");
    ext3 = new QPushButton("ext3");

    QHBoxLayout * button_layout = new QHBoxLayout;
    button_layout->addWidget(ext1);
    button_layout->addWidget(ext2);
    button_layout->addWidget(ext3);
    button_layout->addWidget(ok);

    QVBoxLayout * layout = new QVBoxLayout;
    layout->addWidget(text);
    layout->addLayout(button_layout);

    connect(ok, SIGNAL(clicked()), this, SLOT(close()));
    connect(ext1, SIGNAL(clicked()), this, SLOT(new_ext1()));
    connect(ext2, SIGNAL(clicked()), this, SLOT(new_ext2()));
    connect(ext3, SIGNAL(clicked()), this, SLOT(new_ext3()));

    setLayout(layout);
}

void Paragraph::new_ext1()
{

}

void Paragraph::new_ext2()
{

}

void Paragraph::new_ext3()
{

}

