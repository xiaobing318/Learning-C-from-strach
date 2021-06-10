/*
	=========���콫��ѧϰ��������Arrays in C++=========
1���Ҷ�arrays���˽�
	����ѧ�ĽǶ���˵���Ҷ�arrays��������linear algebra�е�matric������������ڶ����arrays����⣬���
������Ƕȳ����Ļ�����ô�Ҷ�dimension���������ʲô�أ�������Ϊʲô������������ɻ�ԭ������ҵ��Ժ��г���
��һ�����ʣ�three dimension arrays,��ôʲô��three dimension arrays����Ϊ���ҵ�֪ʶ��Χ��������ʶ��array
��һ��������matricesֻ�����Ƕ�������ѵ�����һ��Ȼ���γ���matrices���׿�linear algebra��dimension�ĸ���
��ʵ�ʵ���������ĽǶȳ�����һά�������ľ���һ����������ά�������ľ���һ��matrix��������ά���ݴ��������
ʲô����ô���dimension���ӵĻ��ָ���ô������⣿����һ����������Ķ�����

	���Ȳ����Ƕ���ά�������䱾�ʾ���һά���飬Ҳ����һЩblocks in memory����һ���Ƿǳ���������ģ����ǴӼ���
���ĽǶ����������ģ�����Ϊ���ܹ�������������õĲ���������ʹ��arrays,�������һЩ��װ���Ӷ�ʹ�����ݸ��õ�
��������������ʹ�á�

	���Ͼ����Ҷ�array�����

2��������һЩ����
	1�����һ��array��heap���棬��ô���array�Ĵ�С��
	2����ά�����һά����֮�������ת���ģ�����Ҫ�Լ�����ʵ��һ�£�


===============ѧϰ==================
1��arrays���������
	��һ��array�У�����ֻ�����֣����������Ķ���������˵litters,����˵һ��array�������һ�����������elements
�Ķ�����

2������cherno��˵�Ķ���
	1����ѧϰarrays��ʱ�����Ǳ���Ҫ֪����һ���������pointers,���Ǳ���Ҫ֪��ʲô��pointers���Լ�pointers
	����ʲô�ģ�
	
		��Ȼ��˵���pointer������һ����Ƶ��ѧϰ�Ƿǳ���Ҫ�ģ���ô�������Ƿǳ���Ҫ�ģ��������Ѿ�����ص�������
	��һ�����˽⣬arrays�Ĺ���ԭ�����pointer�Ĺ���ԭ����������б�Ҫ�úõ�ѧϰһ��ʲô��pointers?

	2)���ȣ���һ���������ʲô��arrays?
		arrays����һЩelements�����һ���һ��variable�����߼���˵����һ���ض����͵����ݡ�

	3)double pointers������
		�������ܹ����õ������double pointers�����������ˣ�֮ǰ���Ǵ��������ʱ������stack(��ʵ��û��
	stack and heap֮�֣��������ߵ�������Ե���˵���ǻ᲻���Զ��Ľ����ڴ�Ĺ���)����ôcompiler�����Զ���
	Ϊ������ڴ棬������heap�������ǣ�����Ҫ�����ֶ���Ϊ������ڴ棬��ʱ��double pointers�����֣�ԭ��
	�����������Ӧ�á�

	4��the size of arrays on heap
		���ȣ�cherno˵����C++����û�а취�����ⷽ����Ϣ�Ļ�ȡ��Ӧ��ָ���ǲ�ͬ�汾�ģ������ְ汾��C++11��
	���������Ѿ�д�õ�library�����ǿ��Եõ��ⷽ�����Ϣ�������Ǿ����һ��ǲ������ر�����������Ҫ��һ����
	������⣩
		���о���cherno˵��û��ways,���ǻ��ǻ����һ����ways����Ϊ���ǿ�����������˼�������û�д���������
	ways����ô������delete arrays��ʱ��compiler����Ҫ֪��arrays��size�ģ���˻��ǻ����һ���ķ����ġ�
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