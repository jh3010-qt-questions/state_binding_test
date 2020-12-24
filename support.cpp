#include "support.h"



Support::
Support( QObject *parent )
  : QObject(parent)
{
  this->mTitle = "Some Text from Support";
}



QString
Support::
title( void ) const
{
  return this->mTitle;
}
