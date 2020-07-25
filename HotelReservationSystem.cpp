#include <iostream>

#include "Room.h"
#include "RoomDatabase.h"

int main()
{
	RoomDatabase *a = a->getInstance();
	a->addRoom(Room(101, 2));
	a->addRoom(Room(102, 2));
	a->addRoom(Room(103, 2));
	a->addRoom(Room(104, 2));
	a->addRoom(Room(105, 4,1,1));
	a->displayAllRooms();
	return 0;
}