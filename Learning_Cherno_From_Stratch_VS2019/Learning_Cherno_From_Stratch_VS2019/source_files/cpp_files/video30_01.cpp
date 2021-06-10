/*
1��˵��
	���콫��ѧϰ�������ǹ���Visibility����ôʲô��visibility�أ�Ϊʲô��������̸������������
��һ�������һ�����ʣ�ֻ��Ϊ�����Ǹ��õ�������������ݣ�

2������
	visibility in c++˵�ľ���inherit��ʱ�����ַ�����ʽ����һ���ֵ����ݻ����ǱȽ���Ϥ��
˵һ���Լ����ڶ������ߵ���⣺
	1����ͬ��classes֮�������inherit�Ĺ�ϵ������������ص�data memebersȴ�Ǵ洢��һ��ģ���
	ô��ΪʲôҪǿ����������أ�ԭ��������֮�䲢���Ǽ򵥵�copy and paste��ÿһ�����ֶ��Ƿֿ���
	���Թ������Ӧ��data memebers�����Ҵ洢��һ��Ȼ��ͨ��ָ��ķ�ʽ����Щ���ݽ��в�������֮
	ǰ���inherit��ʱ��ֻ�Ǽ򵥵İ��俴���ǡ����ݡ���copy and paste,����preprocessing statement
	����������ȴ�ǲ��ܹ��������ģ���Ϊ����������Ļ�����ô�ͻ����������ͻ�����⣬����������
	ȴû�г������Ƶ����⣬����Ҿ��ò����ܼ򵥵���������˼�����෴���Ҿ���Ӧ�ð��ⲿ�ֵ����ݿ���
	�ǲ�ͬ��function��Ψһ��ͬ��������memory�Ǵ洢��һ��ġ�

	С�᣺
		1��inherit���ܼ򵥵Ŀ���copy and paste
		2�����ǣ�base class and derived class����memory�Ǵ洢��һ��ġ�

3)thinking
	ͨ���Լ���ʵ�飬�ҷ�����һ���㣺��������stack�Ͻ��д��������ʱ����ô���Ӧ���ڴ�������Զ�
���еģ������ڴ�ռ��λ�����໥�����ģ����ǵ�������heap�Ͻ��д�����ʱ��������ǲ���ͬ�ġ�
	��������˵�Ĳ�ָͬ���ǵ�����������heap��Ϊmemebers �����ڴ�ռ䣬��ô�ڴ�λ���������ڵģ�����
����������Ľ�class�洢��heap�ϣ���ô������ǲ�һ���ģ��ڴ�ռ�����������һ��ġ�����ʵ��һ��������
���ԺܺõĽ������ģ�
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
		//�������˵����һ�����飺���base��accessness��protected�ģ���ô˵������Ա�derived
		//���ʣ����ǲ����Ա�object�����ʡ�
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

