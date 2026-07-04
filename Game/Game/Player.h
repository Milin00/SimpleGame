#pragma once
#include"Basic.h"
class Player:Basic
{
public:
	Player();
	int attacked();
	void damage(int x);
	int Gethp() const;
	int Getattack() const;
};

