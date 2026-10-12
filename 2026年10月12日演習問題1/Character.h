#pragma once
#include<iostream>

class Character
{
private:
	std::string name;

public:
	void GetName()
	{
		cin >> name;
	}
	virtual void Attack();
};