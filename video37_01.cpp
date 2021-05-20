/*
===========Ternary Operators in C++ (Conditional Assignment)================
	����������⽫�ǽ���ѧϰ������,�����������һ��ʲô��ternary operators�����Ҳ�Ӧ��ͨ��������֪���京��ģ��෴
Ӧ��ͨ��ѧϰ���������壩����Ȼ��ͨ�������ע����Ҳ֪�������video�н��ὲ��������ǹ���conditional assignment��
�Ҹо���Ӧ�ú������Ķ����ǲ�һ���ģ�conditional statements����


1)Understanding the term
	1�����ȣ���Ҫ����һ��term����ternary����ôʲô��ternary������Wikipedia�Ľ��ͣ���Ternary (from Latin ternarius)
is an adjective meaning "composed of three items"Ҳ����˵������ʵĺ������ǿ�������Ϊ�ǰ�����������ϵ�һ�����
�ɵ�һ������壬��������ͽ�����ternary
	2��operator�ĺ�������Ӧ���ǱȽ�����ģ����Ǳ����ϵ������ܻ�û�У��������Ķ�����operand����ô�������term������
���ǿ����뵽���operator��operand�������������ֱ���conditions,expression and expression
	3������һ������Ҫ˵�ĵ㣺ternary operatorΪʲô�����������ֵ�Ŀ����ʲô��ͨ��������ص��������ǿ��Ժ����׵�֪
�����operator��Ϊ��ȡ��if else��statement����ʵ����˵ȡ���ǲ�̫׼ȷ�ģ���Ϊ��������operatorֻ��Ϊ��ʹ��������д��
code��ø��ӵļ򵥣����׶���������ʹ��code�����ô�ҡ�
	4��ternary operatorʹ�õĽ��飺���ֻ���Ǿֲ���ʹ��������д�Ĵ����ü�࣬���ǲ����������κεĵط������ǿ�����
ô���룺pointer ��reference֮�������pointer���Ը��������飬��referenceȴ�ǲ����Եģ�Ҳ����reference�����еĹ�
��pointerҲ�Ǿ��еģ����Ƿ�����ȴ������������ô����Ҳ��һ���ġ�����ͻȻ����cherno˵��һ�仰˵���ternary operatorֻ
��if else���﷨�ǣ���ô�������ǱȽϺ�����ˣ�
	cherno���Ľ�����ǣ�������һЩ��Ҫ��ʱ�����ʹ�����operator����Ϊ���operator����ʹ�����ǵ�code��ø��ӵļ��
��ô�������ʲôʱ��������������Ǳ�Ҫ�ģ���������ѧϰ���Ķ�������֪�����operatorֻ�ǿ��Զ�binary condition������
�ϣ������ܶԶ�������жϡ�

*/
#include <iostream>
#include <string>

//here i want to creat two variables of type int on stack,and these variables will be see only in this file
static int f_Level = 0;
static int f_Speed = 2;

int main()
{
	if (f_Speed > 2)
	{
		f_Level = 1;
	}
	else
	{
		f_Level = 0;
	}

	f_Level = f_Speed > 2 ? 1 : 0;


	std::string rank;
	if (f_Level > 5)
	{
		rank = "Master";
	}
	else
	{
		rank = "Begainner";
	}

	std::string rank = f_Level > 5 ? "Master" : "Begainner";

	std::cin.get();
	return 0;
}
