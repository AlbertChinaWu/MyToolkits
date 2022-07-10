#include <QApplication>

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    InitConnect();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::InitConnect()
{
    QObject::connect(ui->actionQuit, SIGNAL(triggered(bool)), this, SLOT(SlotQuitMainWindow(bool)));
    QObject::connect(ui->actionSimpleFactory, SIGNAL(triggered(bool)), this, SLOT(SlotDpSimpleFactory(bool)));
}

/// @brief 菜单项执行函数
void MainWindow::SlotQuitMainWindow(bool const checked)
{
    Q_UNUSED(checked);
    QApplication::quit();
}

void MainWindow::SlotDpSimpleFactory(bool const checked)
{
    Q_UNUSED(checked);
}
