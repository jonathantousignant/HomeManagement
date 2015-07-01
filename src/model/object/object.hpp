#ifndef OBJECT_HPP
#define OBJECT_HPP

#include <QObject>
#include <QMap>

#include "ioption.hpp"
#include "optionfactory.hpp"

class Object : public QObject
{
    Q_OBJECT
public:
    explicit Object(QObject *parent = 0);
    void addOption(OptionFactory::OptionType type);

signals:

public slots:

private:
    QMap<QString, IOption*> _options;
    int _id;
};

#endif // OBJECT_HPP
