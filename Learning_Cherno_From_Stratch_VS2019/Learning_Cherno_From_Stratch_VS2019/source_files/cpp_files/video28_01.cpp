/*
1)˵��
	���콫Ҫѧϰ�������ǹ���virtual function�ģ���ôʲô��virtual function��Ϊʲô�������
��������Ҫ���һ��ʲô�������⣿�����������ĵ�һ�����⡣
	��ô���Լ������²�һ�����virtual function�Ǹ�ʲô�ģ���������һ��function����ô����
function������Ӧ���ǱȽ��˽�ģ����ĸ�������ɵģ�
		1��the tpye of return
		2��function name
		3��parameters
		4��the body of this function
	������������virtual function�ģ���ô�����һ���function���������أ�����һ����������
�ĸ����ֽ��иĶ�����ô�������ʽ��������ǰ�����һ���ؼ���virtual������������һ�ַ�ʽ��
	���ڵ������������ǵ�������ʲô��Ҳ���Ƕ��������ĺ�����Ŀ����Ϊ�˽��ʲô�������ѣ�

2)����
	���ǵ�������ǵ�����д�˶��class��������Щclass֮����һ�ּ̳еĹ�ϵ����ô��Щclass֮�佫��
����һЩ��֮ͬ�����������ָ�ľ���functions������ô��������Ҫ��Բ�ͬ��classes�Ķ���ʹ�����Ӧ
��������ô������Ҫ���ľ��ǽ���Щ����ȫ������дһ�飬������Ƕ���˵�������һЩ�ظ��Ե����ݣ����
������Ҫ������Ŀ�ľ���ʹ��һ���ӿڣ�������ȴ����һ���ӿڣ�����ô����������£����Ǿͻ���Ҫ��virtual
function��

3��learning
	1��virtual function���ڵ����壬Ҳ���ǽ��������������������
	2��һ��С��skill��������virtual functions override��ʱ�����ǿ��԰�����ʼ���ȥ��
*/
#include <string>
#include <iostream>
class Entity
{
public:
	//��ô�����std::string������ʲô�أ���������һ��return type����������˵Ӧ����һ��object
	virtual std::string GetName()
	{
		return "Entity";
	}
};

class Player :public Entity
{
private:
	std::string m_name;

public:
	Player(const std::string & name)
		:m_name(name)
	{

	}

	std::string GetName() override
	{
		return m_name;
	}

};

void PrintName(Entity* p_entity)
{
	std::cout << p_entity->GetName() << std::endl;
}

//void PrintName(Player* p_player)
//{
//	std::cout << p_player->GetName() << std::endl;
//}
int main()
{
	Entity* e = new Entity;
	PrintName(e);
	Player* p = new Player("cherno");
	PrintName(p);


	delete e;
	delete p;

}