#include "statemachine.h"

#include <QDebug>



StateMachine::
StateMachine( QObject *parent ) : QObject(parent)
{
    this->mSupport = new Support( this );

    qmlRegisterUncreatableType<Support>( "StateMachine", 1, 0, "Support", QStringLiteral( "Support should not be created in QML" ) );

    qInfo() << "New State Machine";

    this->mState = "on";
}


Support*
StateMachine::
support() const
{
  return mSupport;
}



QString
StateMachine::
state()
{
    return mState;
}



void
StateMachine::
setState( QString newState )
{
    this->mState = newState;

    qInfo() << "New State: " << this->mState;

    emit stateChanged();
}
