import QtQuick 2.0

import com.company.statemachine 1.0



Item
{
    id: element

    property color offColor:     "red"
    property color onColor:      "green"
    property color defaultColor: "gray"

    state: StateMachine.state



    Connections
    {
        target: StateMachine

        onStateChanged:
        {
            console.log( "StateBox State: " + StateMachine.state );
        }
    }



    Rectangle
    {
        id: rectangle

        color: defaultColor

        anchors.fill: parent
        radius: width
    }



    states:
    [
        State
        {
            name: "on"

            PropertyChanges
            {
                target: rectangle
                color:  onColor
            }
        },

        State
        {
            name: "off"

            PropertyChanges
            {
                target: rectangle
                color:  offColor
            }
        }
    ]
}
