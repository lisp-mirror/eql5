import QtQuick 2.2
import QtQuick.Layouts 1.1
import QtQuick.Controls 1.2
import EQL5 1.0

ApplicationWindow {
    id: window
    objectName: "window"
    visible: true
    title: "Table View Example"

    toolBar: ToolBar {
        TextField {
            id: search_box
            placeholderText: "Search..."
            width: window.width / 5 * 2

            anchors.right: parent.right
            anchors.verticalCenter: parent.verticalCenter

            onTextChanged: Lisp.call("table:filter", text)
        }
    }

    TableView {
        id: table_view
        objectName: "table_view"
        frameVisible: false
        sortIndicatorVisible: true
        anchors.fill: parent

        Layout.minimumWidth: 400
        Layout.minimumHeight: 240
        Layout.preferredWidth: 600
        Layout.preferredHeight: 400

        function sort() { Lisp.call("table:sort-column", getColumn(sortIndicatorColumn).role, sortIndicatorOrder) }

        Component.onCompleted: sort()
        onSortIndicatorOrderChanged: sort()
        onSortIndicatorColumnChanged: sort()

        TableViewColumn {
            id: title_column
            title: "Title"
            role: "title"
            movable: false
            resizable: false
            width: table_view.viewport.width - author_column.width
        }

        TableViewColumn {
            id: author_column
            title: "Author"
            role: "author"
            movable: false
            resizable: false
            width: table_view.viewport.width / 3
        }
        
        model: sortFilterModel
    }
}
