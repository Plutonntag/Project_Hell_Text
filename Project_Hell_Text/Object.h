#pragma once
#include <iostream>



enum class Type {
	heal,
	vision,
	Truth,
	Backloop,
	Luck,
	Withdraw,
	Death
		
};


class Object_Hell
{
	std::string Name;
	bool Passive;
	bool Bonus;
	Type ElementType;


public:

	Object_Hell(std::string n, bool p, bool b, Type e);
	 
	~Object_Hell();


	std::string getName();
	void setName(std::string n);

	bool getPassive();
	void setPassive(bool p);

	bool getBonus();
	void setBonus(bool b);

	Type getType();
	void setType(Type e);







};



