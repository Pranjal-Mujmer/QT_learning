#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "qmessagebox_tutorials.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setCheckable(true);
    connect(ui->pushButton, &QPushButton::toggled, this, &MainWindow::on_pushButton_toggled);
    // Connect the button to open the new dialog
    connect(ui->openDialogButton, &QPushButton::clicked, this, &MainWindow::openMessageDialog);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_toggled(bool checked)
{
    qDebug() << "Button toggled: " << checked;
    if(checked)
    {
        ui->label->setText("Button checked");
        ui->label_2->clear();
    }
    else
    {
        ui->label_2->setText("Button unchecked");
        ui->label->clear();
    }
}


// This function will create and show the dialog
void MainWindow::openMessageDialog()
{
    MessageBoxDialog *dialog = new MessageBoxDialog(this);
    dialog->exec();  // Use exec() to make the dialog modal
}
