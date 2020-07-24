#include "RoomDatabase.h"
#include <algorithm>
#include <cmath>
using namespace std;
//Initialize pointer to zero so that it can be initialized in first call to getInstance
RoomDatabase* RoomDatabase::instance = 0;

void RoomDatabase::addRoom(const Room& new_room)
{
	for (int i = 0;i < rooms.size();i++)
	{
		if (rooms[i].getNumber() == new_room.getNumber())
		{
			return;
		}
	}
	if (new_room.getNumber())
	{
		rooms.push_back(new_room);
	}
}

void RoomDatabase::sortByBeds()
{
	sort(rooms.begin(), rooms.end(), [](const Room& room1, const Room& room2) {return room1.getBedCount() < room2.getBedCount();});
}
