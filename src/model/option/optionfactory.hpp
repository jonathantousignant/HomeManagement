#ifndef OPTIONFACTORY_HPP
#define OPTIONFACTORY_HPP

#include <QObject>

#include "ioption.hpp"

class OptionFactory : public QObject
{
    Q_OBJECT
public:
    enum OptionType
    {
        DEFAULT,
        COST,
        NAME
    };

    static OptionFactory &instance();
    IOption* createOption(OptionType type);

signals:

public slots:

private:
    explicit OptionFactory(QObject *parent = 0);

    OptionFactory(OptionFactory const&) = delete;
    void operator=(OptionFactory const&)  = delete;

};

#endif // OPTIONFACTORY_HPP
