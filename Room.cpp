#include "Room.h"

Room::Room(unsigned int number, unsigned int bed_count, bool is_apartment, bool is_balcony)
	:number(number), bed_count(bed_count), is_apartment(is_apartment), is_balcony(is_balcony)
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
