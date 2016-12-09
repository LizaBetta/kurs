#include "Part.h"


Part::Part(): QDialog()
{
    text = new QTextEdit;

    ok = new QPushButton("OK");
    pargr = new QPushButton("New paragraph");

    QHBoxLayout * button_layout = new QHBoxLayout;
    button_layout->addWidget(ok);
    button_layout->addWidget(pargr);

    QVBoxLayout * layout = new QVBoxLayout;
    layout->addWidget(text);
    layout->addLayout(button_layout);

    connect(ok, SIGNAL(clicked()), this, SLOT(close()));
    connect(pargr, SIGNAL(clicked()), this, SLOT(new_paragraph()));

    setLayout(layout);
}

void Part::new_paragraph()
{
    Paragraph *prg = new Paragraph;

    prg->show();
}
