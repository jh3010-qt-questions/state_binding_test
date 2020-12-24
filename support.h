#ifndef SUPPORT_H
#define SUPPORT_H

#include <QObject>

class Support : public QObject
{
    Q_OBJECT

    Q_PROPERTY( QString title READ title NOTIFY titleChanged )


  public:

    explicit Support( QObject *parent = nullptr );

    enum class ETestB
    {
      Ddddd,
      Eeeee,
      Fffff
    };
    Q_ENUM( ETestB );

    QString title( void ) const;

  signals:

    void titleChanged();

  public slots:


  private:

    QString mTitle;

};

#endif // SUPPORT_H
