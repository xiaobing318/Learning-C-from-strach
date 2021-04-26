#include <iostream>
#define LOG(x) std::cout << x << std::endl;

void Increment_pointer(int* value)
{
	*value = *value + 1;
}

int main()
{
	int a = 8;
	Increment_pointer(&a);
	LOG(a);

}

/*
1）总结
	1、referencea are just pointers
	2、说是references只是一个语法糖，那么就说明本质上并不是一个新的东西，其本质上就是一个pointer
如果我们把他当作是一个部分功能缺失的pointer，那么理解起来应该会相对容易一点。
*/