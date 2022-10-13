#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_NSMusicClient.h"

class NSMusicClient : public QMainWindow
{
    Q_OBJECT

public:
    NSMusicClient(QWidget *parent = nullptr);
    ~NSMusicClient();

private:
    Ui::NSMusicClientClass ui;
};
