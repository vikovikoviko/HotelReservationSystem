#include "Room.h"
#include <iostream>
using namespace std;

Room::Room(unsigned int number, unsigned int bed_count, bool is_apartment, bool is_balcony, bool is_reserved)
	:number(number), bed_count(bed_count), is_apartment(is_apartment), is_balcony(is_balcony), is_reserved(is_reserved)
{
}

const unsigned int Room::getNumber() const
{
	return number;
}

const unsigned int Room::getBedCount() const
{
	return bed_count;
}

bool Room::isApartment() const
{
	return is_apartment;
}

bool Room::isBalcony() const
{
	return is_balcony;
}

void Room::displayRoom() const
{
	cout << *this;
}

ostream& operator<<(ostream& out, const Room& room)
{
	out << room.number;
	if (room.is_apartment)out << "_A";
	out<< "\nbeds: " << room.bed_count;
	if (room.is_balcony)out << " with balcony";
	out << "\n";
	if (room.is_reserved)out << "reserved\n";
	out << "\n";
	return out;
}
