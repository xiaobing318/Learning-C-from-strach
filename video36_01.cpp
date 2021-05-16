/*
===============Member Initializer Lists in C++ (Constructor Initializer List)============
	���콫��ѧϰ����������c++ member initializer(constructor initializer list)
��ô���������һЩ���⣺
	1��ʲô��initializer lists?
	2��Ϊʲô���õ����initializer lists?
	3��initializer lists���õĶ�������Щ�����ҵ���˼��ֻ��classô������˵�������ģ�����˵function�ȵȣ�
	4��cherno�ı�����Ϊʲô�����constructor initiazer list�����Ƿ���ζ����initializerֻ�������class�У�

1)Thinking:
	���ȣ������ҵ�һЩ����Լ�ѧϰ�����ݣ��ҿ���֪��һЩ�������member initializer list�����飬��ôΪʲô��������
���á����ܡ�������أ�ԭ������Ҳ�ȷ����֪���������Ƿ���������������У����ԲŻ�������ɻ�
	member initializer�����������������Ķ�����г�ʼ���ģ��ڴ������ʱ������ֻ��������һ������������object����ô
���еľ�������������û�ж��丳��ģ���ô������Ҫ����������Ƕ���Щobject��������Խ��и�ֵ�Ĳ�������������������һ
��Ŀ�ģ�������ʲô�����͵����ݣ����ǵ�Ŀ�ľ�ֻ����һ�֡�
	��Ȼcherno�ڱ������ᵽ��constructor initializer list ����ô̽�ֵ����ݽ�����class�еģ�һ��classֻ��һЩ����
ͬmethods���ϵ���һ�𣬲�û��ʲô�ر�ĵط����������ǿ��������룬��һ��������У���Ϊ��Ҫ�Ķ�����object������memo
-ry����Ҳ��ͨ��Ӳ���ķ�ʽ����ʵ�ֵġ���ô��һ��memory�н���ͨ��binary�ķ�ʽ�洢���ǵ����ݣ���������Ҫʹ��ĳЩlocati
-on��memory������Ǳ��������Ҫ����ʽ������ǶԶ�Ӧλ�õ�memory���г�ʼ����

	cherno�������¼���ԭ��
		1��constructor initializer list��������program��performance����һ�������ڻ�û���������
		2������ʹ�ô����ࡢ�����Ķ�һ�㣨��Ҫ��ʼ���Ķ��������ˡ�initializer list�������棩
	

	�������ݣ�
		1�����ὲ��constructor member initializer list����Ҫע�����member�ĸ������ֻ��variables���ѡ�

2)coding����������������
	1������Ҫͨ��ָ����ʵ��string�Ĺ��ܣ������ҷ����ҵ�һЩ��������ǲ�����ô�����������������õİ취�����Լ���
�������ʵ��һ�飬�����ʵ�ֵĹ������Լ����Խ��в�������֤�Լ����뷨����������Ӧ�ļ�¼��




*/
#include <string>
#include <iostream>

class Example
{
public:
	Example()
	{
		std::cout << "the default constructor was created!" << std::endl;
	}

	Example(int x)
	{
		std::cout << "the custome constructor was created :" << x << std::endl;
	}
};



class Entity
{
private:
	std::string m_name;
	Example m_example;
public:
	//constructors
	Entity()
	{
		m_example = Example(8);
		m_name = "Unknow!";
	}

	Entity(const std::string& p_name)
	{

		m_name = p_name;
	}

	const std::string& Get_Name() const
	{
		return m_name;
	}



};

int main()
{
	Entity e;

}