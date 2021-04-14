
/*
1)写这个函数的意义
	首先要说明的一点就是写这个函数的意义是什么？这里写这个函数就是为了说明如果我们不包含
#include <iostream>这个文件的话，那么我们所写的文件将会小很多，原因就是我们所包含的文件
中包含的文件“很大”
	另外就是为了说明#include <iostream>中这个preprocessing statement 的实际的作用是什么
#include 所作的事情就是找到对应的文件，然后将其copy到当前的文件夹中。
*/


/*
1)#define 的解释
	这个也算是preprocessing statement中的一种，也就是说这个statement发生在其他code之前
这里的#define 所做的工作就是将所有代码中出现的对应的名字（INTERGE）代换成int,从这个角度
来说，这个方法的实现将会使得我们编程变得容易：直观的感受就是能够全局替换变量
*/

//#define INTERGE int


/*
1)解释#if的作用
	#if 也是一个preprocessing statement，和其他preprocessing statement工作的方式是一样
的，在这个cpp文件中首先会被处理的。

	但是，我们这里要注意的一件事情就是：#if 后面的则是一种判断的条件，true or false,如果
条件是true，那么在这个框架中的代码将会被编译，否则则不会被compile，相当于是将相关的代码自
动不compile
*/
#if 1

int Multiple(int a, int b)
{
	int result = a * b;
	return result;

/*
	下面这个语句就说明了#include的作用是什么，只是将video06_EndBrace.h文件中的所有内容
copy到当前的文件中，因为video06_EndBrace.h文件中只有“}”text,故将其内容copy过来。
*/
#include "video06_EndBrace.h"

#endif