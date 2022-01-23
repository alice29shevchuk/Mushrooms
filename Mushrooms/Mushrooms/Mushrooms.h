#pragma once
#include<iostream>
class Mushrooms
{
protected:
	std::string name;
	int stipe;
	bool poison;
public:
	Mushrooms()
	{
		this->name = "Mushrooms";
		this->stipe = 5;
		this->poison = false;
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
	std::string proverkaPoison()
	{
		return (getPoison() == true) ? "Ядовитые" : "Неядовитые";
	}
	virtual void print()
	{
		std::cout <<"Название: "<< this->name << "\nДлина ножки: " << this->stipe << "\nЯдовитость: " << proverkaPoison() << "\n";
	}
};

