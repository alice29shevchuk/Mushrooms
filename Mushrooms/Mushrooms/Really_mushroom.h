#pragma once
#include"Mushrooms.h"
class Really_mushroom:public Mushrooms
{
protected:
	bool presence_of_chitin;
public:
	Really_mushroom()
	{
		this->name = "Really_mushroom";
		this->stipe = 6;
		this->poison = false;
		this->presence_of_chitin = true;
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
		return (getPoison() == true) ? "��������" : "����������";
	}
	std::string proverkaPresence_of_chitin()
	{
		return (getPresence_of_chitin() == true) ? "���� �����" : "��� ������";
	}
	virtual void print()
	{
		std::cout << "\n��������: " << this->name << "\n����� �����: " << this->stipe << "\n����������: " << proverkaPoison() << "\n������� ������: " << proverkaPresence_of_chitin() << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	}
};

