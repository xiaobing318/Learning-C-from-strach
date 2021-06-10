/*
	1、今天在这个视频中，cherno将会讲解的是raw pointers 而不是smart pointers
	2、在计算机中最为重要的东西就是memory，也就是计算机操作的东西就是memory，因此，在计算机中
最为重要的东西就是memory。
*/

#include <iostream>

/*
1)关于这个语句我所知道的
	1、首先它是一个preprocessing statement
	2、之前见到的一个例子就是可以使得整个程序的编写变得容易，因为我们可以进行替换，但是并不是十
分的清楚到底是怎么进行运行的，或者说是原理是怎么样的？

2)通过刚才的学习，我现在来尝试这解释一下这行代码的含义：
	首先这是一个preprocessing statement，标志就是#符号，这个符号的出现相当于是提供了一种路径
切记这里的#符号并不是一个命令，而是提供的一种路径；在其后面的define才是command，这时候相当于是
告诉compiler具体做一些什么样的工作。
	define的工作原理和函数的工作原理是非常相似的（一般情况下，我们可以把所有的东西都看成是funct
ion，比如赋值操作等等）；
	我这里说这个的原因就是define所作的事情主要是两种，一种就是赋值，另一种就是以参数的形式进行
定义。

3）examples
	#define LIMIT 5
	#define NAME(parameters) body_of_function

4)理解
	define所作的事情分为两个部分：
		1、不论什么时候在程序中看到macro的时候，将其替换掉（这里的替换掉指的是将statement用
	macro 的函数主体进行替换；然后将对应的参数pass进去）

	#define LOG(x) std::cout << x << std::endl;
	#define是macro；LOG（x)是其名字，std::cout << x << std::endl则是函数主体；
*/
#define LOG(x) std::cout << x << std::endl;


int main()
{
	int var = 8;
	void* ptr = &var;
	*((int*)ptr) = 10;
	LOG(var);

	std::cin.get();
}