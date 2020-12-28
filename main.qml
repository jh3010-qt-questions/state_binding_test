import QtQuick 2.10
import QtQuick.Window 2.10
import QtQuick.Controls 2.12

import com.company.statemachine         1.0
import com.company.statemachine.support 1.0

//import Support 1.0


Window
{
  id: window
    width:  640
    height: 480

    visible: true

    title: qsTr( "Hello World" )

//    Connections
//    {
//        target: StateMachine

//        onStateChanged:
//        {
//            console.log( "Window State: " + StateMachine.state );
//        }
//    }

//    StateBox
//    {
//        id: myBox

//        x: 220
//        y: 140

//        width:  200
//        height: 200

//        MouseArea
//        {
//            id: mouseArea

//            anchors.fill: parent

//            onClicked:
//            {
//                if ( parent.state === "on" )
//                {
//                    StateMachine.state = "off"
//                }
//                else
//                {
//                    StateMachine.state = "on"
//                }
//            }
//        }
//    }

    Label {
        id: label

        x: 54

        width: 502
        height: 33

        text: {

          console.log( "Aaaaa: ", StateMachine.Aaaaa );
          console.log( "Aaaaa: ", StateMachine.Bbbbb );
          console.log( "Aaaaa: ", StateMachine.Ccccc );

          console.log( "Ddddd: ", Support.Ddddd );
          console.log( "Eeeee: ", Support.Eeeee );
          console.log( "Fffff: ", Support.Fffff );

          return StateMachine.support.title;
        }

        anchors.top: parent.top

        font.bold: true
        font.pointSize: 24

        anchors.topMargin: 49
        anchors.horizontalCenter: parent.horizontalCenter
    }


}
