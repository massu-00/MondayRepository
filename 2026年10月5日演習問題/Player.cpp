#include "Player.h"
#include<iostream>
using namespace std;

void Player::PlayerAction(int* eHP, int* eDefence)
{
	int DamageAmount = rand() % 12 + 1;
	if (DamageAmount + Attack > *eDefence)
	{
		int Damage = (DamageAmount + Attack) - *eDefence;
		*eHP -= Damage;
		cout << "==============================\n" 
			 << Damage << "ƒ_ƒ[ƒW‚ð—^‚¦‚Ü‚µ‚½\n" 
			 << "==============================" << endl;
	}
	else
	{
		cout << "==============================\n"
			 << "UŒ‚‚ð–h‚ª‚ê‚Ü‚µ‚½\n" 
			 << "==============================" << endl;
	}
}