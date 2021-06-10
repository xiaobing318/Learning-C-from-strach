/*
=====================const keyword in c++========================
	���콫��ѧϰ��������const in c++������һ����Ҫ�����ݣ�֮ǰ��û�а��������ѧ͸�����������һֱ�����̽������ô
��ͻ�õ�����Ҫ��һ���𰸣������ҵ�ѧϰ���顣

	��ô��������˵һ���Ҷ�const����⣬����˵��const����ʹ�����ǵ�"����"���ᱻ�ı䣬����������Ҫ��һ�ֽ��������
����˵���ڳ�ѧ����˵�ǲ��Ѻõģ���Ϊ����һ���ܸߵĽǶ��������������е�һ���ܽᡣ��ô�Ҿ�����ϸ��̸һ���Ҷ�const��
��⣺
	��������Ҫ֪��const�����ö���������Щ��
		1��variable
		2��pointer
		3��class data memeber
		4��class data method
		5��object
		6��function return type and function parameters

		����Ҫ����Ҫ����һ��֪ʶ�����pointers��Ҳ������������������Һܳ���ʱ�䡣����һ��pointer��˵����������
	��Ҫ�ķ��棺1��address 2��value ����һ��pointer�����е�������Ҫ���ص㣬��ô���ǵ�Ŀ�ľ�����Ҫ��������������
	�����������Ҫ��һ������������������ı�����ǲ��ı䣬��ôһ�������������1��address���Ըı䣬value���Ըı� 2��
	address���Ըı䣬value�����Ըı� 3��address�����Ըı䣬value���Ըı� 4��address�����Ըı䣬value�����Ըı� ��
	���������������Ҫ�Ľ������ô������Ŀ�ľ���ͨ��const����ɵģ�һ������£�Ҳ����Ĭ������£�һ��pointer������
	��һ���������ô���ǿ�������const�����ʣ�µ����������
		1��int* ptr
		2��const int* ptr 
		3��int* const ptr
		4��int const * const ptr

		��Ϊ����һ��program����Ϊ��Ҫ�Ķ�������memory����ô��֮��Ӧ�ľ��Ƕ�memory��manipulate�����������Ҿ�ֱ��˼
	��������Ҫ�Ķ�������ô�����Ķ�����������Ϊ����pointer���������ģ�����ֻҪ��������������Ķ�������ô�����Ķ���
	���Ƿǳ����׽������յġ�

==========key points===========
1��const�Ķ���Ҫһһ��Ӧ������const������addressҪ��const pointer���Ӧ����ôfunctionҲ��һ���ģ�
2��mutable keyword������
3��improve the performance of programs:��������copy�Ĵ�����������˵�����ں����������ж�����ָ�������copy��


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