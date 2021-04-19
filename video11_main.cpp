#include <iostream>
#include "video11_Log.h"


int main()
{
	int a = 8;
	a++;
	char test_H = 'H';
	std::cout << int(test_H) << std::endl;
	
	const char* string = "Hello world!";
	for (int i = 0; i < sizeof("Hello world!"); i++)
	{
		std::cout << string[i] << std::endl;
	}
	Log("hello world!");
	std::cin.get();
}

/*
1)程序中，最为重要的事情就是memory，也就是在一个程序中，我们最为关注的事情激素himemory

2）学习了VS中memory的格式：最左边的是内存地址，中间的是十六进制的数字表示，而最右边的则是
这些十六进制表示的具体的东西。

3）在VS内存的管理当中，cc 表示的则是还没有进行初始化的一些值，从这个例子中我们可以得出的一
点就是其他的看起来特殊表示的都是compiler提示我们的一些事情，就像这个cc则是提醒我们一个值还
没有进行初始化。

*/