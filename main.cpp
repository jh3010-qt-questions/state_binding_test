#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "statemachine.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute( Qt::AA_EnableHighDpiScaling );

    QGuiApplication app( argc, argv );

    qmlRegisterSingletonType<StateMachine>( "com.company.statemachine", 1, 0, "StateMachine", &StateMachine::qmlSingletonInstance );

    qmlRegisterUncreatableType<Support>( "com.company.statemachine.support", 1, 0, "Support", QStringLiteral( "Support should not be created in QML" ) );
    qRegisterMetaType<Support::ETestB>( "Support.ETestB" );
//    qRegisterMetaType<Support::ETestC>( "Support.ETestC" );


    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
