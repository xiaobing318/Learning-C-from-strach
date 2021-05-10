
#include <iostream>
class Entity
{
public:
	int* example = new int[5];

	Entity()
	{
		for (int i = 0; i < 5; i++)
		{
			*(int*)((char*)example + 4 * i) = 2;
		}
	}

	~Entity()
	{
		delete[] example;
	}
};


int main()
{
	//this is a fuction(main function),which is the entry of our program
	//first of all,we create an array on the stack named example,which's type is interger
	//this line of code is the declaration of an array
	int example[5];

	//then we need to intialize this array
	for (int i = 0; i < 5; i++)
	{
		//we intialize this elements of this array to 2
		example[i] = 2;
	}

	//create a pointer which's type is int
	//we need to notice one thing that this array's name is a pointer,which is we know
	int* ptr = example;

	//we want to modify thirth element to six
	//example[2] = 6;

	//Now,I want to use the pointer to manual the vaule of this element
	//*(ptr + 2) = 6;

	//the issue is that the number 2 maybe create a little problem,but we want to clean this
	*((char*)ptr + 8) = 'A';
	*((char*)ptr + 9) = 'A';
	*((char*)ptr + 10) = 'A';
	*((char*)ptr + 11) = 'A';
	std::cout << *(int*)((char*)ptr + 8) << std::endl;
	std::cout << "====================" << std::endl;
	Entity e;
	std::cout << "the address of e is:" << &e << std::endl;
	std::cout << "the first address of array is:" << e.example << std::endl;


	std::cin.get();

}