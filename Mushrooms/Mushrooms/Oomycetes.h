#pragma once
#include"Mushroom_like.h"
class Oomycetes:public Mushroom_like
{
	bool presence_of_syncytium;
public:
	Oomycetes()
	{
		this->name = "Oomycetes";
		this->stipe = 4;
		this->poison = true;
		this->presence_of_chitin = false;
		this->presence_of_syncytium = true;
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
	bool getPresence_of_syncytium()
	{
		return this->presence_of_syncytium;
	}
	std::string proverkaPoison()
	{
		return (getPoison() == true) ? "Ядовитые" : "Неядовитые";
	}
	std::string proverkaPresence_of_chitin()
	{
		return (getPresence_of_chitin() == true) ? "Есть хитин" : "Нет хитина";
	}
	std::string proverkaPresence_of_syncytium()
	{
		return (getPresence_of_syncytium() == true) ? "Есть синцитий" : "Нет синцития";
	}
	virtual void print()
	{
		std::cout << "\n\t\t\tНазвание: " << this->name << "\n\t\t\tДлина ножки: " << this->stipe << "\n\t\t\tЯдовитость: " << proverkaPoison() << "\n\t\t\tНаличие хитина: " << proverkaPresence_of_chitin() << "\n\t\t\tНаличие синцития: "<<proverkaPresence_of_syncytium()<<"\n========================================================================================================================";
	}
};

