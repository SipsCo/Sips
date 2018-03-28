#include "ui_bitcointalk.h"
#include "guiutil.h"
#include "bitcoingui.h"
#include "util.h"
#include "main.h"
#include <QtCore>
#include <QtGui>
#include <QtWebKit>

Bitcointalk::Bitcointalk(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Bitcointalk),
    model(0)
{
    ui->setupUi(this);
}
    void Bitcointalk::setModel(WalletModel *model)
{
    this->model = model;
    if(!model)
        return;
}

Bitcointalk::~Bitcointalk()
{
    delete ui;
}