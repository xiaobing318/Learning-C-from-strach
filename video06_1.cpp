/*
	�������Ƶ�н��ὲ��������ǹ���C++��compiler�Ĺ���ԭ��Ҳ����˵C++��compiler������
��ô�����ģ�
	������д�Ĵ���ֻ��text���������ǵ�computer��Ҫ�����ǿ���ִ�е�binary code,��ô������
���н������һ�����ʣ���ô��textת����computer����ִ�е�binary code��
	�����ת���Ĺ����з������������飺
	1����������д���ļ�����compiler
	2�����Ѿ�compiler���˵��ļ�����link

1)compiler�����������Լ��䱾�ʵĽ���
	�ܵ���˵compiler������������ǽ�������д��codeת��Ϊ����ִ�е�binary code�����⣬����
��д��code���ս��ᱻת����constant data and instructions.
	��д���ע�͵�ԭ��������һ����Ҫ��ע�ĵ㣺code that we wrote will be converted to 
constant data and some instructions
2)C++���ļ���˵��
	��C++���ļ�ʵ���϶�compiler��˵�ǲ���Ҫ�ģ�Ϊʲô������˵����Ϊ���ǶԲ�ͬ���ļ�����
�����ԭ����Ǹ���C++compiler��ôת����Щ�ļ����ܽ���������ͬ���ļ����ͣ�.cpp or .c or 
.h and so on�������Ĺ���ֻ�Ǹ���compiler��ô����Щ�ļ�ת��Ϊbinary code

	�ļ���������û��ʲô����ģ�����ֻ�Ǵ洢���ݵ����Ͳ�ͬ���ѣ������趨һ���ļ������ͣ���
Ϊ����ת�����ܹ������ض�����ʽ����ת�����ݣ�������ļ����͵ı��ʡ���һ���Ƿǳ���Ҫ�ġ�
*/
#include <iostream>
void Log(const char* message);

int main()
{
	Log("this is a test!");
	std::cin.get();
}