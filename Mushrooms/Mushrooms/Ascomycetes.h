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
		this->mycelium = "��������������";
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
		return (getPoison() == true) ? "��������" : "����������";
	}
	std::string proverkaPresence_of_chitin()
	{
		return (getPresence_of_chitin() == true) ? "���� �����" : "��� ������";
	}
	virtual void print()
	{
		std::cout << "\n��������: " << this->name << "\n����� �����: " << this->stipe << "\n����������: " << proverkaPoison() << "\n������� ������: " << proverkaPresence_of_chitin() << "\n�������: " << this->mycelium << "\n";
	}
};

