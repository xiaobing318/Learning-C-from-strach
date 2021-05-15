///*
//================const keyword in c++================
//	在这个视频中将会学习关于const keyword的相关内容
//
//那么我想要从这个视频中学习到什么样的知识？哪些是我感兴趣的问题？
//	1、什么是const keyword？其特点是什么？
//	2、const 这个keyword的功能是什么？
//	3、const的作用对象是什么？（变量？指针？对象？function？method？parameter？等等）
//	4、对于被界定为const的对象，其存储位置是否发生变化？
//	5、const的对象是的在memory是怎么样的？
//
//
//首先我来推断或者实现一下最为基础的问题：
//	1、对于一个特定类型的变量，如何使其变成const?
//
//
//
//===============一些问题的解决办法==================
//1、我在利用string的时候，按照我自己的理解：这个string的相关定义是存在于string这个头文件（可以是认为是一个class），
//所以我就想要测试如果不包含这个string头文件的话，将会发生一些什么样的时候，我发现在我的这个编译器上面，一些都是正常
//的，这并不符合我最初的一个预想，所以我调查了一些资料发现，在这个compiler中iostream中是包含string的相关定义的，于
//是我就在想那么为什么还要包含string，或者是这个string class存在的必要是什么？原来是因为不同的compiler之间的情况不同
//只要我们用到了相关的class，那么我们就一定要包含相对应的头文件，这样做的原因就是在别的compiler上，这些原本正常的文件
//将会变得不正常，原因就是没有包含相对应的头文件，因为不同的compiler是不同的，主要体现在有的compiler中的iostream中
//包含了string的定义，有的compiler则没有，这就是为什么我们用到一个class的时候，一定要包含相对应的头文件。
//
//2、const websit
//	https://en.cppreference.com/w/cpp/language/pointer
//*/
//#include <iostream>
//#include <string.h>
//void Print_address(int* p_pointer)
//{
//	std::cout << "the address of integer is :" << p_pointer << std::endl;
//}
//
//void Print_address(const int* p_pointer)
//{
//	std::cout << "the address of integer is :" << p_pointer << std::endl;
//}
//
//void Print_address_dptr(const int** p_pointer)
//{
//	std::cout << "the address of integer is :" << p_pointer << std::endl;
//}
//
//
//void Print_Equaltion_char()
//{
//	const char* str = "===============";
//	std::cout << str << std::endl;
//	std::cout << strlen(str) << std::endl;
//}
//
//void Print_Equaltion_str()
//{
//	std::string str = "=================";
//
//	
//	std::cout << str << std::endl;
//}
//int main()
//{
//	//simple test
//
//	////declaration of a type of integer
//	//int variable;
//	////definition of this variable
//	//variable = 10;
//	//Print_address(&variable);
//	//Print_Equaltion_str();
//
//
//	////const variable test
//
//	////declarate a const variable
//	//const int variable_2 = 2;
//	//const int* ptr_v_2 = &variable_2;
//	//const int** ptr_ptr = &ptr_v_2;
//	//Print_address(ptr_v_2);
//	//int variable_3 = 4;
//	//ptr_v_2 = &variable_3;
//	//Print_address(ptr_v_2);
//
//	
//	//int variable_3 = 3;
//	//int variable_d = 4;
//	//int const* ptr = &variable_3;
//	////ptr = &variable_d;
//	
//	const int MAX_AGE = 90;
//	
//	int* a = new int;
//
//	*a = 2;
//	a = (int*)&MAX_AGE;
//	std::cout << *a << std::endl;
//
//
//
//
//	delete a;
//
//	std::cin.get();
//}