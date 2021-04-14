/*
1)#符号的解释
	前面的这个#代表的是一种preprocess的标识符号，相当于告诉compiler首先处理这个符号后面的
内容
	任何以#开头的statement都是一个preprocessing的statement
	为什么把这个#符号叫做是preprocessing statement是因为这些statement都是发生在compliment
之前的一些处理，所以叫做是preprocessing statement

2）include 的解释
	include statement 所做的事情就是找到对应的文件（就是后面要写的那个文件iostream），然后
把那个文件中的所有content拷贝到当前的文件中，而那个被拷贝的文件叫做是头文件

3)为什么我们要拷贝对应的文件？
	原因就是我们要使用其中的功能
*/
#include <iostream>


/*
1)main函数的解释
	下面的这个也是一个函数，在c++中几乎所有的都是由函数来完成工作的，只不过这个main 函数是
一个特例，它的特殊之处就在于它是整个程序的一个进入口，也就是说一个程序都是从这个进入的，然后
进行运行的。
	正是因为它的特殊，所以它是可以没有返回值的，也就是说可以不用写 return 0;
	当然了，写了也是没有什么大的问题
	这里需要注意的一件事情就是如果我们没有写return的时候，程序默认是返回0

2）解释computer执行我们写的命令的顺序
	computer是一行行的执行我们所写的code。Of course,存在着交换执行的顺序或者是打断一个执行
的顺序
	上述的内容则是由control flow完成,或者是call other functions
	但是总体上来说则是一行行的执行我们所写的代码

*/
int main()
{
/*
1)解释 <<
	这个符号首先是一个overloaded 符号，也就是说是我们人为的为其赋予了含义，所以从某种程度上
来讲，我们是可以把这个符号看成是一种函数
	这里我们要形成一种意识或者是常识：operator只是一种函数,类似下面这种
	std::cout.print("hello world").print(std::endl);

2)解释第一行代码所做的事情
	如果我们把<<这个符号看成是一种函数的话，那么我们在这里所做的事情就是把“hello world”看成
一个参数传到前面的函数中，然后这个函数执行相应的功能
	类似的，我们可以把<<std::endl看成是输入了另外的一个参数到这个函数中，然后这个函数执行
相应的功能

3)std::endl
	这一个代码的作用就是告诉console移到下一行进行处理剩下的输出内容

4）;
	这个符号相当于是告诉compiler，这一行的代码执行到;符号前就已经结束了
*/
	std::cout << "hello world" << std::endl;
	
/*
	等待我们按下enter键的时候,然后才继续执行下一行的代码
*/
	std::cin.get();

}

/*
Q:how the C++ works ?
	step1:the computer executes the preprocessing statement,which means that the compiler
just copy the iostream file and paste that file to the current file,this is the first 
step.

	step2:
*/