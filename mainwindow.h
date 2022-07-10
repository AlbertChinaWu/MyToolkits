#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

    void InitConnect();

public Q_SLOTS:
    /// @brief 菜单响应
    /// @brief 文件菜单
    void SlotQuitMainWindow(bool const checked = false);
    /// @brief 设计模式菜单
    void SlotDpSimpleFactory(bool const checked = false);

private:
    Ui::MainWindow* ui;
};
#endif // MAINWINDOW_H
