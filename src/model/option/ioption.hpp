#ifndef OPTION_HPP
#define OPTION_HPP

#include <QObject>

class IOption : public QObject
{
    Q_OBJECT
public:
    explicit IOption(QString name, QObject *parent = 0);

    virtual ~IOption();

    QString getName() { return _name; }
    QString getValue() { return _value; }
    void setValue(QString value);

signals:

public slots:

protected:
    virtual bool isGoodFormat(QString value) = 0;
    virtual void setDefaultValue() = 0;

    QString _value;

private:
    QString _name;
};

#endif // OPTION_HPP
