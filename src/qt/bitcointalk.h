#ifndef BITCOINTALK_H
#define BITCOINTALK_H

#include <QWidget>

namespace Ui {
	class Bitcointalk;
}
class WalletModel;

class Bitcointalk : public QWidget
{
    Q_OBJECT

public:
    explicit Bitcointalk(QWidget *parent = 0);
    void setModel(WalletModel *model);


virtual ~Bitcointalk();    


private:
	Ui::Bitcointalk *ui;
    WalletModel *model;
};

#endif // WEBSHOP_H
