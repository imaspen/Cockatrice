#ifndef TAB_SERVER_H
#define TAB_SERVER_H

#include <QGroupBox>
#include <QTreeWidget>
#include <QTextBrowser>
#include "tab.h"

class AbstractClient;
class QTextEdit;
class QLabel;
class UserList;
class QPushButton;

class Event_ListRooms;
class Event_ServerMessage;
class ProtocolResponse;
class ServerInfo_Room;

class RoomSelector : public QGroupBox {
	Q_OBJECT
private:
	QTreeWidget *roomList;
	QPushButton *joinButton;
	AbstractClient *client;
	
	void joinRoom(int id, bool setCurrent);
private slots:
	void processListRoomsEvent(Event_ListRooms *event);
	void joinClicked();
	void joinFinished(ProtocolResponse *resp);
signals:
	void roomJoined(ServerInfo_Room *info, bool setCurrent);
public:
	RoomSelector(AbstractClient *_client, QWidget *parent = 0);
	void retranslateUi();
};

class TabServer : public Tab {
	Q_OBJECT
signals:
	void roomJoined(ServerInfo_Room *info, bool setCurrent);
private slots:
	void processServerMessageEvent(Event_ServerMessage *event);
private:
	AbstractClient *client;
	RoomSelector *roomSelector;
	QTextBrowser *serverInfoBox;
public:
	TabServer(TabSupervisor *_tabSupervisor, AbstractClient *_client, QWidget *parent = 0);
	void retranslateUi();
	QString getTabText() const { return tr("Server"); }
};

#endif
