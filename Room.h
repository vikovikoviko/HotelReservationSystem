#pragma once

#include <string>


using namespace std;

class Room
{
private:

	unsigned int number = 0;
	unsigned int bed_count = 0;
	bool is_apartment = false;
	bool is_balcony = false;
	bool is_reserved = false;

public:

	Room(unsigned int number, unsigned int bed_count, bool is_apartment = false, bool is_balcony = false, bool is_reserved = false);

	const unsigned int getNumber()const;
	const unsigned int getBedCount()const;
	bool isApartment()const;
	bool isBalcony()const;

	void displayRoom()const;
	friend ostream& operator<<(ostream& out, const Room& room);
};