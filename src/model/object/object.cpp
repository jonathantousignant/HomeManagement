#include "object.hpp"

Object::Object(QObject *parent) :
    QObject(parent),
    _id(1)
{

}

void Object::addOption(OptionFactory::OptionType type)
{
    IOption option = OptionFactory::instance().createOption(type);
    _options.insert(option.getName(), option);
}
