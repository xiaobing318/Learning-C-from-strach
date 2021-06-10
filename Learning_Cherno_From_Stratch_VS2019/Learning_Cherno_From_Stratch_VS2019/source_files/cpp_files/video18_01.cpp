#include <iostream>
#define LOG(x) std::cout << x << std::endl;

class Player
{
public:
	int x = 0;
	int y = 0;
	int speed = 0;

public:
	void Move_class(int dx, int dy)
	{
		x = x + dx;
		y = y + dy;
		speed = speed + dx * dy;
	}

	void Print_data_class()
	{
		std::cout << "===============" << std::endl;
		LOG(x);
		LOG(y);
		LOG(speed);
		std::cout << "===============" << std::endl;
	}
};

void Move_pointer(Player* player, int dx, int dy)
{
	player->x = player->x + dx;
	player->y = player->y + dy;
	player->speed = player->speed + dx * dy;
}

void Print_data(Player* player)
{
	std::cout << "===============" << std::endl;
	LOG(player->x);
	LOG(player->y);
	LOG(player->speed);
	std::cout << "===============" << std::endl;
}

void Move_ref(Player& player, int dx, int dy)
{
	player.x = player.x + dx;
	player.y = player.y + dy;
	player.speed = player.speed + dx * dy;
}

void Print_data_ref(Player& player)
{
	std::cout << "==============" << std::endl;
	LOG(player.x);
	LOG(player.y);
	LOG(player.speed);
}

int main()
{
	Player player;
	Print_data_ref(player);
	Move_ref(player, 1, 1);
	Print_data_ref(player);
}


/*
1)conclusion
	1、class只是一种数据类型，只不过是为了我们的方便而已
	2、references的确会使得代码变得简洁一些
2）thinking
	class只是一种数据类型，这么说是有一些不准确的，因为在类中还包含了一些methods。这种形式是让我
们编写程序的时候轻松了很多。
	假设我们没有class的时候，那么我们将会使得我们的数据变得很messy，另外当我们想要修改一些数据的
时候，那么我们就不得不借助pointer或者是reference（其本质是pointers），这两者就是直接在数据地址
上进行操作数据的。那么有了class之后，class中的methods将会直接在其data上面进行操作，给我们的感觉
就是在每一个function内部进行的数据操作，但是这种操作方式还是有一定的误解，会让我们误以为是给每一
个数据都拷贝了相应的方法，但是通过之前的学习我们知道，C++并不是这样操作的，而只是拷贝了一份对应的
function，那么这里面涉及到了this pointer，但其实还是pointer进行的操作，看来本质上都是一样的。
*/