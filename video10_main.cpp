//
//#include <iostream>
//#include "video10_Log.h"
//#include "video10_Common.h"
//
///*
//1)说明
//	关于这个#include "" and #include <>我专门search了一下，原来是两种不同的搜索路径，因为
//这两种header file存储在不同的位置，因此我们要做的一件事情就是将这两种对应的header按照一定的
//路径找出来。
//
//	#include ""是先搜索当前的文件夹所在的位置有没有对应的header文件，然后再按照标准的搜索路
//径进行寻找对应的文件。
//	#include <>则是直接按照标准的搜索路径进行搜索，这里所说的标准的搜索路径指的是已经设定好
//了的system file.
//
//2)为什么iostream没有extension？
//	为了回答这个问题，我们首先要知道：一般来说c++和c的一些标准库还是不太一样的，但是在c++中
//我们是可以使用c的库的，因此为了区分这两种库的不同，所以就产生了这两种不同的include 方式。
//*/
//
//
////http://gcc.gnu.org/onlinedocs/gcc-2.95.3/cpp_1.html#SEC6
////解释#include "" and #include <>的区别
//
//int main()
//{
//	Log("hello world");
//	InitialLog();
//	std::cin.get();
//}

//#include <iostream>
//#include "video10_Log.h"
//#include "video10_Common.h"
//
///*
//1)说明
//	关于这个#include "" and #include <>我专门search了一下，原来是两种不同的搜索路径，因为
//这两种header file存储在不同的位置，因此我们要做的一件事情就是将这两种对应的header按照一定的
//路径找出来。
//
//	#include ""是先搜索当前的文件夹所在的位置有没有对应的header文件，然后再按照标准的搜索路
//径进行寻找对应的文件。
//	#include <>则是直接按照标准的搜索路径进行搜索，这里所说的标准的搜索路径指的是已经设定好
//了的system file.
//
//2)为什么iostream没有extension？
//	为了回答这个问题，我们首先要知道：一般来说c++和c的一些标准库还是不太一样的，但是在c++中
//我们是可以使用c的库的，因此为了区分这两种库的不同，所以就产生了这两种不同的include 方式。
//*/
//
//
////http://gcc.gnu.org/onlinedocs/gcc-2.95.3/cpp_1.html#SEC6
////解释#include "" and #include <>的区别
//
//int main()
//{
//	Log("hello world");
//	InitialLog();
//	std::cin.get();
//}

