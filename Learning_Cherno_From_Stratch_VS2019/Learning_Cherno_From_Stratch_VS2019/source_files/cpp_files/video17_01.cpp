#include <iostream>
#define LOG(x) std::cout << x << std::endl;

void Increment_pointer(int* value)
{
	*value = *value + 1;
}

int main()
{
	int a = 8;
	Increment_pointer(&a);
	LOG(a);

}

/*
1���ܽ�
	1��referencea are just pointers
	2��˵��referencesֻ��һ���﷨�ǣ���ô��˵�������ϲ�����һ���µĶ������䱾���Ͼ���һ��pointer
������ǰ���������һ�����ֹ���ȱʧ��pointer����ô�������Ӧ�û��������һ�㡣
*/