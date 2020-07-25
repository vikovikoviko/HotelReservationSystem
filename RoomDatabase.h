#pragma once

#include "Room.h"
#include <vector>

using namespace std;

class RoomDatabase
{
private:
	static RoomDatabase* instance;//Singleton
	vector<Room> rooms;

	// Private constructor so that no objects can be created.
	RoomDatabase() {
		rooms = vector<Room>();
	}

public:
	static RoomDatabase* getInstance();
	void addRoom(const Room& new_room);
	void sortByBeds();
	void displayAllRooms()const;
};