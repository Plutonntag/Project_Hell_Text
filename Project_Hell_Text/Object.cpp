#include "Object.h"

Object_Hell::Object_Hell(std::string n, bool p, bool b, Type e, std::string userType)
{

}

Object_Hell::~Object_Hell()
{

}

		//NAME

std::string Object_Hell::getName()
{
	return std::string();
}

void Object_Hell::setName(std::string n)
{
	Name = n;
}

		//PASSIVE

void Object_Hell::setPassive(bool p)
{
	Passive = p;

}

bool Object_Hell::getPassive()
{
	return Passive;
}

		//BONUS

bool Object_Hell::getBonus()
{
	return Bonus;
}

void Object_Hell::setBonus(bool b)
{
	Bonus = b;
}

		//Type 


Type Object_Hell::getType()
{
	return ElementType;
}

void Object_Hell::setType(Type e)
{
	ElementType = e;
}

std::string Object_Hell::GetTypeString()
{
	switch (ElementType) {
	case Type::heal:
		return "heal";
	case Type::vision:
		return "vision";
	
	}
}

		//DESCRIPTION

std::string Object_Hell::getDes()
{
	return std::string();
}

