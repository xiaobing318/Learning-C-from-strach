/*
1)˵��
	���콫Ҫѧϰ��������Interfaces in C++ (Pure Virtual Functions)
	���⣺
		1��ʲô��interfaces?(�����Ƕ���interfaces��������һ��)
		2��ʲô��pure virtual functions��(����Ҳ����Ψһ��)
		3��interfaces��pure virtual functions����֮����ʲô������
		4����������ָ����ͬһ�������Ļ�����ôΪʲôҪ��interfaces?�����������������ʲô���⣿
		5�����û�����pure virtual functions�Ļ�����ô���ǽ�����ô����
		6��pure virtual function��ֻ����class�д��ڣ�����˵��class��Ҳ�ǿ��Եģ�
2���²�
	��Ȼ���ֽ�����interfaces����ô��Ӧ����ô������⣿�����interfaces�а����Ÿ��ָ����Ĺ��ܣ�
�����������ô��Ū�ġ���ô����������pure virtual function��ʲô����pure virtual function����ô
���ж������pure virtual function�������Ȼ��һ����������ôҲ����ѭ�����Ķ��巽ʽ���������ĸ�����
����ɵģ�type of return\function's name\parameters\body of function����Ȼ�ˣ���Ҳ��һ��virtual
function,��ô������Ȼ��Ҳ������ǰ�����һ��virtual������virtual functions�������Ѿ����ĺ����
�ˣ��䱾�ʾ���Ϊ��ʹ���Ǹ��ٵ�д�ظ��Ĵ��룬���ԲŻ���virtual functions������Ϊ��Ҫ�ľ��Ǽ�������
д�����Ķ���汾�����ء����������Ƿ���ͬ���������ͣ�ֻ�����ֿ�����һ���ģ�

	��ô��ô����һ��pure virtual function��virtual function�أ�����֮ǰ��˼�����ǿ���ȷ��һ����
�飺������֮������ֱ�Ȼ���function�����ĸ��������֣��Ҳ��Ǵ�parameters��function��body��������
�ģ�Ҳ����˵�����߶��ǿյģ������һ�����Ǳ�������������ˡ�

	���������ĵ�6�����⣬�Ҿ���Ӧ����ֻ����class�н������������Ǵ��ڵġ���ô����һ��������ǣ���Ϊ
class��Ϊbase class and derived class ,��ô����֮�䶼���Դ��ڻ���ֻ����һ������û��ʲô�����
Ҫ��(����˵��base class declaration and definition in the derived class)

3)answers
	1��A pure virtual function is a virtual function in C++ for which we need not to write
any function definition and only we have to declare it.
*/


/*
1)��ʵ���ʱ����������һЩ����

*/
#include <iostream>
#include<string>
class Animal
{
private:
	std::string m_name;

public:
	Animal()
	{
		m_name = "animal";
	}

	Animal(std::string p_name)
		:m_name(p_name)
	{

	}
	std::string GetName()
	{
		return m_name;
	}
	virtual void PrintType() = 0;
};

class Cat :public Animal
{
public:
	Cat(std::string p_name)
		:Animal(p_name)
	{

	}

	void PrintType() override
	{
		std::cout << "The cat's name is:" << GetName() << std::endl;
	}
};

class Dog :public Animal
{
public:
	Dog(std::string p_name)
		:Animal(p_name)
	{

	}

	void PrintType() override
	{
		std::cout << "The dog's name is:" << GetName() << std::endl;
	}
};


int main()
{

	Cat cat("cat");
	Dog dog("dog");
	cat.PrintType();
	dog.PrintType();
	
}