#pragma once

/*
	�����static�Ƿǳ���Ҫ�ģ��������û��д���static�Ļ�����ô��link��ʱ�򽫻���ִ���
������ǵ�linker link֮���γ�һ��translation unit ��ʱ����ô�ͻ���ֶ����ͬ���ļ�����
ô�����������Ҫ���ĵ����⡣
*/
static void Log(const char* message)
{
	std::cout << message << std::endl;
}
