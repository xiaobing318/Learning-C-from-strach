///*
//================const keyword in c++================
//	�������Ƶ�н���ѧϰ����const keyword���������
//
//��ô����Ҫ�������Ƶ��ѧϰ��ʲô����֪ʶ����Щ���Ҹ���Ȥ�����⣿
//	1��ʲô��const keyword�����ص���ʲô��
//	2��const ���keyword�Ĺ�����ʲô��
//	3��const�����ö�����ʲô����������ָ�룿����function��method��parameter���ȵȣ�
//	4�����ڱ��綨Ϊconst�Ķ�����洢λ���Ƿ����仯��
//	5��const�Ķ����ǵ���memory����ô���ģ�
//
//
//���������ƶϻ���ʵ��һ����Ϊ���������⣺
//	1������һ���ض����͵ı��������ʹ����const?
//
//
//
//===============һЩ����Ľ���취==================
//1����������string��ʱ�򣬰������Լ�����⣺���string����ض����Ǵ�����string���ͷ�ļ�����������Ϊ��һ��class����
//�����Ҿ���Ҫ����������������stringͷ�ļ��Ļ������ᷢ��һЩʲô����ʱ���ҷ������ҵ�������������棬һЩ��������
//�ģ��Ⲣ�������������һ��Ԥ�룬�����ҵ�����һЩ���Ϸ��֣������compiler��iostream���ǰ���string����ض���ģ���
//���Ҿ�������ôΪʲô��Ҫ����string�����������string class���ڵı�Ҫ��ʲô��ԭ������Ϊ��ͬ��compiler֮��������ͬ
//ֻҪ�����õ�����ص�class����ô���Ǿ�һ��Ҫ�������Ӧ��ͷ�ļ�����������ԭ������ڱ��compiler�ϣ���Щԭ���������ļ�
//�����ò�������ԭ�����û�а������Ӧ��ͷ�ļ�����Ϊ��ͬ��compiler�ǲ�ͬ�ģ���Ҫ�������е�compiler�е�iostream��
//������string�Ķ��壬�е�compiler��û�У������Ϊʲô�����õ�һ��class��ʱ��һ��Ҫ�������Ӧ��ͷ�ļ���
//
//2��const websit
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