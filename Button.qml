import QtQuick 2.0

Rectangle {
    id: root

    signal clicked()

    width: 640
    height: 480

    Text {
        text: qsTr("Hello World")
    }

    MouseArea {
        anchors.fill: parent
        onClicked: root.clicked()
    }
}
