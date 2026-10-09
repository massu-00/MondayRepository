#pragma once
class Charactor
{
protected:
	int health = 100;//体力
	int Attack = 0;//攻撃力
	int Defence = 0;//防御力
	int Escape = 0;//回避力

public:
	void Init();
	void Heal();
	void ShowStatus();

	int* GetHP();
	int* GetDefence();
};

