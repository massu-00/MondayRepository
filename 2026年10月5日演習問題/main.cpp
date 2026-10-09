#include<iostream>
#include"Enemy.h"
#include"Player.h"

using namespace std;

Player player;
Enemy enemy;

int main()
{
	srand((unsigned int)time(NULL));

	bool TurnFlag = true;
	int Choice;
	const int HP_min = 0;

	int* pHP;
	int* pDefence;
	int* eHP;
	int* eDefence;

	player.Init();
	enemy.Init();
	cout << "プレイヤーと敵が1対1で戦う、ターン制のバトルゲームです" << endl;

	while (true)
	{
		pHP = player.GetHP();
		pDefence = player.GetDefence();

		eHP = enemy.GetHP();
		eDefence = enemy.GetDefence();
		//プレイヤーのターン
		if (TurnFlag == true)
		{
			cout << "あなたのターンです" << endl;
			cout << "\nプレイヤーのステータス" << endl;
			player.ShowStatus();
			cout << "\n敵のステータス\n" << endl;
			enemy.ShowStatus();
			cout << "行動を選択してください　０：攻撃　１：回復" << endl;

			while (true)
			{
				cin >> Choice;
				if (Choice == 0)
				{
					player.PlayerAction(eHP,eDefence);
					break;
				}
				else if (Choice == 1)
				{
					player.Heal();
					break;
				}
				else
				{
					cout << "指定された数字を選択してください" << endl;
				}
			}
			TurnFlag = false;
		}
		//敵のターン
		else if(TurnFlag == false)
		{
			cout << "敵のターンです" << endl;
			Choice = rand() % 2;
			if (Choice == 0)
			{
				enemy.EnemyAction(pHP, pDefence);
			}
			else if (Choice == 1)
			{
				enemy.Heal();
			}
			TurnFlag = true;
		}

		if (*pHP < HP_min || *eHP < HP_min)
		{
			break;
		}
	}

	if (*pHP < HP_min)
	{
		cout << "敵の勝ちです" << endl;
	}
	else
	{
		cout << "あなたの勝ちです" << endl;
	}
}