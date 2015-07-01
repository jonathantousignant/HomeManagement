#include "optionname.hpp"

OptionName::OptionName(QObject *parent) : IOption("Name", parent)
{

}

bool OptionName::isGoodFormat(QString value)
{
    return value.isEmpty();
}

void OptionName::setDefaultValue()
{
    _value = "No name";
}

