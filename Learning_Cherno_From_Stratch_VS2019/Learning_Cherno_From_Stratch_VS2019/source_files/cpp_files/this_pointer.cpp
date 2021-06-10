///*
//	我现在终于知道了为什么我们会需要这个头文件了，因为从之前的思考来看，这个在link的时候是多
//余的，但是这里最重要的一个原因就是提示我们在头文件中都有那些methods,这便是我发现的最重要的一
//个作用。
//*/
//#include "this_pointer.h"
//#include <iostream>
//
//Multiple::Multiple()
//	:number_1(0),number_2(0)
//{
//
//}
//
//Multiple::Multiple(int a, int b)
//	:number_1(a),number_2(b)
//{
//
//}
//
//int Multiple::Multiple_Two_Number()
//{
//	return number_1 * number_2;
//}
//
//void Multiple::SetNumber(int a, int b)
//{
//	number_1 = a;
//	number_2 = b;
//}
//
//void Multiple::print_result(int result)
//{
//	std::cout << result << std::endl;
//}