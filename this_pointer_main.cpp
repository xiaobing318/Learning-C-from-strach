////���cpp�ļ����ҽ�Ҫ����pointer������ֵ�Ĳ���
////һ��Ҫ�ǵ��ͷ��ڴ�ռ�
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
////�������Լ���ĳ���ڴ�λ�ô���������int��ֵ,���ǻ�û�и�ֵ
//int main()
//{
//	//�������Լ���ĳ���ڴ�λ�ô���������int��ֵ,���ǻ�û�и�ֵ
//	int* address_int_1 = new int;
//	int* address_int_2 = new int;
//	
//	//����һ���ڴ�ռ��������ڽ��
//	int* address_result = new int;
//
//	//���ڶ�������λ�ý��и�ֵ
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