#include <iostream>
#define LOG(x) std::cout << x << std::endl;

void Increment(int* value)
{
	*value = *value + 1;
}

int main()
{
	int a = 8;
	int& ref = a;
	int* address_a = &a;
	Increment(address_a);
	LOG(a);
	LOG(&ref);
	std::cin.get();
}

/*
	还没有把这部分的内容完全的理解，明天继续
*/