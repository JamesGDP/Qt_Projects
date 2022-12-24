#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include "myclass.h"
#include <QMetaClassInfo>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "S2-1_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    MainWindow w;
    w.show();

    myclass* my=new myclass;
    QObject* pobj=my;

    my->setPriority(myclass::high);
    pobj->setProperty("priority","low");
    pobj->setProperty("isGood","true");

    qInfo()<<my->property("priority");
    qInfo()<<pobj->property("isGood");

    qInfo()<<my->metaObject()->classInfo(0).name();
     qInfo()<<my->metaObject()->classInfo(0).value();

     qInfo()<<my->metaObject()->classInfo(1).name();
      qInfo()<<my->metaObject()->classInfo(1).value();

    return a.exec();
}
