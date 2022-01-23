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
		return (getPoison() == true) ? "��������" : "����������";
	}
	std::string proverkaPresence_of_taxa()
	{
		return (getPresence_of_taxa() == true) ? "���� �������" : "��� �������";
	}
	std::string proverkaPresence_of_syncytium()
	{
		return (getPresence_of_syncytium() == true) ? "���� ��������" : "��� ��������";
	}
	virtual void print()
	{
		std::cout << "\n��������: " << this->name << "\n����� �����: " << this->stipe << "\n����������: " << proverkaPoison() << "\n������� ��������: " << proverkaPresence_of_taxa() << "\n������� ��������: "<<proverkaPresence_of_syncytium()<<"\n";
	}
};

