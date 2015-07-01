#ifndef OPTIONNAME_HPP
#define OPTIONNAME_HPP

#include "ioption.hpp"

class OptionName : public IOption
{
public:
    OptionName(QObject *parent = 0);

protected:
    bool isGoodFormat(QString value);
    void setDefaultValue();
};

#endif // OPTIONNAME_HPP
