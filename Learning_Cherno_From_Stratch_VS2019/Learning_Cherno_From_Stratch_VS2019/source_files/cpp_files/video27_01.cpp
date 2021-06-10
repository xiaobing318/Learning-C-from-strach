/*
1)说明
	这个视频中我们将要学习的内容是关于inherit的,那么从字面意思上理解这是什么意思？得到一些原本已
经存在的东西，这就是inherit，就比如说inherit遗产，那么这就说明一个得到了已经存在了的东西，而不用
自己再去努力实现这些已经存在的东西，这便是inherit的意义所在。

	那么我的问题就是为什么我们需要这个inherit，这个性质或者叫做feature为我们带来了什么？或者说这
个feature可以为我们解决什么样的问题？
	有时候，我们会有这样一种思想：不希望重复的造轮子，那么我们想要做的事情就是把已经存在的轮子拿过
来直接进行使用，在这种情况下，这便是我们想要达到的一个目的。因而这也是我们需要inherit的原因，因为
它可以帮助我们达到这样的目的或者是要求。
	当然了，这个实现的对象则是class，也就是说我们达到这样的目的之后我们所得到的东西依然是一个class
那么对于一个class而言，我们需要了解的事情有哪些？
		1、constructor
		2、destructor
		3、data members
		4、method members
	我觉得这个东西并不是有多么的神奇，这些feature的实现只是为了我们更加轻松的进行编程，其实质上还
只是一个class而已，那么也会按照相对应的规则或者是方便程度进行实现这个性质，那么data memebers的存
储形式是怎么样的？
	通过检查相对应的内存空间，我们可以知道这两个class的data memebers是存储到一起的，只不过parent
class 的data memebers是先存储的，然后才是subclass，所谓的subclass只不过是在parent class的基础
上新增加了一些data and methods memebers，这就是两者的本质。

	所谓的inherit，我们可以理解成是一种duplicate the code which we have worrten
*/
#include <iostream>
class Entity
{
private:
	int m_x;
	int m_y;

public:
	Entity()
	{
		m_x = 1;
		m_y = 2;
	}

	Entity(int p_a,int p_b)
		:m_x(p_a),m_y(p_b)
	{

	}

	void PirntData()
	{
		std::cout << m_x << "," << m_y << std::endl;
	}

	virtual void PrintAddress()
	{
		int* address_m_x = &m_x;
		int* address_m_y = &m_y;
		std::cout << "the address of m_x:" << address_m_x << std::endl;
		std::cout << "the address of m_y:" << address_m_y << std::endl;
	}
};

class Player :public Entity
{
private:
	int m_z;

public:
	Player()
	{
		m_z = 3;
	}

	Player(int p_a,int p_b,int p_c)
		:Entity(p_a,p_b)
	{
		m_z = p_c;
	}

	void PrintData()
	{
		//std::cout << m_x << "," << m_y << "," << m_z << std::endl;
		std::cout << m_z << std::endl;
	}

	void PrintAddress()
	{
		int* address_m_z = &m_z;
		std::cout << "the address of m_z:" << address_m_z << std::endl;
	}
};


int main()
{
	Entity entity;
	Player player(1,2,3);
	Player* address_player = &player;
	entity.PrintAddress();
	std::cout << "===========" << std::endl;
	player.PrintAddress();
	
}