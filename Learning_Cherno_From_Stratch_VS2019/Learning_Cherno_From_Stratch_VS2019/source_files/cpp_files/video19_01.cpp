#include <iostream>
#define LOG(x) std::cout << x << std::endl;
#define struct class
struct Player
{
public:
	int x = 0;
	int y = 0;
	int speed = 0;


public:
	void Move(int dx,int dy)
	{
		x = x + dx;
		y = y + dy;
		speed = dx * dy;
	}
	Player(){}
	Player(int x, int y, int speed) :x(x), y(y), speed(speed)
	{

	}
	void Print_Data()
	{
		std::cout << "=================" << std::endl;
		LOG(x);
		LOG(y);
		LOG(speed);
		std::cout << "=================" << std::endl;
	}
};

int main()
{
	Player player_01;
	Player player_02(1, 1, 1);
	player_01.Print_Data();
	player_02.Print_Data();
	std::cout << player_02.x << std::endl;
}

/*
1)struct and class
	�ڽ��������Ƶ�У���Ҫ����������ǹ���struct ��class�ģ������������ϵ��Ƿǳ����Ƶģ�ֻ������
��Щ���Ƶ�ʵ�ַ�ʽ��һ�����ѣ�����һ����ͬ�������classû��ָ������Ȩ�޵�ʱ����ô��ʱ��compiler
Ĭ��Ϊ��private��Ҳ����class֮����û�а취ʹ�õġ���struct��ǡ�����෴�ġ�

2���������ߵ�ʹ��
	������ǹ����Լ���ʹ��ϰ�߶��ѣ��Լ��ı�̷������ô���ģ�Ҳ����˵��һ���ֵ��������ǿ��Ը���
�Լ���ϰ�߷�ʽ���б�д���롣
*/