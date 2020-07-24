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

public:

	Room(unsigned int number, unsigned int bed_count, bool is_apartment = false, bool is_balcony = false);

	const unsigned int getNumber()const;
	const unsigned int getBedCount()const;
	bool isApartment()const;
	bool isBalcony()const;

};