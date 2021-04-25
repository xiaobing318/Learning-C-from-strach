#include <iostream>
class Entity
{
public:
	int* address_x = new int;
public:
	Entity()
	{
		*address_x = 0;
		std::cout << "constructor" << std::endl;
	}
	~Entity()
	{
		delete address_x;
		std::cout << "destructor" << std::endl;
	}
};



int main()
{
	{
		Entity obj1;
	}
	std::cin.get();
}