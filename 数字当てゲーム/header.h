#pragma once
//定数

//カードの総maiisuu 

const int TOTAL_CARD = 28;
//１グループのカード枚数
const int GROUP_CARD = 7;
//カードの総枚数
const int MAX_NUMBER = 7;

//関数

//28枚のカード作成
void createCard(int cards[]);

//カードをシャッフル
void shuffleCard(int cards[]);

//
void showCard(int cards[]);

//カードを表示
void showHitddenCard(int cards[]);