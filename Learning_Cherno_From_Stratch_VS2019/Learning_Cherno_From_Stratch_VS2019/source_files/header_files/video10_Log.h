//
//
////首先要说明的一件事情就是：pragma once的意思就是compile once
//
///*
//1)说明
//	只要是#符号的，那么这个statement就是一个preprocessing statement，这就意味着compiler将会
//首先处理这个statement，然后才会处理file中的code，这便是这个preprocessing statement的作用。
//
//	其实最主要的作用就是为了防止多次被definition，为什么会有这种说法？因为首先我们要清楚的一件
//事情就是#include 代表的含义就是copy and paste，那么如果在多个文件中都包含了这个statement，那
//么在compile的时候是不会出现问题的，因为每一个cpp file都是单独的一个unit，但是在link成一个大的
//文件的时候将会发生不一样的事情：有些东西被copy and paste了很多次，也就是definition了很多次，那
//么在这种情况下，将会发生多次definition的事情发生。
//
//	从而这也就是#pragma once statement的意义所在。就是为了防止多次definition，它所做的工作就
//是只被definition一次。
//*/
//#pragma once
//
///*
//	这里还有一件事情需要注意：#pragma once preprocessing statement 之前的写法是#ifndef and
//#define and so on.
//	但是这里我们还是继续使用这种更为简洁的写法，但是它们所达到的目的却都是相同的。
//*/
//
//
//void InitialLog();
//
//void Log(const char* message);
//
//struct Player
//{
//
//};
//
///*
//	最为重要的一件事情就是要清楚#include具体做了什么样的工作，只有这样才能更好的理解c++的
//工作原理。
//*/

//
////首先要说明的一件事情就是：pragma once的意思就是compile once
//
///*
//1)说明
//	只要是#符号的，那么这个statement就是一个preprocessing statement，这就意味着compiler将会
//首先处理这个statement，然后才会处理file中的code，这便是这个preprocessing statement的作用。
//
//	其实最主要的作用就是为了防止多次被definition，为什么会有这种说法？因为首先我们要清楚的一件
//事情就是#include 代表的含义就是copy and paste，那么如果在多个文件中都包含了这个statement，那
//么在compile的时候是不会出现问题的，因为每一个cpp file都是单独的一个unit，但是在link成一个大的
//文件的时候将会发生不一样的事情：有些东西被copy and paste了很多次，也就是definition了很多次，那
//么在这种情况下，将会发生多次definition的事情发生。
//
//	从而这也就是#pragma once statement的意义所在。就是为了防止多次definition，它所做的工作就
//是只被definition一次。
//*/
//#pragma once
//
///*
//	这里还有一件事情需要注意：#pragma once preprocessing statement 之前的写法是#ifndef and
//#define and so on.
//	但是这里我们还是继续使用这种更为简洁的写法，但是它们所达到的目的却都是相同的。
//*/
//
//
//void InitialLog();
//
//void Log(const char* message);
//
//struct Player
//{
//
//};
//
///*
//	最为重要的一件事情就是要清楚#include具体做了什么样的工作，只有这样才能更好的理解c++的
//工作原理。
//*/

