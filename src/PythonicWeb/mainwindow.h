#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
#include <QDebug>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QtWebSockets/QWebSocket>
#include <QRect>

#include "helper.h"
#include "logger.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    Logger m_logger;
private slots:
    void debugMessage();

private:

    QPushButton *m_sendDebugMessage;
    QWebSocket  m_log_msg;

};
#endif // MAINWINDOW_H

