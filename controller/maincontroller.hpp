#ifndef MAINCONTROLLER_HPP
#define MAINCONTROLLER_HPP

#include <QObject>
#include "mainview.hpp"
#include "mainmodel.hpp"

class MainController : public QObject
{
    Q_OBJECT
public:
    explicit MainController(QObject *parent = 0);
signals:

public slots:

private:
    MainView _mainView;
    MainModel _mainModel;
};

#endif // MAINCONTROLLER_HPP
