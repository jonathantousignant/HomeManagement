#include "ioption.hpp"

IOption::IOption(QString name, QObject *parent) :
    QObject(parent),
    _name(name)
{

}

IOption::~IOption()
{

}

void IOption::setValue(QString value)
{
    if (isGoodFormat(value))
    {
        _value = value;
    }
    else
    {
        setDefaultValue();
    }
}


