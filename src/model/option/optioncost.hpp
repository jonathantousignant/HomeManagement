#ifndef OPTIONCOST_HPP
#define OPTIONCOST_HPP

#include "ioption.hpp"

class OptionCost : public IOption
{
    Q_OBJECT
public:
    explicit OptionCost(QObject *parent = 0);

protected:
    bool isGoodFormat(QString value);
    void setDefaultValue();
};

#endif // OPTIONCOST_HPP
