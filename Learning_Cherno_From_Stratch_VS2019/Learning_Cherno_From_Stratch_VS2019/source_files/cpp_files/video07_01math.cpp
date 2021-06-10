//
//#include <iostream>
//
////不再使用这个声明或者叫做保证
////void Log(const char* message);
//
//#include "video07_Log.h"
//
///*
//1)static keyword解释
//	今天学习了一个重要的东西：static，这个关键词的作用就是声明一个函数或者是一个变量仅仅可以
//在本cpp file中是可见的，也就是说对其他的cpp files是不可见的，换一句话就是被加上了static的
//函数或者是变量的话，那么就意味着这个函数或者是变量是不可以被其他的cpp file所利用的。这样以来
//就可以避免命名的冲突了。
//
//	刚才经过了验证，就是加了static的函数是不可被其他文件所见的，但是如果我们想要一些被看见的
//话又不能使得命名冲突的话，应该怎么做？这是一个我所关心的问题。
//	因为static关键词起到的作用就是使得函数或者变量在一个文件中具有唯一性，同时保持了命名的
//冲突，但是有没有两者兼有的方法？
//
//2）多个文件之间的link的理解
//	static出现的作用上面已经讲清楚了，其实可以这样理解，因为c++的前身就是c，在c中我们所写的
//文件都是只有一个，那么在c++中，link所要做的工作就是将多个translation units转化成一个cpp file
//那么在single file中存在的函数或者是变量将会对其他所有的文件都是可见的，因为是在一个文件中，从
//而我们可以更好的理解了static的作用了
//*/
//
//static int Multiple(int a, int b)
//{
//	Log("message!");
//	return a * b;
//}
//
///*
//1)link的重要作用
//	linker的作用就是将不同的unit链接到一起，这一点我们是知道的，正常来说，我们运行一个程序
//是分为两个阶段的：第一个阶段就是将我们所写的代码（text）compile成binary code；第二个阶段就
//是把各个units链接到一起，形成一个整体的unit
//
//	这里要注意一个问题就是即使是一个文件，在run的时候，也是需要进行link的，其原因就是link的
//作用不仅仅是把多个units链接成一个整体的unit，还要找到一个main函数，也就是找到具体的接口，然
//后运行整个代码。
//
//	这里还有一个细节就是entry point 一般来说，程序的entry point 都是main函数，但是在链接的
//时候，我们是可以进行改动一个entry point的，也就是说一个entry point可以是任意的函数，而不是
//局限于main函数。
//*/
//
//int main()
//{
//	std::cout << Multiple(3, 4) << std::endl;
//	std::cin.get();
//}

//#include <iostream>
//
////不再使用这个声明或者叫做保证
////void Log(const char* message);
//
//#include "video07_Log.h"
//
///*
//1)static keyword解释
//	今天学习了一个重要的东西：static，这个关键词的作用就是声明一个函数或者是一个变量仅仅可以
//在本cpp file中是可见的，也就是说对其他的cpp files是不可见的，换一句话就是被加上了static的
//函数或者是变量的话，那么就意味着这个函数或者是变量是不可以被其他的cpp file所利用的。这样以来
//就可以避免命名的冲突了。
//
//	刚才经过了验证，就是加了static的函数是不可被其他文件所见的，但是如果我们想要一些被看见的
//话又不能使得命名冲突的话，应该怎么做？这是一个我所关心的问题。
//	因为static关键词起到的作用就是使得函数或者变量在一个文件中具有唯一性，同时保持了命名的
//冲突，但是有没有两者兼有的方法？
//
//2）多个文件之间的link的理解
//	static出现的作用上面已经讲清楚了，其实可以这样理解，因为c++的前身就是c，在c中我们所写的
//文件都是只有一个，那么在c++中，link所要做的工作就是将多个translation units转化成一个cpp file
//那么在single file中存在的函数或者是变量将会对其他所有的文件都是可见的，因为是在一个文件中，从
//而我们可以更好的理解了static的作用了
//*/
//
//static int Multiple(int a, int b)
//{
//	Log("message!");
//	return a * b;
//}
//
///*
//1)link的重要作用
//	linker的作用就是将不同的unit链接到一起，这一点我们是知道的，正常来说，我们运行一个程序
//是分为两个阶段的：第一个阶段就是将我们所写的代码（text）compile成binary code；第二个阶段就
//是把各个units链接到一起，形成一个整体的unit
//
//	这里要注意一个问题就是即使是一个文件，在run的时候，也是需要进行link的，其原因就是link的
//作用不仅仅是把多个units链接成一个整体的unit，还要找到一个main函数，也就是找到具体的接口，然
//后运行整个代码。
//
//	这里还有一个细节就是entry point 一般来说，程序的entry point 都是main函数，但是在链接的
//时候，我们是可以进行改动一个entry point的，也就是说一个entry point可以是任意的函数，而不是
//局限于main函数。
//*/
//
//int main()
//{
//	std::cout << Multiple(3, 4) << std::endl;
//	std::cin.get();
//}

