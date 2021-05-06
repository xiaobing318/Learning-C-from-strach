/*
1)˵��
	�����Ƶ�����ǽ�Ҫѧϰ�������ǹ���inherit��,��ô��������˼���������ʲô��˼���õ�һЩԭ����
�����ڵĶ����������inherit���ͱ���˵inherit�Ų�����ô���˵��һ���õ����Ѿ������˵Ķ�����������
�Լ���ȥŬ��ʵ����Щ�Ѿ����ڵĶ����������inherit���������ڡ�

	��ô�ҵ��������Ϊʲô������Ҫ���inherit��������ʻ��߽���featureΪ���Ǵ�����ʲô������˵��
��feature����Ϊ���ǽ��ʲô�������⣿
	��ʱ�����ǻ�������һ��˼�룺��ϣ���ظ��������ӣ���ô������Ҫ����������ǰ��Ѿ����ڵ������ù�
��ֱ�ӽ���ʹ�ã�����������£������������Ҫ�ﵽ��һ��Ŀ�ġ������Ҳ��������Ҫinherit��ԭ����Ϊ
�����԰������Ǵﵽ������Ŀ�Ļ�����Ҫ��
	��Ȼ�ˣ����ʵ�ֵĶ�������class��Ҳ����˵���Ǵﵽ������Ŀ��֮���������õ��Ķ�����Ȼ��һ��class
��ô����һ��class���ԣ�������Ҫ�˽����������Щ��
		1��constructor
		2��destructor
		3��data members
		4��method members
	�Ҿ�����������������ж�ô�����棬��Щfeature��ʵ��ֻ��Ϊ�����Ǹ������ɵĽ��б�̣���ʵ���ϻ�
ֻ��һ��class���ѣ���ôҲ�ᰴ�����Ӧ�Ĺ�������Ƿ���̶Ƚ���ʵ��������ʣ���ôdata memebers�Ĵ�
����ʽ����ô���ģ�
	ͨ��������Ӧ���ڴ�ռ䣬���ǿ���֪��������class��data memebers�Ǵ洢��һ��ģ�ֻ����parent
class ��data memebers���ȴ洢�ģ�Ȼ�����subclass����ν��subclassֻ��������parent class�Ļ���
����������һЩdata and methods memebers����������ߵı��ʡ�

	��ν��inherit�����ǿ���������һ��duplicate the code which we have worrten
*/
#include <iostream>
class Entity
{
private:
	int m_x;
	int m_y;

public:
	Entity()
	{
		m_x = 1;
		m_y = 2;
	}

	Entity(int p_a,int p_b)
		:m_x(p_a),m_y(p_b)
	{

	}

	void PirntData()
	{
		std::cout << m_x << "," << m_y << std::endl;
	}

	virtual void PrintAddress()
	{
		int* address_m_x = &m_x;
		int* address_m_y = &m_y;
		std::cout << "the address of m_x:" << address_m_x << std::endl;
		std::cout << "the address of m_y:" << address_m_y << std::endl;
	}
};

class Player :public Entity
{
private:
	int m_z;

public:
	Player()
	{
		m_z = 3;
	}

	Player(int p_a,int p_b,int p_c)
		:Entity(p_a,p_b)
	{
		m_z = p_c;
	}

	void PrintData()
	{
		//std::cout << m_x << "," << m_y << "," << m_z << std::endl;
		std::cout << m_z << std::endl;
	}

	void PrintAddress()
	{
		int* address_m_z = &m_z;
		std::cout << "the address of m_z:" << address_m_z << std::endl;
	}
};


int main()
{
	Entity entity;
	Player player(1,2,3);
	Player* address_player = &player;
	entity.PrintAddress();
	std::cout << "===========" << std::endl;
	player.PrintAddress();
	
}