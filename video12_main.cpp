
#include <iostream>
#include "video12_Log.h"



int main()
{
	int var = 5;
	if (var == 5)
	{
		Log("the variable equals to five!");
	}

	else if(var != 5)
	{
		Log("the variable is not five!");
	}

	Log("Hello World!");
	std::cin.get();
}

/*
1)condition statement(if statement)
	最本质的事情是if判断条件里面的东西是否是0或者是1，这就是condition statement的本质，只要
条件是除零以外的东西，那么这个if body 中的代码将会被执行。

2）if statement的实现过是比较麻烦的。
	简单来说就是CPU在不同的内存中操作相对应的数据，这里我们要注意的一件事情就是：在不同的内存
空间中跳来跳去将会使得程序变慢，换一句话来说就是我们应该尽量避免使用if statement,这样才会使得
程序变快

3）else if并不是一个关键词
	这句话应该怎么理解？在我的印象中，else if 就是一个关键词，但是其实并不是的。我们可以这样
进行理解：
if(condition)
{

	code body;

}

else
{
	if(condition)
		{
			code body;
		}
}

else statement 其实是和else if是一样的。
*/