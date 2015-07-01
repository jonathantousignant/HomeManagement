#include "optionfactory.hpp"
#include "optionname.hpp"
#include "optioncost.hpp"

OptionFactory::OptionFactory(QObject *parent) : QObject(parent)
{

}

OptionFactory &OptionFactory::instance()
{
    static OptionFactory instance;
    return instance;
}

IOption* OptionFactory::createOption(OptionType type)
{
    IOption *option;

    switch (type) {
    case NAME:
        option = new OptionName();
        break;
    case COST:
        option = new OptionCost();
        break;
    case DEFAULT:
    default:
        break;
    }

    return option;
}
