#ifndef SUPPORT_H
#define SUPPORT_H

#include <QObject>

class Support : public QObject
{
    Q_OBJECT

    Q_PROPERTY( QString title READ title NOTIFY titleChanged )

//    Q_CLASSINFO( "RegisterEnumClassesUnscoped", "false" )


  public:

    explicit Support( QObject *parent = nullptr );

    enum class ETestB
    {
      Ddddd,
      Eeeee,
      Fffff
    };
    Q_ENUM( ETestB );

//    enum class ETestC
//    {
//      Ggggg,
//      Ddddd,
//      Eeeee,
//      Fffff
//    };
//    Q_ENUM( ETestC );


    QString title( void ) const;

  signals:

    void titleChanged();

  public slots:


  private:

    QString mTitle;

};

//typedef Support::ETestB ETestB;

#endif // SUPPORT_H
