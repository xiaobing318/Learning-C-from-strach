/*
1)trying
	���콫�ὲ��������ǹ���static keyword in class or struct����ô���ҵ��Ժ��н������һЩ��
�⣺
	1��static keyword��һ��class�н�����ʲô�������ã����߻��仰˵����Ϊʲô����һ��class��
	ʹ��static��Ҳ����static keyword����Ϊ�����ṩʲô��
	2��static��ʹ�ý�����ѭʲô����pricinples?
	3����һ��class�п��Ա�ʹ�õķ��涼������Щ��

2��thinking
	һ��class��������һЩdata members ��һЩmethods��ɵ�,�������ܸ��õ����thisָ��������ˣ�
ĳ�̶ֳ��ϼ��˴��룬ֻ����������Ƶ�ʵ������class��ʵ�ֵģ����кܶ���ô��һ�û�з��֣�����Ҫ
�����ҵ���Ӧ�Ĵ𰸡�
	��ô��Щmembers����ô���洢�����ģ�����һ��class��˵��ÿһ��object������һ��member data��
copy����function���߽�����method���ڶ�objectsֻ����һ��copy�������class�Ĵ洢��ʽ��
	���ͬʱ���һ�ע�⵽��һ���������copy�ƺ��ڳ������Ƿǳ���Ҫ�ģ�����ĿǰΪֹ�һ���֪����Ϊʲ
ô���Ҿ��������ҵ�������������ʱ����Щ�ɻ󽫻�õ����

	��ô��һ��class������Ϊʲô����Ҫstatic�����ǿ��ܻ�������������ĳЩ����������functions��
�����������Ǻ�class�����ǹ����ģ���������class��ÿ��object������Ϊʲô����������������Ϊ��ĳ
Щ����£���Щobjects��data members�н�����һЩ��ͬ�ĳ�Ա����ô����������£�������Ҫ���ľ���
�������ͬ�Ĳ����������Ҳ����ֻ��һ��copy���������copy������class����ô��ô����ԭ�����Ϊ�˽�
ʡ�ڴ�ռ䣬��Ϊ������������Ļ�����ôclass��ÿһ��objects������һ����Ӧ��copy����ʱ��ͻ����
�ڴ�ռ���˷ѣ���������ǵ�Ŀ�ġ�

	���������һ���ɻ�Ϊʲô���ǻ���Ҫһ�� static function,���Ƿǳ���ֵģ���Ϊһ��class��
functionֻ�����ڴ��б�copyһ�Σ�������data members����ô����Ϊʲô����Ҫstatic function�����
˵һ�����������Ϊ��Ҫ�Ķ�������memory����ô����static function���ܽ���ͬһ��㣬�����Ǻ�ǣǿ��


	����������˵һ���Ҷ�static in class�е���⣺���ȣ���һ��class�У�static�������õĶ�����
data attribution��methods������г�Ա��������static����ô�ʹ�����������Ա����������class��
objects��ҹ�����ô�൱����һ��class�е�global variable��
	���߶���declaration��definition����������Ǳ���Ҫ��������������������Ҫ��һ���Ƕȡ�
*/
#include <iostream>

class Multiple
{
private:
	int m_value_1;
	int m_value_2;

public:
	int multiple()
	{
		return m_value_1 * m_value_2;
	}

	Multiple(int p_value_1, int p_value_2)
	{
		m_value_1 = p_value_1;
		m_value_2 = p_value_2;
	}
};

int Multiple_f(int* p_value_1, int* p_value_2)
{
	return (*p_value_1) * (*p_value_2);
}

int main()
{

	int Int_Array_1[2] = { 1,2 };
	int Int_Array_2[2] = { 2,2 };
	int Int_Array_3[2] = { 3,4 };
	int* ptr = Int_Array_3;
	std::cout << Multiple_f(ptr,ptr+1) << std::endl;
	std::cout << "=================" << std::endl;
	Multiple obj_1(1,2);
	Multiple obj_2(2,2);
	Multiple obj_3(3,4);
	std::cout << obj_1.multiple() << std::endl;
}