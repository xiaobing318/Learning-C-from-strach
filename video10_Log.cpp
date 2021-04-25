//
//
//
///*
//1)说明
//	当我们想要再一个文件中使用另外一个文件中的函数的时候，那么直观的方式就是把对应的函数
//包含进来，如果是copy进来的话，将会造成很多的问题：
//	1、函数的重复
//	2、在link的时候将会造成多次definition，使得link不成功
//	
//	因此，我们必须想到另外的一种办法将我们想要利用的函数包含进来，这便是这一个视频中所要
//讲解的内容。
//
//	但是在这之前，我先理一下Cherno所讲的一些内容。在此之前，我们在一个文件中利用另外一个
//文件中的函数的做法就是declaration一下，相当于是告诉compiler这个被利用的函数是存在的。这
//便是declaration的作用，但是这样做还是不太号，原因就是当我们使用多个函数的时候，我们不得不
//进行多次declaration，那么这就会使得操作变得麻烦起来。
//
//	因此，我想这便是引入header file 的原因
//*/
//#include <iostream>
//#include "video10_Log.h"
//
//void InitialLog()
//{
//	Log("initialLog");
//}
//void Log(const char* message)
//{
//	std::cout << message << std::endl;
//}

//
//
///*
//1)说明
//	当我们想要再一个文件中使用另外一个文件中的函数的时候，那么直观的方式就是把对应的函数
//包含进来，如果是copy进来的话，将会造成很多的问题：
//	1、函数的重复
//	2、在link的时候将会造成多次definition，使得link不成功
//	
//	因此，我们必须想到另外的一种办法将我们想要利用的函数包含进来，这便是这一个视频中所要
//讲解的内容。
//
//	但是在这之前，我先理一下Cherno所讲的一些内容。在此之前，我们在一个文件中利用另外一个
//文件中的函数的做法就是declaration一下，相当于是告诉compiler这个被利用的函数是存在的。这
//便是declaration的作用，但是这样做还是不太号，原因就是当我们使用多个函数的时候，我们不得不
//进行多次declaration，那么这就会使得操作变得麻烦起来。
//
//	因此，我想这便是引入header file 的原因
//*/
//#include <iostream>
//#include "video10_Log.h"
//
//void InitialLog()
//{
//	Log("initialLog");
//}
//void Log(const char* message)
//{
//	std::cout << message << std::endl;
//}

