/*
=====================const keyword in c++========================
	今天将会学习的内容是const in c++，这是一个重要的内容，之前我没有把这个东西学透，但是如果你一直坚持着探索，那么
你就会得到你想要的一个答案，这是我的学习经验。

	那么首先我来说一下我对const的理解，简单来说：const就是使得我们的"对象"不会被改变，这是我们想要的一种结果，但是
这样说对于初学者来说是不友好的，因为这是一个很高的角度来对这个问题进行的一个总结。那么我就来详细的谈一下我对const的
理解：
	首先我们要知道const的作用对象都是有哪些？
		1、variable
		2、pointer
		3、class data memeber
		4、class data method
		5、object
		6、function return type and function parameters

		最重要的需要理解的一个知识点就是pointers，也正是这个东西困扰了我很长的时间。对于一个pointer来说，它有两个
	重要的方面：1、address 2、value 这是一个pointer所具有的两个重要的特点，那么我们的目的就是想要针对这两个方面进
	行设计我们想要的一个东西：这两个方面改变或者是不改变，那么一共有四种情况：1、address可以改变，value可以改变 2、
	address可以改变，value不可以改变 3、address不可以改变，value可以改变 4、address不可以改变，value不可以改变 ；
	这就是四种我们想要的结果，那么完成这个目的就是通过const来完成的，一般情况下（也就是默认情况下）一个pointer将会是
	第一种情况，那么我们可以利用const来完成剩下的三种情况。
		1、int* ptr
		2、const int* ptr 
		3、int* const ptr
		4、int const * const ptr

		因为对于一个program中最为重要的东西就是memory，那么与之对应的就是对memory的manipulate，所以这里我就直接思
	考了最重要的东西，那么其他的东西可以理解成为是有pointer衍生而来的，所以只要是掌握了最基础的东西，那么其他的东西
	都是非常容易进行掌握的。

==========key points===========
1、const的对象要一一对应（比如const变量的address要和const pointer相对应，那么function也是一样的）
2、mutable keyword的作用
3、improve the performance of programs:尽量减少copy的次数（具体来说就是在函数的利用中多利用指针而不是copy）


*/




#include <iostream>
class Entity
{
public:
	int m_X = 1;
	int m_Y = 2;

public:
	int Get_X() const
	{
		return m_X;
	}

	int Get_Y() const 
	{
		return m_Y;
	}
};

void Print_Entity(const Entity& p_obj)
{
	
	std::cout << "the x is :" << p_obj.Get_X() << std::endl;
	std::cout << "the y is :" << p_obj.Get_Y() << std::endl;
}

int main()
{
	Entity e;
	std::cout << e.Get_X() << std::endl;
}