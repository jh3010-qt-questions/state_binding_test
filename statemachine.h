#ifndef STATEMACHINE_H
#define STATEMACHINE_H

#include <QObject>
#include <QQmlEngine>

#include "support.h"



class StateMachine : public QObject
{
        Q_OBJECT

        Q_PROPERTY( QString   state   READ state    WRITE setState NOTIFY stateChanged )
        Q_PROPERTY( Support*  support READ support  CONSTANT )

    public:

        static QObject* qmlSingletonInstance( QQmlEngine* engine, QJSEngine* scriptEngine )
        {
            Q_UNUSED( engine )
            Q_UNUSED( scriptEngine )

            return new StateMachine();
        }

        enum class ETestA
        {
          Aaaaa,
          Bbbbb,
          Ccccc
        };
        Q_ENUM( ETestA );


        Support* support() const;


    signals:

        void stateChanged();

    public slots:

    private:

        explicit StateMachine( QObject *parent = nullptr) ;

        Support* mSupport;

        QString mState;

        QString state();
        void    setState( QString value );
};

#endif // STATEMACHINE_H
