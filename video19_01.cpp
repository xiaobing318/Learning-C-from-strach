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
	在今天这个视频中，主要讲解的内容是关于struct 和class的，这两个本质上的是非常相似的，只不过是
有些机制的实现方式不一样而已，最大的一个不同点就在于class没有指定访问权限的时候，那么这时候compiler
默认为是private，也就是class之外是没有办法使用的。而struct则恰好是相反的。

2）关于两者的使用
	这个就是关于自己的使用习惯而已，自己的编程风格是怎么样的，也就是说这一部分的内容我们可以根据
自己的习惯方式进行编写代码。
*/