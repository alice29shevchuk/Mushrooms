#pragma once
#include"Mushrooms.h"
class Mushroom_like:public Mushrooms
{
protected:
	bool presence_of_chitin;
public:
	Mushroom_like()
	{
		this->name = "Mushroom_Like";
		this->stipe = 3;
		this->poison = true;
		this->presence_of_chitin = false;
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
		std::cout << "\nНазвание: " << this->name << "\nДлина ножки: " << this->stipe << "\nЯдовитость: " << proverkaPoison() << "\nНаличие хитина: "<<proverkaPresence_of_chitin()<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	}
};

