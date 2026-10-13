#include<iostream>
#include"Player.h"
#include"Enemy.h"
#include"Boss.h"

using namespace std;

int main()
{
	Player player;
	Enemy enemy;
	Boss boss;
	
	Character* character;

	character = &player;
	character->Attack();
	character = &enemy;
	character->Attack();
	character = &boss;
	character->Attack();

	return 0;
}