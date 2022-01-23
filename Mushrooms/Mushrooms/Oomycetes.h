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
		this->presence_of_taxa = true;
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
	bool getPresence_of_taxa()
	{
		return this->presence_of_taxa;
	}
	bool getPresence_of_syncytium()
	{
		return this->presence_of_syncytium;
	}
	std::string proverkaPoison()
	{
		return (getPoison() == true) ? "Ядовитые" : "Неядовитые";
	}
	std::string proverkaPresence_of_taxa()
	{
		return (getPresence_of_taxa() == true) ? "Есть таксоны" : "Нет такснов";
	}
	std::string proverkaPresence_of_syncytium()
	{
		return (getPresence_of_syncytium() == true) ? "Есть синцитий" : "Нет синцития";
	}
	virtual void print()
	{
		std::cout << "\nНазвание: " << this->name << "\nДлина ножки: " << this->stipe << "\nЯдовитость: " << proverkaPoison() << "\nНаличие таксонов: " << proverkaPresence_of_taxa() << "\nНаличие синцития: "<<proverkaPresence_of_syncytium()<<"\n";
	}
};

