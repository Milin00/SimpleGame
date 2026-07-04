#pragma once
#include <iostream>
#include"Player.h"
#include"Enemy.h"
class GameManager
{
private:
	int ob = 0;
public:
	GameManager(Player& player, Enemy& slime,Enemy& goblin);
	void GameStart(Player& player, Enemy& slime, Enemy& goblin);
	int Setob(int ob);
};

