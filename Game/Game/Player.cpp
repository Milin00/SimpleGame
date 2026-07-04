#include "Player.h"
Player::Player()
{
	attack = rand() % 21;
}
int Player::attacked()
{
	attack = rand() % 21;
	return attack;
}
int Player::Gethp() const
{
	return hp;
}
void Player::damage(int x)
{
	hp -= x;
}
int Player::Getattack() const
{
	return attack;
}