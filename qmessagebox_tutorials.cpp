#include "qmessagebox_tutorials.h"
#include "ui_qmessagebox_tutorials.h"
#include <QMessageBox>
qmessagebox_tutorials::qmessagebox_tutorials(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::qmessagebox_tutorials)
{
    ui->setupUi(this);
}

qmessagebox_tutorials::~qmessagebox_tutorials()
{
    delete ui;
}

void qmessagebox_tutorials::on_warn_btn_clicked()
{
    QMessageBox::warning(this,"warning issued !!","This the warning that the button is clicked for Emergency");
}

