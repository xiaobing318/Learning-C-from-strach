/*
===========In this video,we will learn about the type of char in c++.=============
1)说明
	In C++, the char keyword is used to declare character type variables. A character variable can store
only a single character.
	首先我们必须清楚的一点就是在c++中char一个关键词，它的职责就是在program中声明一个变量，并且这种类型的变量只可
以存储单个character（自己可以试一下）

	我一直处于一个迷惑的状态，在寻找答案，但是好像总是又没有找到，所以我在想到底是哪里出了问题？我觉得是我问问题不
够具体，才导致了没有办法寻找到合适的答案，那么我现在来重新理一下自己的思路，我将会有如下的一些问题：
	1、什么是char type in c++?
		首先，从一个general的回答方式来回答就是char是一种data type，就和int和double是一样的，也就是说是作为一种
	数据类型存在于c++中。那么按道理来说如果只是一种数据类型的话，那么将会有一些相类似的是事情或者是属性：1、变量的
	命名，变量的值，变量的初始化，相同数据类型的arrays,还有就是在内存中存在的形式等等，这些方面的内容也是存在的。
		从一个更高的角度来说，type只是为了我们人类写代码或者处理数据（information）比较方便罢了，在内存中是以bit
	的形式存在的，用Cherno的话来说就是这些类型只不过是不同大小的内存而已，那么从这个角度出发，我们的char type在内
	存中是以1 byte的形式存在的。

		1)如何声明一个char变量？
			和其他的变量类型的声明是一样的，我们只需要在一个变量名字前面加上char type就可以了。
		2)如何初始化char变量？
			和其他的变量类型不一样（就目前而言，我所学到的就是int and double and class，但是这些涉及的都是number）
		因此我们给char类型的变量赋值的时候，我们要区别于之前所学的赋值（数字）方法，也就是要加上单引号，这样compiler
		才能分辨我们给其赋的值是char type的。
		3）如何获得一个char变量的数值？
			这里有两种类型的：第一种是正常的char变量值，也就是我们变量名中所含的值；第二种则是ASCII中对应的值
		其实这是我们char变量一一对应的表格。那么如果是前者的话，和其他类型变量的取值是类似的；如果是后者的话，那
		么我们就需要对其进行转化，我们知道char变量是依据ASCII进行编制的，而这两者之间的关系本质上就是integer于
		characters之间的一一对应，因此，我们只需要应用int function 对其进行转化，我们就可以得到ASCII的值。
		4）上述都是在stack上面进行的一系列操作或者是我想要搞清楚的事情，那么如果是在heap上呢？
			刚才试了一下，和其他的变量类型是一样的，并没有什么不一样；但是需要注意的一件事情就是我们是不能直接
		按照我们所想的print一个char类型的变量，按照正常的思维来说我们需要print一个char变量的地址的时候，我们只
		需要print pointer就可以了，但是这是行不通的。
			通过查询资料得知std::cout这个对象中的operator将会把char*当成一个string来进行print，而不是一个地址
		这就是不能print的原因所在，我们的解决办法就是将char*进行转化，用void*的形式进行转化，从而可以解决掉这个
		问题。但是最为重要的是为什么会是这样的？为什么不能直接print出来，我们的一个目的就是能够按照我们所想的进行
		运转，但是真实情况却不是这样的，那么原因是什么？
			我猜是为了防止冲突，也就是说可能会有两种或者多种目的，但是实现的时候是同一种方式，为了避免引起compiler
		的迷惑，我们就采用了另外的一种方式，也就是默认将char*看待成一个string。那么有一个问题就是type*在内存中
		存在的形式到底是什么样子的，如果是一个整数类型的话，那么为什么会引起这种不同？根据之前学习到的知识，我们
		可以知道一个pointer只不过是一个整数而言，并且代表的是一个对象的首地址，其类型只不过是确定这个object在内
		存中的大小而已。那么这里我还是没有想明白。

2)总结
	我们所说的character array是和string非常相似的，但是唯一不同的是string是一个有着额外符号的array of character
(\0或者是0)，这两者之间只有这样一个区别。
	一般来说，我们说string的时候，指的就是array of characters。
	还有一件事情需要注意，array of character和一般的array稍有不同，主要体现在我们想要print其pointer的时候，那么
就需要做一个转化，因为在string的应用中（array of characters的应用），为了我们程序员的方便，将print pointer的
功能改成了print array of characters,从这个角度出发，我们是需要一定的方法来得到我们想要的东西（print pointers
of char type）。
	其中思考的一个重要的方式就是从需求或者是想要达到的一个目的出发，如此以来，便可以相同一些事情。
			

*/
#include <iostream>

int main()
{
	//char char1;
	//char1 = 'a';
	//char* ptr = &char1;
	//std::cout << (void*)ptr << std::endl;

	////allocate a memory on heap
	//char* address_heap_char2 = new char;
	////initialize this memory's value
	//*address_heap_char2 = 'A';
	//std::cout << "the address of this char is:" << (void*)address_heap_char2 <<"value::"<< *address_heap_char2 << std::endl;
	////free the value of that memory
	//delete address_heap_char2;


	//int number[4] = { 1,2,3 };
	//std::cout << number << std::endl;

	//char ch[4] = { 'a','b','c' };
	//std::cout << ch << std::endl;

	//const char* ch_1 = "abc";
	//std::cout << ch_1 << std::endl;

	//const char* char_ptr = "cherno";
	//std::cout << char_ptr << std::endl;

	
	
	
	// In c language

	//declaration of a string in c
	/*
		这一行的代码相当于是告诉compiler创建一个名为char_ptr的pointer，并且让这个pointer指向string（cherno）
	还有就是声明这个string中的值是不会被改变的，其实这是一种在C语言中声明一个string的方式。
	*/
	const char* char_ptr = "cherno";

	/*
		这也是一种定义string的方式，这种方式更加的符合我们人类的认知观念
	*/
	char str_1[] = "this is a test of string";

	/*
		最为笨拙或者是原始的定义一个string的方式是下面的这种
	*/

	char str_2[5] = { 't','e','s','t','\0' };
}