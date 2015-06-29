#ifndef MAINMODEL_HPP
#define MAINMODEL_HPP

#include <QObject>

class MainModel : public QObject
{
    Q_OBJECT
public:
    explicit MainModel(QObject *parent = 0);

signals:

public slots:
};

#endif // MAINMODEL_HPP
