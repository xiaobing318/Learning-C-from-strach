/*
1)˵��
	���콫Ҫѧϰ�������ǹ���control flow�ģ�continue��break and return������control flow
��ר��Ϊloop����ġ�

2��explain
	1����һ��loop �е�continue����ĺ����ǲ���ִ��loop��continue����Ĵ��룬����ֱ�ӽ�����һ
�ε�ѭ��������continueֻ����ѭ������ʹ�ã�
	2��break������loop��ʹ�ã�Ҳ�ǿ�����switch��ʹ�õģ�����ĺ������������ǰ��ѭ��
	3��return����ĺ������������ǰ���ڵĺ���������һ���Ƚ�ǿ���control flow

3)notice
	�����ر�Ҫע���һ���������continue��break����֮�������һ��ֻ����������һ�ε�ѭ����
����һ�����ǣ�����ֱ��������ȫ����ѭ���������һ�λ�����ȫ��ָ����һ��ѭ���Ĵ�����
*/
#include <iostream>
#include "video15_Log.h"
int main()
{
	for (int i = 0; i < 5; i++)
	{
		Log("Hello World1");
	}
	std::cin.get();
}