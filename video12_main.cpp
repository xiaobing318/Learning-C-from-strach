
#include <iostream>
#include "video12_Log.h"



int main()
{
	int var = 5;
	if (var == 5)
	{
		Log("the variable equals to five!");
	}

	else if(var != 5)
	{
		Log("the variable is not five!");
	}

	Log("Hello World!");
	std::cin.get();
}

/*
1)condition statement(if statement)
	��ʵ�������if�ж���������Ķ����Ƿ���0������1�������condition statement�ı��ʣ�ֻҪ
�����ǳ�������Ķ�������ô���if body �еĴ��뽫�ᱻִ�С�

2��if statement��ʵ�ֹ��ǱȽ��鷳�ġ�
	����˵����CPU�ڲ�ͬ���ڴ��в������Ӧ�����ݣ���������Ҫע���һ��������ǣ��ڲ�ͬ���ڴ�
�ռ���������ȥ����ʹ�ó����������һ�仰��˵��������Ӧ�þ�������ʹ��if statement,�����Ż�ʹ��
������

3��else if������һ���ؼ���
	��仰Ӧ����ô��⣿���ҵ�ӡ���У�else if ����һ���ؼ��ʣ�������ʵ�����ǵġ����ǿ�������
������⣺
if(condition)
{

	code body;

}

else
{
	if(condition)
		{
			code body;
		}
}

else statement ��ʵ�Ǻ�else if��һ���ġ�
*/