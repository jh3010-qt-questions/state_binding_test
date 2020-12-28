#include "statemachine.h"

#include <QDebug>



StateMachine::
StateMachine( QObject *parent ) : QObject(parent)
{
    this->mSupport = new Support( this );

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
