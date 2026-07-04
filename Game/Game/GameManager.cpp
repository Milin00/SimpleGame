#include "GameManager.h"
void GameManager::GameStart()
{
    int playerAttack = player.attacked();
    int slimeAttack = slime.attacked();
    int goblinAttack = goblin.attacked();
    std::cout << std::endl;
    if (ob == 1)
    {
        slime.damage(playerAttack);
    }
    else if (ob == 2)
    {
        goblin.damage(playerAttack);
    }
    else
    {
        std::cout << "有効な数字を入力してください\n";
        return;
    }

    if (slime.Gethp() > 0)
    {
        player.damage(slimeAttack);
        std::cout << "スライム残りHP:" << slime.Gethp() << std::endl;
    }

    if (goblin.Gethp() > 0)
    {
        player.damage(goblinAttack);
        std::cout << "ゴブリン残りHP:" << goblin.Gethp() << std::endl;
    }

    std::cout << "プレイヤー残りHP:" << player.Gethp() << std::endl;
}
void GameManager::Setob(int ob)
{
	this->ob = ob;
}