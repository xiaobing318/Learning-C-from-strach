/*
===============Member Initializer Lists in C++ (Constructor Initializer List)============
	今天将会学习的内容是在c++ member initializer(constructor initializer list)
那么我先来提出一些问题：
	1、什么是initializer lists?
	2、为什么会用到这个initializer lists?
	3、initializer lists作用的对象都有哪些？（我的意思是只有class么？还是说有其他的，比如说function等等）
	4、cherno的标题中为什么会包含constructor initiazer list，这是否意味这中initializer只会存在于class中？

1)Thinking:
	首先，根据我的一些理解以及学习的内容，我可能知道一些关于这个member initializer list的事情，那么为什么我在这里
会用“可能”这个词呢？原因就是我不确定我知道的内容是否是属于这个内容中，所以才会有这个疑惑。
	member initializer是用来对我们声明的对象进行初始化的，在大多数的时候，我们只是声明了一个变量或者是object，那么
其中的具体数据我们是没有对其赋予的，那么我们想要做的事情就是对这些object的相关属性进行赋值的操作，这便是我们最初的一
个目的，不论是什么样类型的数据，我们的目的就只有这一种。
	既然cherno在标题中提到了constructor initializer list ，那么探讨的内容将会是class中的，一个class只是一些数据
同methods相结合到了一起，并没有什么特别的地方。或者我们可以这样想，在一个计算机中，最为重要的东西（object）便是memo
-ry，这也是通过硬件的方式进行实现的。那么在一个memory中将会通过binary的方式存储我们的数据，而我们想要使得某些locati
-on的memory变成我们变成我们想要的形式，这便是对对应位置的memory进行初始化。

	cherno讲了以下几点原因：
		1、constructor initializer list将会提升program的performance（这一点我现在还没有想清楚）
		2、将会使得代码简洁、容易阅读一点（需要初始化的东西放在了“initializer list”的外面）
	

	讲的内容：
		1、将会讲解constructor member initializer list，需要注意的是member的概念，并不只是variables而已。

2)coding过程中遇到的问题
	1、我想要通过指针来实现string的功能，但是我发现我的一些基础概念还是不是那么的清楚，所以我想最好的办法就是自己把
相关内容实现一遍，在这个实现的过程中自己可以进行测试来验证自己的想法，并且做相应的记录。




*/
#include <string>
#include <iostream>

class Example
{
public:
	Example()
	{
		std::cout << "the default constructor was created!" << std::endl;
	}

	Example(int x)
	{
		std::cout << "the custome constructor was created :" << x << std::endl;
	}
};



class Entity
{
private:
	std::string m_name;
	Example m_example;
public:
	//constructors
	Entity()
	{
		m_example = Example(8);
		m_name = "Unknow!";
	}

	Entity(const std::string& p_name)
	{

		m_name = p_name;
	}

	const std::string& Get_Name() const
	{
		return m_name;
	}



};

int main()
{
	Entity e;

}