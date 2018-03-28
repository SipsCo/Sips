#include "ui_twitter.h"
#include "guiutil.h"
#include "bitcoingui.h"
#include "util.h"
#include "main.h"
#include <QtCore>
#include <QtGui>
#include <QtWebKit>

Twitter::Twitter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Twitter),
    model(0)
{
    ui->setupUi(this);
}
    void Twitter::setModel(WalletModel *model)
{
    this->model = model;
    if(!model)
        return;
}

Twitter::~Twitter()
{
    delete ui;
}