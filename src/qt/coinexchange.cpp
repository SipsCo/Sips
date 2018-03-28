#include "ui_coinexchange.h"
#include "guiutil.h"
#include "bitcoingui.h"
#include "util.h"
#include "main.h"
#include <QtCore>
#include <QtGui>
#include <QtWebKit>

Coinexchange::Coinexchange(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Coinexchange),
    model(0)
{
    ui->setupUi(this);
}
    void Coinexchange::setModel(WalletModel *model)
{
    this->model = model;
    if(!model)
        return;
}

Coinexchange::~Coinexchange()
{
    delete ui;
}