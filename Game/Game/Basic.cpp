#include "Basic.h"
Basic::Basic()
{
	while (hp < 50)
	{
		hp = rand() % 101;
	}
}
