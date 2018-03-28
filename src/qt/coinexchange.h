#ifndef COINEXCHANGE_H
#define COINEXCHANGE_H

#include <QWidget>

namespace Ui {
	class Coinexchange;
}
class WalletModel;

class Coinexchange : public QWidget
{
    Q_OBJECT

public:
    explicit Coinexchange(QWidget *parent = 0);
    void setModel(WalletModel *model);


virtual ~Coinexchange();    


private:
	Ui::Coinexchange *ui;
    WalletModel *model;
};

#endif // COINEXCHANGE_H
