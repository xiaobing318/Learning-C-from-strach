/*
1)Question
	今天将要学习的内容是enums,目前我是不知道这是个什么东西？那么问题就是：
	1、什么是enums？
	2、为什么会有这个？
	3、解决了什么样的问题？


2)Answer
	首先我知道了为什么会需要enums，是为了让我们的代码看起来更加的简洁一点，并且出现更少的错误
因为当我们写代码的时候，有时候会写很多的integer constant ，那么这时候就有可能会造成一定的问题
因为有时候我们会在代码的后续不经意之间改掉这些integer constant，那么就会造成一些问题，所以说
我们才会需要这些enums。

	
*/

#include <iostream>
enum Example
{
	A, B, C
};


int main()
{
	Example variable = B;
	if (variable == 3)
	{
		//
	}
	std::cout << variable << std::endl;
}