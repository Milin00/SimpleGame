#include "GameManager.h"
GameManager::GameManager(Player& player,Enemy& slime,Enemy& goblin)
{
	std::cout << "プレイヤー残りhp:" << player.Gethp() << std::endl;
	std::cout << "スライム残りhP:" << slime.Gethp() << std::endl;
	std::cout << "スライム残りhP:" << slime.Gethp() << std::endl;
}
void GameManager::GameStart(Player& player, Enemy& slime, Enemy& goblin)
{
	if (ob == 1)
	{
		slime.damage(player.attacked());
		if (slime.Gethp() > 0)
		{
			player.damage(slime.attacked());
			std::cout << "スライム残りhP:" << slime.Gethp() << std::endl;
		}
		if (goblin.Gethp() > 0)
		{
			player.damage(goblin.attacked());
			std::cout << "ゴブリン残りhP:" << goblin.Gethp() << std::endl;
		}
		std::cout << "プレイヤー残りhp:" << player.Gethp() << std::endl;
	}
	else if (ob == 2)
	{
		goblin.damage(player.attacked());
		if (slime.Gethp() > 0)
		{
			player.damage(slime.attacked());
			std::cout << "スライム残りhP:" << slime.Gethp() << std::endl;
		}
		if (goblin.Gethp() > 0)
		{
			player.damage(goblin.attacked());
			std::cout << "ゴブリン残りhP:" << goblin.Gethp() << std::endl;
		}
		std::cout << "プレイヤー残りhp:" << player.Gethp() << std::endl;
	}
	else
	{
		std::cout << "有効な数字を入力してください" << std::endl;
	}
}
int GameManager::Setob(int ob)
{
	this->ob = ob;
	return ob;
}