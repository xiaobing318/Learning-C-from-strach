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
	1��classֻ��һ���������ͣ�ֻ������Ϊ�����ǵķ������
	2��references��ȷ��ʹ�ô����ü��һЩ
2��thinking
	classֻ��һ���������ͣ���ô˵����һЩ��׼ȷ�ģ���Ϊ�����л�������һЩmethods��������ʽ������
�Ǳ�д�����ʱ�������˺ܶࡣ
	��������û��class��ʱ����ô���ǽ���ʹ�����ǵ����ݱ�ú�messy�����⵱������Ҫ�޸�һЩ���ݵ�
ʱ����ô���ǾͲ��ò�����pointer������reference���䱾����pointers���������߾���ֱ�������ݵ�ַ
�Ͻ��в������ݵġ���ô����class֮��class�е�methods����ֱ������data������в����������ǵĸо�
������ÿһ��function�ڲ����е����ݲ������������ֲ�����ʽ������һ������⣬������������Ϊ�Ǹ�ÿһ
�����ݶ���������Ӧ�ķ���������ͨ��֮ǰ��ѧϰ����֪����C++���������������ģ���ֻ�ǿ�����һ�ݶ�Ӧ��
function����ô�������漰����this pointer������ʵ����pointer���еĲ��������������϶���һ���ġ�
*/