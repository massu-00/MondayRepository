#include<iostream>
#include"20260706_Header1_masuda.h"
using namespace std;
//回復
void Heal(int &num)
{
	num += 20;
}

//ゲーム全体の進行
void Game()
{
	int Healsh = 100;
	int Player = 0;

	cout << "現在のHP:" << Healsh << "\n"
		<< "回復しますか？\n"
		<< "Yes:1、No:2" << endl;
	cin >> Player;

	if (Player == 1)
	{
		Heal(Healsh);
	}
	cout << "現在のHP:" << Healsh << endl;
}