#pragma once
#include"Mushrooms.h"
class Mushroom_like:public Mushrooms
{
protected:
	bool presence_of_taxa;
public:
	Mushroom_like()
	{
		this->name = "Mushroom_Like";
		this->stipe = 3;
		this->poison = true;
		this->presence_of_taxa = true;
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
	std::string proverkaPoison()
	{
		return (getPoison() == true) ? "��������" : "����������";
	}
	std::string proverkaPresence_of_taxa()
	{
		return (getPresence_of_taxa() == true) ? "���� �������" : "��� �������";
	}
	virtual void print()
	{
		std::cout << "\n��������: " << this->name << "\n����� �����: " << this->stipe << "\n����������: " << proverkaPoison() << "\n������� ��������: "<<proverkaPresence_of_taxa()<<"\n";
	}
};

