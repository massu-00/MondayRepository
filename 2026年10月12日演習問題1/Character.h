#pragma once
#include<iostream>
class Character
{
private:
	std::string name;

public:
	Character(std::string name)
	{
		this->name = name;
	}

	std::string GetName()
	{
		return name;
	}

	virtual void Attack() {};
};