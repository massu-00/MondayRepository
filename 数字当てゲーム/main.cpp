#include<iostream>
#include"header.h"

using namespace std;

void createCard(int cards[])
{
	int index = 0;
	int number = 0;
	int count = 0;

	for (number = 0; number < MAX_NUMBER - 1; number++)
	{
		for (count = 0; count < number + 1; count++)
		{
			cards[index] = number + 1;
			index++;
		}
	}
}

void sheffleCard(int cards[])
{
	srand((unsigned int)time(NULL));

	for (int i = 0; i < TOTAL_CARD; i++)
	{
		int randomeIndex = rand() % TOTAL_CARD;


		int temp = cards[i];
		cards[i] = cards[randomeIndex];
		cards[randomeIndex] = temp;

	}
}

void showCard(int cards[])
{
	for(int i)
}

void showHitddenCard(int cards[])
{

}