/*
1）说明
	今天将会学习的内容是关于Visibility，那么什么是visibility呢？为什么会在这里谈到这个？这个词
是一个概念还是一个名词？只是为了我们更好的理解所讲的内容？

2）解释
	visibility in c++说的就是inherit的时候三种访问形式，这一部分的内容还算是比较熟悉的
说一下自己关于对这三者的理解：
	1、不同的classes之间如果是inherit的关系，但是它们相关的data memebers却是存储在一起的，那
	么我为什么要强调这个内容呢？原因是它们之间并不是简单的copy and paste，每一个部分都是分开的
	各自贡献相对应的data memebers，并且存储到一起，然后通过指针的方式对这些数据进行操作。我之
	前理解inherit的时候，只是简单的把其看作是“内容”的copy and paste,像是preprocessing statement
	但是在这里却是不能够这样理解的，因为如果这样理解的话，那么就会产生命名冲突的问题，但是在这里
	却没有出现类似的问题，因此我觉得并不能简单的这样进行思考。相反，我觉得应该把这部分的内容看成
	是不同的function，唯一不同的是它们memory是存储在一起的。

	小结：
		1、inherit不能简单的看成copy and paste
		2、它们（base class and derived class）的memory是存储在一起的。

3)thinking
	通过自己的实验，我发现了一个点：当我们在stack上进行创建对象的时候，那么相对应的内存分配是自动
进行的，并且内存空间的位置是相互紧靠的，但是当我们在heap上进行创建的时候，情况则是不相同的。
	我这里所说的不同指的是当我主动的在heap上为memebers 分配内存空间，那么内存位置则不是相邻的，但是
当我们整体的将class存储在heap上，那么情况则是不一样的，内存空间则是相邻在一起的。（其实这一点我们是
可以很好的进行理解的）
*/
#include <iostream>
class A
{
public:
	int m_a;

public:
	A()
		:m_a(1),m_b(2),m_c(3)
	{

	}
	int function_public()
	{
		return m_a;
	}

private:
	int m_b;
	int function_private()
	{
		return m_b;
	}

protected:
	int m_c;
	int function_protected()
	{
		return m_c;
	}

};

class B:public A
{
public:
	int m_a = 4;
	int function_public()
	{
		return m_a;
	}

	int function_test()
	{
		//这个函数说明了一件事情：如果base的accessness是protected的，那么说明其可以被derived
		//访问，但是不可以被object所访问。
		int x = m_c;
		return function_protected();
	}

};

void Print(B* obj)
{
	for (int i = 0; i < 4; i++)
	{
		std::cout << "the address of object: " << (int*)obj + i << ";And the value is:" << *((int*)obj + i) << std::endl;
	}
	//std::cout << "the address of object: " << (int*)obj + 0 << ";And the value is:" << *((int*)obj + 0) << std::endl;
	//std::cout << "the address of object: " << (int*)obj + 1 << ";And the value is:" << *((int*)obj + 1) << std::endl;
	//std::cout << "the address of object: " << (int*)obj + 2 << ";And the value is:" << *((int*)obj + 2) << std::endl;
	//std::cout << "the address of object: " << (int*)obj + 3 << ";And the value is:" << *((int*)obj + 3) << std::endl;
}

//create objec in heap
class test
{
private:
	//data memeber in heap
	//the declaration of variables
	int* address_m_a;
	int* address_m_b;

public:
	//the declaration of constructor and destructor

	//initialize the variables in the heap(default constructor)
	test();

	//override this funciton
	test(int p_a, int p_b);

	//destory the object on the heap(generally,the variables will exist stack)
	~test();

public:
	//the declaration of this function
	int Multiple();
	
	//this function will print the address of object on heap
	//notice:this function is static
	static void Print_address_obj_static(test* obj);

	void Print_address_obj();

	void Print_address_data_memeber();

	int* Get_address_m_a();
	int* Get_address_m_b();
};

//the definition of constructor function(method)
test::test()
{
	address_m_a = new int(1);
	address_m_b = new int(1);
	std::cout << "the constructor was called" << std::endl;
}

test::test(int p_a, int p_b)
{
	address_m_a = new int(p_a);
	address_m_b = new int(p_b);
	std::cout << "the constructor was called" << std::endl;
}

test::~test()
{
	//delete/free the memory of allocated the memory
	delete address_m_a;
	delete address_m_b;

	//test this function call
	std::cout << "the destructor was called" << std::endl;
}


int test::Multiple()
{
	return (*address_m_a) * (*address_m_b);
}

void test::Print_address_obj_static(test* obj)
{
	std::cout << "the first address of this object is:" << (int*)obj << std::endl;
	std::cout << "the first address of this object is:" << obj << std::endl;
}

void test::Print_address_obj()
{
	std::cout << "the first address of this object is:" << address_m_a << std::endl;
}

void test::Print_address_data_memeber()
{
	std::cout << "the addrss of m_a is ::" << address_m_a << std::endl;
	std::cout << "the address of m_b is ::" << address_m_b << std::endl;
}

int* test::Get_address_m_a()
{
	return address_m_a;
}

int* test::Get_address_m_b()
{
	return address_m_b;
}


void PrintEqual()
{
	std::cout << "========================" << std::endl;
}

class memory_obj
{
private:
	int m_x;
	int m_y;

public:
	memory_obj();
	memory_obj(int p_a, int p_b);
	~memory_obj();

private:
	int* GetAddress_m_x();
	int* GetAddress_m_y();

public:
	int Multiple();
	void Print_address_memebers();

};

memory_obj::memory_obj()
{
	m_x = 0;
	m_y = 0;
	std::cout << "the constructor was called!" << std::endl;
}

memory_obj::memory_obj(int p_a, int p_b)
	:m_x(p_a),m_y(p_b)
{
	std::cout << "the constructor was called!" << std::endl;
}

memory_obj::~memory_obj()
{
	std::cout << "the destructor was called!" << std::endl;
}

int memory_obj::Multiple()
{

	return m_x * m_y;
}

int* memory_obj::GetAddress_m_x()
{
	return &m_x;
}

int* memory_obj::GetAddress_m_y()
{
	return &m_y;
}

void memory_obj::Print_address_memebers()
{
	std::cout << "the address of m_x is :" << GetAddress_m_x() << std::endl;
	std::cout << "the address of m_y is :" << GetAddress_m_y() << std::endl;
}
int main()
{
	//{
	//	test obj1(3, 4);
	//	test* address_obj1 = &obj1;
	//	obj1.Print_address_data_memeber();
	//	//std::cout << *((int*)(obj1.Get_address_m_a())) << std::endl;
	//	//std::cout << *((int*)(obj1.Get_address_m_b())) << std::endl;
	//}


	//{
	//	memory_obj obj1(2, 2);
	//	obj1.Print_address_memebers();
	//	PrintEqual();
	//	std::cout << &obj1 << std::endl;
	//}

	{
		memory_obj* address_obj2 = new memory_obj(3, 3);
		address_obj2->Print_address_memebers();
		PrintEqual();
		std::cout << address_obj2 << std::endl;
		delete address_obj2;
	}
	std::cin.get();
}

