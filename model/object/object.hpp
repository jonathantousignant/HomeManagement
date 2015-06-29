#ifndef OBJECT_HPP
#define OBJECT_HPP

#include <QObject>

class Object : public QObject
{
    Q_OBJECT
public:
    explicit Object(QObject *parent = 0);

signals:

public slots:
};

#endif // OBJECT_HPP
