
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
1)总结
	今天他并没有讲太多的东西，只是简单的讲了一下什么是destructor，以及怎么用之类的。但是我从中
获得了一个重要的信息，那就是当我们在stack上面进行分配内存的时候，那么这个被创建的object只要从
那个scope中跳出来的时候，那么这个scope中的东西将不再存在，也就是将会被destroy掉，那么在这种情
况下，我们的destructor将会被call。

	那么与之而来的另外一个问题就是当这个object在heap上被创建的时候，那么就需要我们进行手动的删
除相对应的内空间。
*/

/*
	今天还是学到了挺多东西的，最主要的就是把destructor的相关内容搞清楚了，具体来说就是动态分配
内存的时候，我们需要做哪些事情？当然了这主要是对class而言的，再一次体会到了memory的重要性。
*/

