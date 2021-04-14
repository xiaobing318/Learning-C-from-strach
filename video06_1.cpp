/*
	在这个视频中将会讲解的内容是关于C++的compiler的工作原理，也就是说C++的compiler具体是
怎么工作的？
	我们所写的代码只是text，但是我们的computer需要的则是可以执行的binary code,那么我们脑
海中将会产生一个疑问：怎么从text转换到computer可以执行的binary code？
	在这个转换的过程中发生了两个事情：
	1、对我们所写的文件进行compiler
	2、对已经compiler好了的文件进行link

1)compiler所做的事情以及其本质的解释
	总的来说compiler所作的事情就是将我们所写的code转化为可以执行的binary code。另外，我们
所写的code最终将会被转化成constant data and instructions.
	我写这个注释的原因就是最后一个需要关注的点：code that we wrote will be converted to 
constant data and some instructions
2)C++中文件的说明
	在C++中文件实际上对compiler来说是不重要的，为什么会这样说？因为我们对不同的文件进行
分类的原因就是告诉C++compiler怎么转化这些文件。总结来看，不同的文件类型（.cpp or .c or 
.h and so on）所作的工作只是告诉compiler怎么把这些文件转化为binary code

	文件的类型是没有什么含义的，它们只是存储数据的类型不同而已，我们设定一种文件的类型，是
为了让转化器能够按照特定的形式进行转化数据，这便是文件类型的本质。这一点是非常重要的。
*/
#include <iostream>
void Log(const char* message);

int main()
{
	Log("this is a test!");
	std::cin.get();
}