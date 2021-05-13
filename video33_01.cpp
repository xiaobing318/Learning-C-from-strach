/*
	今天将会学习String Literals in C++，那么我将会有一些问题：
	1、什么是string literals？
	2、有什么用？
	3、能够为我们解决什么样的问题？
	4、如果是一种新的东西的话，那么在c++中的机制又是怎么样的？

1）thinking and inference
	首先，我想要弄懂的一个名词就是literals是什么意思？我刚才查了一下，中文的翻译是“文字”的意思，那么我想要知道
的是，这个和characters有什么区别？因为我觉得这两个应该是没有什么区别的，在我的认知范围内，所谓的文字指的就是一
系列的characters，或者说这些文字就是由characters组成的，因而便是没有什么区别。如果从昨天学习到的内容的角度出发
那么这两者之间更不会存在什么区别，那么cherno想要在这个视频中传达什么样的内容？或者说我从这个视频中将会学习到什么
样的知识内容。

2）Answer
	Constants refer to fixed values that the program may not alter and they are called literals.Constants
can be of any of the basic data types and can be divided into Integer Numerals, Floating-Point Numerals, 
Characters, Strings and Boolean Values.
	constants指的就是那些program不能更改的值，并且这样的值被称为是literals,constants可以是任何的基本数据类型
因此，这些constants可以被分为上述所说的几种。
	第一个问题：为什么要起一个这样的名字，这是我没有弄清楚的一件事情，或者是想清楚的一件事情
	
	从上述的说法中我知道了：原来和其他数据类型是一样的，这种string数据类型也是会存在constant类型的，也就是说这
种数据类型是不会被program所改变的。那么我可以做一个合理的推断：如果我们想要一个string类型的data不会被program无
意改变那么我们就要声明这种类型的变量是一个constant，那么怎么做这个声明，我想和其他的constant data是一样的，只需
要在变量名前面加上一个const就可以了，例如const std::string name = "the Xb_Y";这便是一个constant string的变量
那么我们需要注意的一件事情是什么，因为如果我们不对这个constant string变量进行初始化，那么本质上compiler将会把这
变量分配在stack种的某个内存空间上，而在那个特定的内存空间上，本来就会存在着一些值。这些值将不会发生变化（准确来
说就是program将不会改变这个特定变量的值）。但是，我们把一个变量设定成一个constant的目的是什么？我们的目的是想让
这个program不会改变我们想要赋予其值，那么这里就会涉及到一个内容：就是变量的初始化。
	从这个讨论中，我明白了为什么很多内容强调我们进行初始化（从机制来说，这将有一定的成本，但是对于可能会出现bug
的成本来说，初始化所带来的成本是可以忽略不计的）；因此，不论是什么情况下，对于我们所声明的变量，我们最好都进行初
始化，这样将会在一定的程度上避免一些错误的产生。

3)学习cherno所说的东西
	本质上，一个string literals代表的东西就是两个双引号里面的东西，例如"this is a string literal",就像是这个
例子一样，string literals只不过是双引号里面的东西。需要我们注意的是，string literals的类型就是const的。之前查
找过很多的资料，其中印象比较深刻的就是：string literals 就是一段被双引号括起来的text，并且其值是不能被改变的。
	array of char 和 string之间的区别就是string 是一种特殊的array of char，因为在一个string中，其array末尾将
会含有一个特殊的字符，这个特殊的字符是一种标识符，相当于是告诉compiler array的范围是多少，这便是这两者之间的区别
或者我们可以这样想：string literals只不过是一种constant string,如果从这个角度来理解，那么我觉得没有什么不可以理
解的，因为相类似的东西就是const  pointer 也就是我们常说的reference，我们可以通过这样一个相类比的关系来理解这个
东西。
	cherno还提到的一件事情就是string literals的存储位置：string literals总是存储在read-only的segment,注意这
里说的是总是，那么不论是什么情况下，我们都是可以认为这些string literals总是镶嵌在我们所写的一个程序中，对程序来
说，我们能做的就是提前写好一些指令，然后通过指令来修改data in memory，我们不能做的就是修改code,因为我们的string
literals是镶嵌在program，也就是说string literals是一个"指令"，那么我们不能做的就是修改指令。

===================类比思考=====================
	在计算机的硬件实现中有一个专有的memory device named Read-only memory,这个memory中的东西只是可以被我们access
但是我们不能做的事情就是modify，并且这个memory有一个特点就是其memory中的东西是"永久性"的存在的，这种情况是针对于
我们断开电源来说的，也就是说如果我们断开了电源，那么这个device中的东西依然是存在的，那么这个device中存储的东西就是
我们系统所需要的一些data或者是program，可以从实际生活中得到很好的验证，也是比较容易想清楚的。
	那么我想在我们写我们自己的program的时候，也是需要一个这样类似的东西，那么这个东西的实现就是通过system分配出一
块特定的memory space用来完成我们想要的一个结果，那么这个部分我们就可以称作是const segment（其实这样称呼我也不知道
是不是特别的准确，最终这个部分所起到的一个作用就是存储我们的代码或者是一些不会改变的data）
	其中一个比较常见的例子就是const and static，关于static我们需要掌握的是其scope and lifetime。现在这一部分的内
容我算是掌握的比较清楚了。

*/

#include <iostream>
#include <stdlib.h>

void function()
{
	static int number = 0;
	number += 1;
	const char* name = "cherno";
	std::cout << ":::" << number << std::endl;
}
int main()
{
	//std::string name0 = std::string("cherno") + "cherno";
	//std::cout << name0 << std::endl;
	//const char name[8] = "Che\0rno";
	//std::cout << strlen(name) << std::endl;
	//std::cout << "cherno0" << std::endl;
	//std::cin.get();


	//test the memory of static variable
	static int num = 0;


}