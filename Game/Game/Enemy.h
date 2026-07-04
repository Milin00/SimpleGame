#pragma once
#include"Basic.h"
class Enemy:Basic
{
public:
	Enemy();
	int attacked();
	void damage(int x);
	int Gethp() const;
	int Getattack() const;
};
