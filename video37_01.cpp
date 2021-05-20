/*
===========Ternary Operators in C++ (Conditional Assignment)================
	上面这个标题将是今天学习的内容,首先我来理解一下什么是ternary operators？（我不应该通过翻译来知道其含义的，相反
应该通过学习理解这个含义），当然了通过后面的注释我也知道了这个video中将会讲解的内容是关于conditional assignment，
我感觉这应该和我理解的东西是不一样的（conditional statements？）


1)Understanding the term
	1、首先，我要理解的一个term就是ternary，那么什么是ternary？根据Wikipedia的解释：“Ternary (from Latin ternarius)
is an adjective meaning "composed of three items"也就是说这个名词的含义我们可以理解成为是把三个东西组合到一起而形
成的一个组合体，这个东西就叫做是ternary
	2、operator的含义我们应该是比较清楚的（但是本质上的理解可能还没有），操作的对象是operand，那么根据这个term的名字
我们可以想到这个operator的operand将会有三个，分别是conditions,expression and expression
	3、还有一个必须要说的点：ternary operator为什么会产生？其出现的目的是什么？通过查阅相关的资料我们可以很容易的知
道这个operator是为了取代if else的statement，其实这里说取代是不太准确的，因为本质上这operator只是为了使得我们所写的
code变得更加的简单，容易懂，并不会使得code变得那么乱。
	4、ternary operator使用的建议：这个只能是局部的使得我们所写的代码变得简洁，但是并不能用在任何的地方，我们可以这
么来想：pointer 和reference之间的区别，pointer可以干许多的事情，而reference却是不可以的，也就是reference所具有的功
能pointer也是具有的，但是反过来却不是这样。那么这里也是一样的。（我突然想起cherno说的一句话说这个ternary operator只
是if else的语法糖，那么这样就是比较好理解了）
	cherno给的建议就是，我们在一些必要的时候可以使用这个operator，因为这个operator可以使得我们的code变得更加的简洁
那么问题就是什么时候这个东西才算是必要的，根据我所学习到的东西，我知道这个operator只是可以对binary condition进行判
断，并不能对多个进行判断。

*/
#include <iostream>
#include <string>

//here i want to creat two variables of type int on stack,and these variables will be see only in this file
static int f_Level = 0;
static int f_Speed = 2;

int main()
{
	if (f_Speed > 2)
	{
		f_Level = 1;
	}
	else
	{
		f_Level = 0;
	}

	f_Level = f_Speed > 2 ? 1 : 0;


	std::string rank;
	if (f_Level > 5)
	{
		rank = "Master";
	}
	else
	{
		rank = "Begainner";
	}

	std::string rank = f_Level > 5 ? "Master" : "Begainner";

	std::cin.get();
	return 0;
}
