#include <iostream>
#include "video11_Log.h"


int main()
{
	int a = 8;
	a++;
	char test_H = 'H';
	std::cout << int(test_H) << std::endl;
	
	const char* string = "Hello world!";
	for (int i = 0; i < sizeof("Hello world!"); i++)
	{
		std::cout << string[i] << std::endl;
	}
	Log("hello world!");
	std::cin.get();
}

/*
1)�����У���Ϊ��Ҫ���������memory��Ҳ������һ�������У�������Ϊ��ע�����鼤��himemory

2��ѧϰ��VS��memory�ĸ�ʽ������ߵ����ڴ��ַ���м����ʮ�����Ƶ����ֱ�ʾ�������ұߵ�����
��Щʮ�����Ʊ�ʾ�ľ���Ķ�����

3����VS�ڴ�Ĺ����У�cc ��ʾ�����ǻ�û�н��г�ʼ����һЩֵ����������������ǿ��Եó���һ
����������Ŀ����������ʾ�Ķ���compiler��ʾ���ǵ�һЩ���飬�������cc������������һ��ֵ��
û�н��г�ʼ����

*/