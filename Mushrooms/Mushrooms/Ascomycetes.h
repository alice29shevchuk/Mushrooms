#pragma once
#include"Really_mushroom.h"
class Ascomycetes:public Really_mushroom
{
	std::string mycelium;
public:
	Ascomycetes()
	{
		this->name = "Ascomycetes";
		this->stipe = 3;
		this->poison = false;
		this->presence_of_chitin = true;
		this->mycelium = "Многоклеточный";
	}
	std::string getName()
	{
		return this->name;
	}
	int getStipe()
	{
		return this->stipe;
	}
	bool getPoison()
	{
		return this->poison;
	}
	bool getPresence_of_chitin()
	{
		return this->presence_of_chitin;
	}
	std::string getMycelium()
	{
		return this->mycelium;
	}
	std::string proverkaPoison()
	{
		return (getPoison() == true) ? "Ядовитые" : "Неядовитые";
	}
	std::string proverkaPresence_of_chitin()
	{
		return (getPresence_of_chitin() == true) ? "Есть хитин" : "Нет хитина";
	}
	virtual void print()
	{
		std::cout << "\nНазвание: " << this->name << "\nДлина ножки: " << this->stipe << "\nЯдовитость: " << proverkaPoison() << "\nНаличие хитина: " << proverkaPresence_of_chitin() << "\nМицелий: " << this->mycelium << "\n";
	}
};

