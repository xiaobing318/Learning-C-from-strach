/*
1)Question
	���콫Ҫѧϰ��������enums,Ŀǰ���ǲ�֪�����Ǹ�ʲô��������ô������ǣ�
	1��ʲô��enums��
	2��Ϊʲô���������
	3�������ʲô�������⣿


2)Answer
	������֪����Ϊʲô����Ҫenums����Ϊ�������ǵĴ��뿴�������ӵļ��һ�㣬���ҳ��ָ��ٵĴ���
��Ϊ������д�����ʱ����ʱ���д�ܶ��integer constant ����ô��ʱ����п��ܻ����һ��������
��Ϊ��ʱ�����ǻ��ڴ���ĺ���������֮��ĵ���Щinteger constant����ô�ͻ����һЩ���⣬����˵
���ǲŻ���Ҫ��Щenums��

	
*/

#include <iostream>
enum Example
{
	A, B, C
};


int main()
{
	Example variable = B;
	if (variable == 3)
	{
		//
	}
	std::cout << variable << std::endl;
}