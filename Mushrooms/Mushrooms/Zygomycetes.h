#pragma once
#include"Really_mushroom.h"
class Zygomycetes:public Really_mushroom
{
	std::string mycelium;
	std::string substances_in_cell_wall;
public:
	Zygomycetes()
	{
		this->name = "Zygomycetes";
		this->stipe = 3;
		this->poison = false;
		this->presence_of_chitin = true;
		this->mycelium = "�����������";
		this->substances_in_cell_wall = "����� � �������";
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
	std::string getSubstances_in_cell_wall()
	{
		return this->substances_in_cell_wall;
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
		std::cout << "\n��������: " << this->name << "\n����� �����: " << this->stipe << "\n����������: " << proverkaPoison() << "\n������� ������: " << proverkaPresence_of_chitin() << "\n�������: " << this->mycelium << "\n�������� � ��������� ������: " << this->substances_in_cell_wall << "\n";
	}
};


