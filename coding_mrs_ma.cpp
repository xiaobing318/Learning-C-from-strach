//#include <iostream>
//
//int size_input()
//{
//	/*
//		���������������������Ǵ��û�����õ��������ݵĴ�С��Ҳ�����û�Ҫ����������飬����
//	˵Ҫ����10����С�����ݣ���ô�����������õ���Ӧ��С��10
//	*/
//	int size;
//	std::cout << "=======�������㽫Ҫ�������ݵĴ�С�������ж��ٸ����ݣ�����>=1)::========" << std::endl;
//	std::cout << ":::";
//	std::cin >> size;
//	return size;
//}
//
//double* Get_data(int size_input)
//{
//	/*
//	1)˵��
//		������������þ��ǰ��û������������double����ʽ�洢�ڵ��Ե��ڴ��У����ǿ��Եõ����
//	�ڴ�ĵ�ַ��Ҳ����˵���ǿ��Եõ���Щ���ݾ��屻�洢�ڵ��Ե�����������ʾ���֡������ʱ��
//	���õ���pointer����һ�仰˵����pointer���Ը����������ݾ������ڴ���Ǹ��ط���
//
//	2��input and output
//		input:ʲôҲû�У���ֻ��Ҫ������������Ϳ�����
//
//		output:���ǿ���ͨ����������õ����ݱ��洢�ĵط����Ա����ʹ�õ�ʱ������ҵ���Щ������
//	���
//
//	3)notice
//		��Ҫע����ǣ���������stack��������һЩ�ڴ�ռ䣬����Ҫ�ֶ��ͷ��ڴ�ռ�ģ���Ҳ����
//	������ǲ��ֶ��ͷ��ڴ�ռ䣬��ô�ղ�ʹ�õ��ڴ�ռ佫һֱ�ᱻռ�á�����һ����Բ�����ᣬֻ
//	�������Լ����������
//	*/
//	std::cout << "=========���������Ա�������==========" << std::endl;
//	bool flag = true;
//	double *array_data = new double[size_input];
//	int i = 1;
//	while (flag && (i <= size_input))
//	{
//		std::cout << "�������" << i << "�����ݣ���" << std::endl;
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
//	1)˵��
//		������������þ��Ƕ��Ա�����x�����ж�Ӧ�ı任�������Ա任�����Եģ������ݶ�Ӧ�Ĺ�ʽ
//	���ǿ���֪���Ա�����û�÷���ʲô�仯�������任����Ա��� = �任ǰ���Ա��������������Ҫ
//	���������ֻ�ǰѶ�Ӧ�ı任ǰ���Ա�����ֵ�����任����Ա�����
//
//		����Ҫ˵����һ������Ұѱ任����Ա�������������洢���˼�������ڴ��У��൱��������
//	һ���ڴ�ռ����洢�任����Ա��������ݡ�
//
//	2��input and output
//		input:������Ҫ֪��һ����Ҫ�任�Ա�����������ʲô�Ͷ�Ӧ�Ĵ�С��������Ҫ�任������Ϊ
//	[1,2.3,3.4,4.2],��ô������ݾ����ֵ����֪���ˣ�����Ҫ֪���ľ���������ݵĴ�С�����
//	���������С����4
//
//		output�����ǵõ����Ǳ任�����ݵĴ洢��ַ��Ҳ����˵�任������ݴ洢���˼������ʲô
//	λ�á�
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
//	1)˵��
//		������������þ��ǽ�����������������һ���ķ�ʽת����������Ҫ����ʽ�������ת����ʽ
//	��ln(y)����ͬת���������x���ķ�ʽ���ƣ����������ǰ�ת�����˵����ݴ洢�ڼ�������ڴ��У�
//	�൱���Ǹ���������Щ��ת��������ݱ�����洢���˼�����ڴ���ĸ�λ�á�
//
//	2��input and output
//		input:�������
//				1����Ҫ��ת�������ݣ������y��
//				2����ת�����ݵĴ�С������һ����10�����ݣ�
//		output:��������������ṩ���Ǳ�ת��������ݴ洢�ڼ�����ڴ��λ�á����������Ǳ�ת��
//			������ݴ����˼�����ڴ��ʲôλ�ã��������������ص��������ڼ�����ڴ��еĵ�ַ
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
//1)˵��
//	�����������������Ϊ�˼�����С���˷��е����Ӧϵ�����һ������Ӧ���Ƶ���ʽ��Ȼ����ܿ���
//��ĸ��Ӧ�ĺ��塣
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
//	1)˵��
//		����������������������ϵ����
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
//1)˵����
//	�����������������Ϊ�����Իع��ϵ��
//*/
//double B_coeffience(double a_1, double a_2, double a_3, double b_1, double b_2, double b_3)
//{
//	/*
//	1��˵����
//		������������þ��Ǽ������Իع��ϵ������Ϊ������Իع�ֻ�������������������Ǽ�������
//	��һ��ϵ��
//
//	2)b_coeffience
//		�����b_coeffience������ǽؾࣨ��y = ax + b �е�b ��
//	*/
//	double b_coeffience = ((-1) * b_1 + (b_2 / a_2) * a_1) / (b_3 - (b_2 / a_2) * a_3);
//	return b_coeffience;
//}
//
//double A_coeffience(double a_1, double a_2, double a_3, double b_coeffience)
//{
//	//�����a_coeffience�������б�ʣ���y = ax + b�е�a��
//	double a_coeffience = (-a_1 - a_3 * b_coeffience) / a_2;
//	return a_coeffience;
//}
//
//
//int main()
//{
//	std::cout << "=============��ʼ���д���===================" << std::endl;
//	int size = size_input();
//	double* pointer_data_x = Get_data(size);
//	std::cout << ""<<std::endl;
//	std::cout << "========�����������������������=======" << std::endl;
//	double* pointer_data_y = Get_data(size);
//
//	//�����ݽ������Ի�
//	double* pointer_convert_x_data = data_convert_x(pointer_data_x, size);
//	double* pointer_convert_y_data = data_convert_y(pointer_data_y, size);
//
/////*
////˵����
////	����Ĳ���
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
//	std::cout <<"�����Իع�Ľؾ������B_coeffience is:::"<< b_co << std::endl;
//	std::cout << "�����Իع��б�ʲ�����A_coeffience is:::" << a_co << std::endl;
//	std::cout << "�������Ի��任�ĵ�һ��������a��anti_a coeffience is:::" << exp(b_co) << std::endl;
//	std::cout << "(�����Ի��任�ĵڶ���������b)anti_b coeffience is:::" << a_co << std::endl;
//	std::cout << "(���յ�һԪ�����Ժ���)the function is::" << exp(b_co)<<"*"<< "exp" << "(" << a_co << "x" << ")" << std::endl;
//	std::cout << "���ϵ��Ϊ::" << r(pointer_data_x, pointer_data_y, size) << std::endl;
//	delete[] pointer_data_x;
//	delete[] pointer_data_y;
//	delete[] pointer_convert_x_data;
//	delete[] pointer_convert_y_data;
//	std::cin.get();
//}