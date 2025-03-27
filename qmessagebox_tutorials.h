#ifndef QMESSAGEBOX_TUTORIALS_H
#define QMESSAGEBOX_TUTORIALS_H

#include <QDialog>

namespace Ui {
class qmessagebox_tutorials;
}

class qmessagebox_tutorials : public QDialog
{
    Q_OBJECT

public:
    explicit qmessagebox_tutorials(QWidget *parent = nullptr);
    ~qmessagebox_tutorials();

private slots:
    void on_warn_btn_clicked();

private:
    Ui::qmessagebox_tutorials *ui;
};

#endif // QMESSAGEBOX_TUTORIALS_H
