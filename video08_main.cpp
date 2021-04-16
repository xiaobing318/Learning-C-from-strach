
#include <iostream>

/*
	在这个视频中，最重要的事情就是要意识到一件事情：所谓的不同类型的数据，其本质只是占用了不
同大小内存空间，这便是其本质
*/


int main()
{
	int variable = 8;

	//这是是没有符号的，也就是默认的是正数
	unsigned int var = 9;

	/*
		这里我们需要注意的事情是：float是four bites,而double则是eight bites
	并且写float的时候在数字的后面要加上对应的字母f或者是F
	*/
	float variable_1 = 8.2f;
	double variable_2 = 8.3;
	std::cout << variable << std::endl;
	std::cin.get();
}