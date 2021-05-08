/*
1)说明
	今天将要学习的内容是Interfaces in C++ (Pure Virtual Functions)
	问题：
		1、什么是interfaces?(看来是多种interfaces，并不是一个)
		2、什么是pure virtual functions？(看来也不是唯一的)
		3、interfaces和pure virtual functions两个之间有什么关联？
		4、假设两者指的是同一个东西的话，那么为什么要有interfaces?解决了我们所遇到的什么问题？
		5、如果没有这个pure virtual functions的话，那么我们将会怎么做？
		6、pure virtual function是只能在class中存在，还是说在class外也是可以的？
2）猜测
	既然名字叫做是interfaces，那么我应该怎么进行理解？在这个interfaces中包含着各种各样的功能？
这个并不是那么好弄的。那么接下来分析pure virtual function，什么叫做pure virtual function？怎么
进行定义这个pure virtual function？我想既然是一个函数，那么也会遵循函数的定义方式，即由那四个部分
所组成的（type of return\function's name\parameters\body of function）当然了，这也是一个virtual
function,那么理所当然的也会在其前面加上一个virtual，关于virtual functions，我们已经理解的很清楚
了，其本质就是为了使我们更少的写重复的代码，所以才会由virtual functions，（最为主要的就是减少我们
写函数的多个版本“重载”，本质上是服务不同的数据类型，只是名字看着是一样的）

	那么怎么区分一个pure virtual function和virtual function呢？根据之前的思考我们可以确定一件事
情：这两者之间的区分必然会从function的那四个方面着手，我猜是从parameters和function的body进行入手
的（也就是说这两者都是空的），如此一来我们便可以区别两者了。

	对于上述的第6个问题，我觉得应该是只能在class中进行申明或者是存在的。那么还有一个问题就是：因为
class分为base class and derived class ,那么两者之间都可以存在还是只能是一个？有没有什么特殊的
要求(比如说在base class declaration and definition in the derived class)

3)answers
	1、A pure virtual function is a virtual function in C++ for which we need not to write
any function definition and only we have to declare it.
*/


/*
1)在实验的时候所遇到的一些问题

*/
#include <iostream>
#include<string>
class Animal
{
private:
	std::string m_name;

public:
	Animal()
	{
		m_name = "animal";
	}

	Animal(std::string p_name)
		:m_name(p_name)
	{

	}
	std::string GetName()
	{
		return m_name;
	}
	virtual void PrintType() = 0;
};

class Cat :public Animal
{
public:
	Cat(std::string p_name)
		:Animal(p_name)
	{

	}

	void PrintType() override
	{
		std::cout << "The cat's name is:" << GetName() << std::endl;
	}
};

class Dog :public Animal
{
public:
	Dog(std::string p_name)
		:Animal(p_name)
	{

	}

	void PrintType() override
	{
		std::cout << "The dog's name is:" << GetName() << std::endl;
	}
};


int main()
{

	Cat cat("cat");
	Dog dog("dog");
	cat.PrintType();
	dog.PrintType();
	
}