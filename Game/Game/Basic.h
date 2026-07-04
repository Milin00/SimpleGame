#pragma once
#include<iostream>
#include<random>
#include<time.h>
class Basic
{
protected:
	int hp = rand() % 101;
	int attack = 0;
public:
	Basic();
};

