/*
==================mutable keyword in c++=================
	��������ԣ����������Ƶ�н�Ҫѧϰ��������mutable keyword����ô������˵һ�¹������mutable keyword����֪��
�����ݣ�
	1��mutable keyword�������������const function���޸�data members
	2�����Ʋ⣩mutable keywordֻ���Դ�����class�У�����ֻ�ɴ���data members��
	
Questions:
	1��mutable�����ö��󶼻�����Щ��
	2��mutable ������ڴ�λ�ûᷢ��ʲô�仯��Ҳ�������Ӧ�����scope����ô���ģ�


===============conclusions================
	����cherno��˵����mutable keywordӦ�������������Ӧ�ã�������ֻ���ƶϳ���һ���÷������ǵڶ��ַǳ�İ��������
�������Ժ�ѧϰ����ʱ���ٻع�ͷ������ѧϰ������
*/

#include <iostream>

class Entity
{
private:
	//data members
	
	
	mutable int m_var;
	const int m_X;
	int m_Y;

public:
	//methods in this class 
	
	//constructor
	Entity();
	Entity(int p_v, int p_x,int p_y);
	//const function
	void Print_data_const() const;
	void Modify_mutable_value(int p_v) const;
	//the get function
	int Get_var();
	int Get_X();
	int Get_Y();
	//the set function
	void Set_var(int p_v);
	void Set_Y(int p_y);
};

Entity::Entity()
	:m_var(2),m_X(2),m_Y(2)
{

}

Entity::Entity(int p_v, int p_x,int p_y)
	:m_var(p_v),m_X(p_x),m_Y(p_y)
{

}

void Entity::Print_data_const() const
{
	std::cout << "the m_v is:" << m_var << std::endl;
	std::cout << "the m_X is:" << m_X << std::endl;
	std::cout << "the m_Y is:" << m_Y << std::endl;
}

void Entity::Modify_mutable_value(int p_v) const
{
	std::cout << "the values of original data members::" << std::endl;
	Print_data_const();
	m_var = p_v;
	std::cout << "the values of modified data members::" << std::endl;
	Print_data_const();
}

int Entity::Get_var()
{
	return m_var;
}

int Entity::Get_X()
{
	return m_X;
}

int Entity::Get_Y()
{
	return m_Y;
}

void Entity::Set_var(int p_v) 
{
	m_var = p_v;
}

void Entity::Set_Y(int p_y)
{
	m_Y = p_y;
}



void con_para_func(const Entity* p_ptr)
{
	//in this function,we can understand it by using the normal thinking
	//const Entity* p_ptr says that p_ptr pointer to a const object
	p_ptr->Modify_mutable_value(3);
}
int main()
{
	//mutable int var = 3;
	Entity e;
	con_para_func(&e);
	std::cin.get();
}