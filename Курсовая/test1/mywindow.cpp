#include "MyWindow.h"


MyWindow::MyWindow() : QDialog()
{
    text = new QTextEdit;

    ok = new QPushButton("OK");
    new_part = new QPushButton("New part");

    QHBoxLayout * button_layout = new QHBoxLayout;
    button_layout->addWidget(ok);
    button_layout->addWidget(new_part);

    QVBoxLayout * layout = new QVBoxLayout;
    layout->addWidget(text);
    layout->addLayout(button_layout);

    connect(ok, SIGNAL(clicked()), this, SLOT(close()));
    connect(new_part, SIGNAL(clicked()), this, SLOT(new_p()));

    setLayout(layout);
}

void MyWindow::new_p()
{
    Part *prt = new Part;

    prt->show();
}
