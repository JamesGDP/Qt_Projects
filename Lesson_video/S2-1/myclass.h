#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>

class myclass : public QObject
{
    Q_OBJECT

    Q_PROPERTY(Priority priority READ priority WRITE setPriority NOTIFY priorityChanged)
    Q_CLASSINFO("para1","Title1")
    Q_CLASSINFO("Para2","Title2")
  public:
    enum Priority{high,middle,low};
    Q_ENUM(Priority)

    void setPriority(Priority pp)
    {
        m_Priority=pp;
        emit priorityChanged(pp);
    }

    Priority getPriority(){return m_Priority;}
    explicit myclass(QObject *parent = nullptr);
    Priority priority()const {return m_Priority;}
signals:
    void  priorityChanged(myclass::Priority);

private:

    Priority m_Priority;

};

#endif // MYCLASS_H
