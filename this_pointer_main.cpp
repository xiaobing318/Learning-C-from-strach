////这个cpp文件中我将要利用pointer进行数值的操作
////一定要记得释放内存空间
//#include <iostream>
//#include "this_pointer.h"
//
//
//int addition(int* address_1, int* address_2)
//{
//	return (*address_1) + (*address_2) ;
//}
//
//void print(int*pointer)
//{
//	std::cout << pointer << "::" << *pointer << std::endl;
//}
//
////假设我自己在某个内存位置创建了两个int数值,但是还没有赋值
//int main()
//{
//	//假设我自己在某个内存位置创建了两个int数值,但是还没有赋值
//	int* address_int_1 = new int;
//	int* address_int_2 = new int;
//	
//	//创建一个内存空间用来存在结果
//	int* address_result = new int;
//
//	//现在对这两个位置进行赋值
//	*address_int_1 = 1;
//	*address_int_2 = 2;
//	*address_result = addition(address_int_1, address_int_2);
//	print(address_int_1);
//	print(address_int_2);
//	print(address_result);
//
//	delete address_int_1;
//	delete address_int_2;
//	delete address_result;
//
//	
//	Multiple x(1, 2);
//	std::cout << x.Multiple_Two_Number() << std::endl;
//
//	Multiple* address_object = new Multiple;
//	address_object->SetNumber(2, 3);
//	address_object->Multiple_Two_Number();
//	address_object->print_result(address_object->Multiple_Two_Number());
//	delete address_object;
//	
//}