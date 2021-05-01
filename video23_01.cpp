/*
1)说明
	今天将要讲的内容是Local static in c++
	那么随之而来的问题就是什么是local？
	什么是local static？
	为什么会有local？
	为什么会有static local？

2)recall
	今天学习到的东西是：
	1、对于一个变量来说，其主要有两个方面是需要我们操心的，即它的类型（也就是其大小），另外一个
	则是其在内存中存在的位置（scope）

	类型大小我们已经非常熟悉了，那么对于scope呢？对于我来说我还是不太熟悉这个，那么我就先来说说
	我自己对这个的感受与认知。

	scope将会影响我们两方面的内容，第一方面就是access的权限，我们是否可以访问它，有没有什么限制
	这将是第一个我们将要考虑的因素，那么第二个点就是其在内存中存在的时间长短（lifetime）

	主要分为三个部分：local variable、global variable、static local variable

	local variable：在一个函数中申明的变量就是local variable
		1、访问权限：在这个函数中才能被访问
		2、lifetime：在这个函数exist的时候将会被销毁，也就是从内存中destroy

	global variable：不存在于任何函数中的变量
		1、访问权限：program中的任何function和statements都是可以访问的，并且修改的（这里访问的
		意思也包含着修改的含义，为了不修改之前所说的）
		2、lifetime：存在这个program中，也就是当这个program结束的时候，这种变量才会在内存中被
		destroy

	static local variable：同local variable的定义是一样的，唯一不同的就是在变量的前面加了一个
	static
		1、访问权限：在program中的functions and statements都是可以访问的
		2、lifetime:存在于整个program中
*/
#include <iostream>

void function()
{
	static int var = 0;
	var++;
	std::cout << var << std::endl;
}

int main()
{
	function();
	function();
	function();
	function();
	function();


}