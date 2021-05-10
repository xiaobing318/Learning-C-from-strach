/*
	=========今天将会学习的内容是Arrays in C++=========
1、我对arrays的了解
	从数学的角度来说，我对arrays的理解就是linear algebra中的matric，这就是我现在对这个arrays的理解，如果
从这个角度出发的话，那么我对dimension的理解又是什么呢？首先我为什么会产生这样的疑惑，原因就是我的脑海中出现
了一个名词：three dimension arrays,那么什么是three dimension arrays？因为在我的知识范围内我所认识的array
是一个向量，matrices只不过是多个向量堆叠到了一起，然后形成了matrices，抛开linear algebra中dimension的概念
从实际的物理世界的角度出发，一维数组代表的就是一个向量，二维数组代表的就是一个matrix，但是三维数据代表的又是
什么？那么如果dimension增加的话又该怎么进行理解？这是一个让我困惑的东西。

	首先不过是多少维的数组其本质就是一维数组，也就是一些blocks in memory，这一点是非常容易想象的，这是从计算
机的角度来进行理解的，但是为了能够让我们人类更好的操作或者是使用arrays,则进行了一些包装，从而使得数据更好的
被我们理解或者是使用。

	以上就是我对array的理解

2、遇到的一些问题
	1）如果一个array在heap上面，怎么这个array的大小？
	2）多维数组和一维数组之间是如何转化的？（想要自己进行实现一下）


===============学习==================
1、arrays的重新理解
	在一个array中，并不只是数字，还有其他的东西，比如说litters,所以说一个array代表的是一个包含着许多elements
的东西。

2、整理cherno所说的东西
	1）在学习arrays的时候，我们必须要知道的一个概念就是pointers,我们必须要知道什么是pointers，以及pointers
	是做什么的？
	
		既然他说这个pointer对于这一个视频的学习是非常重要的，那么我想这是非常重要的，并且我已经对相关的内容有
	了一定的了解，arrays的工作原理就是pointer的工作原理，因此我们有必要好好的学习一下什么是pointers?

	2)首先，第一个问题就是什么是arrays?
		arrays就是一些elements组合在一起的一个variable，或者简单来说就是一堆特定类型的数据。

	3)double pointers的作用
		现在我能够更好的理解了double pointers的意义所在了，之前我们创建对象的时候都是在stack(其实并没有
	stack and heap之分，它们两者的区别粗略的来说就是会不会自动的进行内存的管理)，那么compiler将会自动的
	为其分配内存，但是在heap上面则不是，则需要我们手动的为其分配内存，这时候double pointers则会出现，原来
	是在这里进行应用。

	4）the size of arrays on heap
		首先，cherno说了在C++中是没有办法进行这方面信息的获取（应该指的是不同版本的，比如现版本是C++11）
	但是利用已经写好的library，我们可以得到这方面的信息。（但是具体我还是不算是特别的清楚，还需要进一步的
	进行理解）
		还有就是cherno说是没有ways,但是还是会存在一定的ways，因为我们可以这样进行思考：如果没有存在这样的
	ways，那么当我们delete arrays的时候，compiler是需要知道arrays的size的，因此还是会存在一定的方法的。
*/
#include <iostream>

class Entity
{
private:
	int* m_X;
	int* m_Y;

private:
	int* Get_address_m_X()
	{
		return m_X;
	}

	int* Get_address_m_Y()
	{
		return m_Y;
	}

public:
	Entity()
	{
		m_X = new int(1);
		m_Y = new int(2);
		std::cout << "the constructor was called!" << std::endl;
	}

	~Entity()
	{
		delete m_X;
		delete m_Y;
		std::cout << "the destructor was called! " << std::endl;
	}

	static void PrintEqual()
	{
		std::cout << "============================" << std::endl;
	}

	static void PrintAddress(Entity* p_ptr)
	{
		std::cout << "the address of m_X is :" << p_ptr->Get_address_m_X() << std::endl;
		std::cout << "the address of m_Y is :" << p_ptr->Get_address_m_Y() << std::endl;
	}

	static void PrintValue(Entity* p_ptr)
	{
		std::cout <<"the value of m_X is ::"<< *(p_ptr->Get_address_m_X()) << std::endl;
		std::cout <<"the value of m_Y is ::" << *(p_ptr->Get_address_m_Y()) << std::endl;
	}
};



void Set_Value_arrays(int* p_address)
{
	for (int i = 0; i < 100; i++)
	{
		*(p_address + i) = i;
	}
}

void Print_Array(int* p_address)
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << " " << *(p_address + i);
	}
}


int main()
{
	////create a one dimension array
	//int* interger = new int[100];
	////to set the value for this array
	//Set_Value_arrays(interger);
	//Print_Array(interger);
	//delete[] interger;


	Entity* address_obj = new Entity;
	std::cout << "the address of entity object is:" << address_obj << std::endl;
	Entity::PrintEqual();
	Entity::PrintAddress(address_obj);
	Entity::PrintEqual();
	Entity::PrintValue(address_obj);



	delete address_obj;

	
}