/*
1)说明
	今天将要学习的内容是关于virtual function的，那么什么是virtual function？为什么会有这个
函数？想要解决一个什么样的问题？这是我所关心的一个问题。
	那么我自己先来猜测一下这个virtual function是干什么的？首先他是一个function，那么对于
function，我们应该是比较了解的，由四个部分组成的：
		1、the tpye of return
		2、function name
		3、parameters
		4、the body of this function
	如果这个函数是virtual function的，那么如何与一般的function进行区分呢？我想一般会从上述的
四个部分进行改动，那么最常见的形式就是在其前面加上一个关键词virtual，这便是区别的一种方式。
	现在的问题变成了我们的需求是什么？也就是定义这样的函数其目的是为了解决什么样的困难？

2)解释
	我们的需求就是当我们写了多个class，并且这些class之间是一种继承的关系，那么这些class之间将会
产生一些共同之处（这里具体指的就是functions），那么当我们想要针对不同的classes的对象使用相对应
函数，那么我们需要做的就是将这些函数全部都重写一遍，从这个角度来说将会产生一些重复性的内容，因此
我们想要做到的目的就是使用一个接口（本质上却不是一个接口），那么在这种情况下，我们就会需要到virtual
function。

3）learning
	1、virtual function存在的意义，也就是解决了我们所遇到的问题
	2、一个小的skill：再利用virtual functions override的时候，我们可以把这个词加上去。
*/
#include <string>
#include <iostream>
class Entity
{
public:
	//那么这里的std::string代表着什么呢？首先这是一个return type，按道理来说应该是一个object
	virtual std::string GetName()
	{
		return "Entity";
	}
};

class Player :public Entity
{
private:
	std::string m_name;

public:
	Player(const std::string & name)
		:m_name(name)
	{

	}

	std::string GetName() override
	{
		return m_name;
	}

};

void PrintName(Entity* p_entity)
{
	std::cout << p_entity->GetName() << std::endl;
}

//void PrintName(Player* p_player)
//{
//	std::cout << p_player->GetName() << std::endl;
//}
int main()
{
	Entity* e = new Entity;
	PrintName(e);
	Player* p = new Player("cherno");
	PrintName(p);


	delete e;
	delete p;

}