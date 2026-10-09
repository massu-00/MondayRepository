#include "Charactor.h"
#include<iostream>

using namespace std;

void Charactor::Init()
{
	Attack = rand() % 20 + 1;
	Defence = rand() % 20 + 1;
	Escape = rand() % 20 + 1;
}

void Charactor::Heal()
{
	int HealAmount = 0;
	HealAmount = rand() % 12 + 1;
	cout<< "======================================\n"
		<< "‘Ì—Í‚ð" << HealAmount << "‰ñ•œ‚µ‚Ü‚µ‚½\n" 
		<< "======================================" << endl;
	health += HealAmount;
	if (health > 100)
	{
		health = 100;
	}
}

void Charactor::ShowStatus()
{
	cout << "‘Ì—ÍF" << health << "\n"
		<< "UŒ‚—ÍF" << Attack << "\n"
		<< "–hŒä—ÍF" << Defence << "\n"
		<< "‰ñ”ð—ÍF" << Escape << endl;
}

int* Charactor::GetHP()
{
	return &health;
}

int* Charactor::GetDefence()
{
	return &Defence;
}