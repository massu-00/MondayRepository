#include<iostream>
#include"20260706_HeaderMain2_masuda.h"
using namespace std;

void Game()
{
	srand((unsigned int)time(NULL));
	int Player = 0;
	int Enemy = 0;
	int EXP = 0;
	int Lv = 1;
	int match = 0;
	int judge = 0;
	cout << "ゲーム概要\n"
		<< "CPUとじゃんけんを行います\n"
		<< "じゃんけんに勝利すると経験値を獲得します\n"
		<< "経験値が一定値に達するとレベルアップします\n"
		<< "レベル5になるとゲームクリアです" << endl;

	//ゲーム開始
	while (Lv != 5)
	{
		cout << match + 1 << "回目\n"
			<< "Lv." << Lv << "\n"
			<< "EXP:" << EXP << "\n"
			<< "\nグー：０　チョキ：１　パー：２" << endl;

		InputCheck(Player);
		Enemy = rand() % 3;
		judge = Judge(Player, Enemy);//戻り値あり
		EXP += Addpoint(judge);//戻り値あり
		Lv += LevelUp(EXP);//戻り値あり
		EXP = EXPdown(EXP);
		match++;
	}
	cout << "ゲームクリア" << endl;
}

void InputCheck(int &num)
{
	while (true)
	{
		cin >> num;
		if (num < 0 || 2 < num)
		{
			cout << "入力に誤りがあります" << endl;
		}
		else
		{
			break;
		}
	}
}

int Judge(int Player ,int Enemy)
{
	if (Player - Enemy == -2)
	{
		cout << "PlayerWIN" << endl;
		return 1;
	}
	else if (Player - Enemy == -1)
	{
		cout << "CPUWIN" << endl;
		return 0;
	}
	else
	{
		cout << "DRAW" << endl;
	}
}

int Addpoint(int num)
{
	srand((unsigned int)time(NULL));
	int point = 0;
	if (num == 1)
	{
		point = rand() % 15 + 1;
	}
	cout << point << "EXP獲得" << endl;
	return point;
}

int LevelUp(int num)
{
	int AddLevel = 0;
	if (num > 20)
	{
		AddLevel++;
		num -= 20;
	}
	return AddLevel;
}

int EXPdown(int num)
{
	if (num > 20)
	{
		num -= 20;
	}
	return num;
}