#include "Enemy.h"
#include<iostream>
using namespace std;

void Enemy::EnemyAction(int* pHP, int* pDefence)
{
	int DamageAmount = rand() % 12 + 1;
	if (DamageAmount + Attack > *pDefence)
	{
		int Damage = (DamageAmount + Attack) - *pDefence;
		*pHP -= Damage;
		cout << "==============================\n" 
			 << Damage << "ƒ_ƒ[ƒW‚ðŽó‚¯‚Ü‚µ‚½\n" 
			 << "==============================" << endl;
	}
	else
	{
		cout << "================\n" 
			 << "UŒ‚‚ð–h‚¬‚Ü‚µ‚½\n" 
			 << "================" << endl;
	}
}