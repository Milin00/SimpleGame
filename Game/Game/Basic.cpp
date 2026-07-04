#include "Basic.h"
Basic::Basic()
{
	srand(static_cast<unsigned int>(time(nullptr)));
	while (hp < 50)
	{
		hp = rand() % 100;
	}
}
