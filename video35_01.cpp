/*
==================mutable keyword in c++=================
	如标题所言，今天这个视频中将要学习的内容是mutable keyword，那么我先来说一下关于这个mutable keyword我所知道
的内容：
	1、mutable keyword存在意义就是在const function中修改data members
	2、（推测）mutable keyword只可以存在于class中，并且只可存在data members上
	
Questions:
	1、mutable的作用对象都会有哪些？
	2、mutable 对象的内存位置会发生什么变化？也就是相对应对象的scope是怎么样的？


===============conclusions================
	根据cherno的说法，mutable keyword应该是有两方面的应用，但是我只是推断出了一种用法，但是第二种非常陌生，所以
我想在以后学习到的时候，再回过头来进行学习这个概念。
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