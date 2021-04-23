/*
1)说明
	今天将要学习的内容是关于control flow的，continue，break and return这三个control flow
是专门为loop服务的。

2）explain
	1、在一个loop 中的continue代表的含义是不再执行loop内continue后面的代码，而是直接进行下一
次的循环（并且continue只能在循环体中使用）
	2、break可以在loop中使用，也是可以在switch中使用的，代表的含义就是跳出当前的循环
	3、return代表的含义就是跳出当前所在的函数，这是一个比较强大的control flow

3)notice
	这里特别要注意的一件事情就是continue和break两者之间的区别，一个只是跳出了这一次的循环，
另外一个则不是，而是直接跳出了全部的循环（这里的一次或者是全部指的是一个循环的次数）
*/
#include <iostream>
#include "video15_Log.h"
int main()
{
	for (int i = 0; i < 5; i++)
	{
		Log("Hello World1");
	}
	std::cin.get();
}