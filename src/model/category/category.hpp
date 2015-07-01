#ifndef CATEGORY_HPP
#define CATEGORY_HPP

#include <QObject>
#include <QMap>

#include "object.hpp"

class Category : public QObject
{
    Q_OBJECT
public:
    explicit Category(QString name, QObject *parent = 0);

signals:

public slots:

private:
    QMap<int, Object> _objects;
    QMap<QString, Category> _categories;

    QString _name;
};

#endif // CATEGORY_HPP
