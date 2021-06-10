
#include <iostream>
class Entity
{
public:
	Entity()
	{
		*m_X = 0.0f;
		*m_Y = 0.0f;
		std::cout << "created object" << std::endl;
	}

	Entity(int p_a,int p_b)
	{
		*m_X = p_a;
		*m_Y = p_b;
		std::cout << "created object" << std::endl;
	}

	~Entity()
	{
		delete m_X;
		delete m_Y;
		std::cout << "destroyed object" << std::endl;
	}

public:


	void print()
	{
		std::cout << *m_X << "," << *m_Y << std::endl;
	}

private:
	int* m_X = new int;
	int* m_Y = new int;
};

int main()
{
	
	{
		Entity obj1;
		obj1.print();
	}

	Entity obj2(3,2);
	obj2.print();

	std::cin.get();
}


/*
1)�ܽ�
	��������û�н�̫��Ķ�����ֻ�Ǽ򵥵Ľ���һ��ʲô��destructor���Լ���ô��֮��ġ������Ҵ���
�����һ����Ҫ����Ϣ���Ǿ��ǵ�������stack������з����ڴ��ʱ����ô�����������objectֻҪ��
�Ǹ�scope����������ʱ����ô���scope�еĶ��������ٴ��ڣ�Ҳ���ǽ��ᱻdestroy������ô��������
���£����ǵ�destructor���ᱻcall��

	��ô��֮����������һ��������ǵ����object��heap�ϱ�������ʱ����ô����Ҫ���ǽ����ֶ���ɾ
�����Ӧ���ڿռ䡣
*/

/*
	���컹��ѧ����ͦ�ණ���ģ�����Ҫ�ľ��ǰ�destructor��������ݸ�����ˣ�������˵���Ƕ�̬����
�ڴ��ʱ��������Ҫ����Щ���飿��Ȼ������Ҫ�Ƕ�class���Եģ���һ����ᵽ��memory����Ҫ�ԡ�
*/

