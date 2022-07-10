#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::InitConnect()
{
    QObject::connect(ui->actionSimpleFactory, SIGNAL(triggered(bool)), this, SLOT(SlotDpSimpleFactory(bool)));
}

/// @brief 菜单项执行函数
void MainWindow::SlotDpSimpleFactory(bool const checked)
{
    Q_UNUSED(checked)
}
