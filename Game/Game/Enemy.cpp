#include "Enemy.h"
Enemy::Enemy()
{
	attack = rand() % 11;
}
int Enemy::attacked()
{
	attack = rand() % 11;
	return attack;
}

int Enemy::Gethp() const
{
	return hp;
}
void Enemy::damage(int x)
{
	hp-=x;
}
int Enemy::Getattack() const
{
	return attack;
}