//#include <iostream>
//
//int size_input()
//{
//	/*
//		这个函数的所做的事情就是从用户那里得到输入数据的大小，也就是用户要输入多大的数组，比如
//	说要输入10个大小的数据，那么这个函数将会得到对应大小的10
//	*/
//	int size;
//	std::cout << "=======请输入你将要输入数据的大小（就是有多少个数据，数字>=1)::========" << std::endl;
//	std::cout << ":::";
//	std::cin >> size;
//	return size;
//}
//
//double* Get_data(int size_input)
//{
//	/*
//	1)说明
//		这个函数的作用就是把用户输入的数据以double的形式存储在电脑的内存中，我们可以得到这个
//	内存的地址，也就是说我们可以得到这些数据具体被存储在电脑的哪里？计算机表示这种“哪里”的时候
//	采用的是pointer，换一句话说就是pointer可以告诉我们数据具体在内存的那个地方。
//
//	2）input and output
//		input:什么也没有，你只需要调用这个函数就可以了
//
//		output:我们可以通过这个函数得到数据被存储的地方，以便后面使用的时候可以找到这些数据在
//	哪里。
//
//	3)notice
//		需要注意的是：这里我在stack上面获得了一些内存空间，是需要手动释放内存空间的，这也就是
//	如果我们不手动释放内存空间，那么刚才使用的内存空间将一直会被占用。（这一点可以不用理会，只
//	是让我自己更加清楚）
//	*/
//	std::cout << "=========首先输入自变量数据==========" << std::endl;
//	bool flag = true;
//	double *array_data = new double[size_input];
//	int i = 1;
//	while (flag && (i <= size_input))
//	{
//		std::cout << "请输入第" << i << "个数据：：" << std::endl;
//		std::cout << ":::";
//		std::cin >> *(array_data + i - 1);
//		i++;
//	}
//	return array_data;
//}
//
//double* data_convert_x(double* pointer_data_x,int size_data_x)
//{
//	/*
//	1)说明
//		这个函数的作用就是对自变量（x）进行对应的变换（非线性变换成线性的），根据对应的公式
//	我们可以知道自变量并没用发生什么变化，即：变换后的自变量 = 变换前的自变量；因此我们需要
//	做的事情就只是把对应的变换前的自变量的值赋给变换后的自变量。
//
//		还需要说明的一点就是我把变换后的自变量的数据另外存储在了计算机的内存中，相当于用另外
//	一个内存空间来存储变换后的自变量的数据。
//
//	2）input and output
//		input:我们需要知道一个需要变换自变量的数据是什么和对应的大小，比如需要变换的数据为
//	[1,2.3,3.4,4.2],那么这个数据具体的值我们知道了，还需要知道的就是这个数据的大小，这个
//	例子中其大小就是4
//
//		output：我们得到的是变换后数据的存储地址，也就是说变换后的数据存储在了计算机的什么
//	位置。
//	*/
//	double* pointer_convert_data_x = new double[size_data_x];
//	for (int i = 0; i < size_data_x; i++)
//	{
//		*(pointer_convert_data_x + i) = *(pointer_data_x + i);
//	}
//	return pointer_convert_data_x;
//}
//
//double* data_convert_y(double* pointer_data_y, int size_data_y)
//{
//	/*
//	1)说明
//		这个函数的作用就是将输入的因变量数据以一定的方式转化成我们想要的形式（这里的转化方式
//	是ln(y)），同转化因变量（x）的方式类似，在这里我们把转换好了的数据存储在计算机的内存中，
//	相当于是告诉我们这些被转化后的数据被具体存储到了计算机内存的哪个位置。
//
//	2）input and output
//		input:输入的是
//				1、想要被转换的数据（因变量y）
//				2、被转换数据的大小（比如一共有10个数据）
//		output:这个函数给我们提供的是被转换后的数据存储在计算机内存的位置。简单来讲就是被转换
//			后的数据存在了计算机内存的什么位置，因此这个函数返回的是数据在计算机内存中的地址
//	*/
//	double* pointer_convert_data_y = new double[size_data_y];
//	for (int i = 0; i < size_data_y; i++)
//	{
//		*(pointer_convert_data_y + i) = log(*(pointer_data_y + i));
//	}
//	return pointer_convert_data_y;
//}
//
///*
//1)说明
//	下面的这六个函数是为了计算最小二乘法中的相对应系数，我会给出对应的推导公式，然后就能看到
//字母对应的含义。
//*/
//
//double a_1(double* data_convert_x, double* data_convert_y,int size_data)
//{
//	double a_1 = 0;
//	for (int i = 0; i < size_data; i++)
//	{
//		double xi = *(data_convert_x + i);
//		double yi = *(data_convert_y + i);
//		a_1 = a_1 + (-2)*xi*yi;
//	}
//	return a_1;
//}
//
//double a_2(double* data_convert_x, int size_data)
//{
//	double a_2 = 0;
//	for (int i = 0; i < size_data; i++)
//	{
//		double xi = *(data_convert_x + i);
//		a_2 = a_2 + 2 * xi*xi;
//	}
//	return a_2;
//}
//
//double a_3(double* data_convert_x, int size_data)
//{
//	double a_3 = 0;
//	for (int i = 0; i < size_data; i++)
//	{
//		double xi = *(data_convert_x + i);
//		a_3 = a_3 + 2 * xi;
//	}
//	return a_3;
//}
//
//double b_1(double* data_convert_y, int size_data)
//{
//	double b_1 = 0;
//	for (int i = 0; i < size_data; i++)
//	{
//		double yi = *(data_convert_y + i);
//		b_1 = b_1 + (-2)*yi;
//	}
//	return b_1;
//}
//
//double b_2(double* data_convert_x, int size_data)
//{
//	double b_2 = 0;
//	for (int i = 0; i < size_data; i++)
//	{
//		double xi = *(data_convert_x + i);
//		b_2 = b_2 + 2 * xi;
//	}
//	return b_2;
//}
//
//double b_3(int size_data)
//{
//	return double(2) * size_data;
//}
//
//double r(double* pointer_data_x, double *pointer_data_y,int size)
//{
//	/*
//	1)说明
//		这个函数就是用来计算相关系数的
//	*/
//	double sum_x = 0;
//	double sum_y = 0;
//	double numerior = 0;
//	double denumer_part_1 = 0;
//	double denumer_part_2 = 0;
//	double r;
//	for (int i = 0; i < size; i++)
//	{
//		double xi = *(pointer_data_x + i);
//		sum_x = sum_x + xi;
//	}
//	double average_x = sum_x / size;
//
//	for (int i = 0; i < size; i++)
//	{
//		double yi = *(pointer_data_y + i);
//		sum_y = sum_y + yi;
//	}
//
//	double average_y = sum_y / size;
//
//	for (int i = 0; i < size; i++)
//	{
//		double xi = *(pointer_data_x + i);
//		double yi = *(pointer_data_y + i);
//		numerior = numerior + (xi - average_x) * (yi - average_y);
//	}
//
//	for (int i = 0; i < size; i++)
//	{
//		double xi = *(pointer_data_x + i);
//		double yi = *(pointer_data_y + i);
//		denumer_part_1 = denumer_part_1 + (xi - average_x) * (xi - average_x);
//		denumer_part_2 = denumer_part_2 + (yi - average_y) * (yi - average_y);
//	}
//
//	r = numerior/sqrt(denumer_part_1 * denumer_part_2);
//	return r;
//	
//}
//
///*
//1)说明：
//	下面的这两个函数是为了线性回归的系数
//*/
//double B_coeffience(double a_1, double a_2, double a_3, double b_1, double b_2, double b_3)
//{
//	/*
//	1）说明：
//		这个函数的作用就是计算线性回归的系数，因为这个线性回归只有两个参数，所以这是计算其中
//	的一个系数
//
//	2)b_coeffience
//		这里的b_coeffience代表的是截距（即y = ax + b 中的b ）
//	*/
//	double b_coeffience = ((-1) * b_1 + (b_2 / a_2) * a_1) / (b_3 - (b_2 / a_2) * a_3);
//	return b_coeffience;
//}
//
//double A_coeffience(double a_1, double a_2, double a_3, double b_coeffience)
//{
//	//这里的a_coeffience代表的是斜率（即y = ax + b中的a）
//	double a_coeffience = (-a_1 - a_3 * b_coeffience) / a_2;
//	return a_coeffience;
//}
//
//
//int main()
//{
//	std::cout << "=============开始运行代码===================" << std::endl;
//	int size = size_input();
//	double* pointer_data_x = Get_data(size);
//	std::cout << ""<<std::endl;
//	std::cout << "========接下来将会输入因变量数据=======" << std::endl;
//	double* pointer_data_y = Get_data(size);
//
//	//将数据进行线性话
//	double* pointer_convert_x_data = data_convert_x(pointer_data_x, size);
//	double* pointer_convert_y_data = data_convert_y(pointer_data_y, size);
//
/////*
////说明：
////	代码的测试
////*/
////	for (int i = 0; i < size; i++)
////	{
////		std::cout << *(pointer_data_x + i) << " ";
////	}
////	std::cout << " " << std::endl;
////	for (int i = 0; i < size; i++)
////	{
////		std::cout << *(pointer_data_y + i) << " ";
////	}
////	std::cout << " " << std::endl;
////	std::cout << "=====test_a_1===" << std::endl;
////	std::cout << a_1(pointer_data_x, pointer_data_y,size) << std::endl;
////	std::cout << "======test_a_2==========" << std::endl;
////	std::cout << a_2(pointer_data_x, size) << std::endl;
////	std::cout << "======test_a_3==========" << std::endl;
////	std::cout << a_3(pointer_data_x, size) << std::endl;
////	std::cout << "======test_b_1==========" << std::endl;
////	std::cout << b_1(pointer_data_y, size) << std::endl;
////	std::cout << "======test_b_2==========" << std::endl;
////	std::cout << b_2(pointer_data_x, size) << std::endl;
////	std::cout << "======test_b_3==========" << std::endl;
////	std::cout << b_3( size) << std::endl;
//
//	std::cout << "=====================================" << std::endl;
//	double a1 = a_1(pointer_convert_x_data, pointer_convert_y_data, size);
//	double a2 = a_2(pointer_convert_x_data, size);
//	double a3 = a_3(pointer_convert_x_data, size);
//	double b1 = b_1(pointer_convert_y_data, size);
//	double b2 = b_2(pointer_convert_x_data, size);
//	double b3 = b_3(size);
//	double b_co = B_coeffience(a1, a2, a3, b1, b2, b3);
//	double a_co = A_coeffience(a1, a2, a3, b_co);
//	std::cout <<"（线性回归的截距参数）B_coeffience is:::"<< b_co << std::endl;
//	std::cout << "（线性回归的斜率参数）A_coeffience is:::" << a_co << std::endl;
//	std::cout << "（反线性化变换的第一个参数：a）anti_a coeffience is:::" << exp(b_co) << std::endl;
//	std::cout << "(反线性化变换的第二个参数：b)anti_b coeffience is:::" << a_co << std::endl;
//	std::cout << "(最终的一元非线性函数)the function is::" << exp(b_co)<<"*"<< "exp" << "(" << a_co << "x" << ")" << std::endl;
//	std::cout << "相关系数为::" << r(pointer_data_x, pointer_data_y, size) << std::endl;
//	delete[] pointer_data_x;
//	delete[] pointer_data_y;
//	delete[] pointer_convert_x_data;
//	delete[] pointer_convert_y_data;
//	std::cin.get();
//}