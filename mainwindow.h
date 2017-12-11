#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <memory>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = nullptr);
	~MainWindow() override;
	MainWindow(const MainWindow &) = delete;
	MainWindow(const MainWindow &&) = delete;
	MainWindow &operator=(const MainWindow &) = delete;
	MainWindow &operator=(const MainWindow &&) = delete;

private:
	std::unique_ptr<Ui::MainWindow> ui;
};

#endif  // MAINWINDOW_H
