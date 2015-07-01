#include "optioncost.hpp"

OptionCost::OptionCost(QObject *parent) : IOption("Cost", parent)
{

}

bool OptionCost::isGoodFormat(QString value)
{
    bool ok;

    value.toDouble(&ok);

    return ok;
}

void OptionCost::setDefaultValue()
{
    _value = "0.0";
}
