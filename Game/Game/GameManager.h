#pragma once
#include <iostream>
#include"Player.h"
#include"Enemy.h"
class GameManager
{
private:
	int ob = 0;
	Player& player;
	Enemy& slime;
	Enemy& goblin;
public:
	GameManager(Player& player, Enemy& slime, Enemy& goblin)
		: player(player), slime(slime), goblin(goblin){ };
	void GameStart();
	void Setob(int ob);
};

