#include<iostream>
#include "Player.h"
#include "Enemy.h"
#include "Boss.h"
#include "BattleManager.h"
int main(void)
{
	//コンストラクタ
	Player player("亜那蛇");
	Enemy enemy("手樹");
	Boss boss("墓栖");
	BattleManager manager;

	manager.StartBattle(&player);
	manager.StartBattle(&enemy);
	manager.StartBattle(&boss);

	return 0;
}
