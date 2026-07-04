#include<iostream>
#include"Player.h"
#include"Enemy.h"
#include"GameManager.h"

int main()
{
	Player* player = new Player;
	Enemy* slime = new Enemy;
	Enemy* goblin = new Enemy;
	GameManager* game = new GameManager(*player, *slime, *goblin);
	while (player->Gethp() > 0 || (slime->Gethp() > 0 && goblin->Gethp() > 0))
	{
		std::cout << "プレイヤー攻撃力:" << player->Getattack() << std::endl;
		std::cout << "スライム攻撃力:" << slime->Getattack() << std::endl;
		std::cout << "ゴブリン攻撃力:" << goblin->Getattack() << std::endl;
		std::cout << std::endl;
		std::cout << "どの敵を攻撃しますか?\n1:スライム\n2:ゴブリン" << std::endl;
		int x;
		std::cin >> x;
		game->Setob(x);
		game->GameStart(*player, *slime, *goblin);
	}
}