#include <iostream>
/*
1)setup
	������Ҫ˵����һ�������solution explorer�е���Щfiles���������������ϴ��ڵģ�ֻ��Ϊ��
���ǵķ��㣬���Խ��е��ļ��Ĺ�������ʵ���ļ�����Щ��ν�ķ�����ʵ�ǲ����ڵġ�

	�ܵ���������Ϊ�����ǵķ��㣬���������������ϵĴ��ڡ�


2)�ļ������ʽ
	���ȣ���������Ҫ�γ������Լ���Ҫ��һ����ʽ��
	1��Դ�ļ���Ҳ���������Լ���д��һЩ�ļ������������ļ�����������ϵͳ����ֱ�ӽ������е��ļ�
	2��binary�ļ�����������ʽ����bin����Ҳ���� machine code��
	3��solution �ļ�

	���������Ҫ����һ��������ǰ���ص��ļ����ó�������Ҫ��һ����ʽ��
*/


int main()
{
	//ֻ����Ϊ�����һ���ӿ�
	std::cout << "Hello World!" << std::endl;
	std::cin.get();
}

/*
1)$(SolutionDir)binary\$(Platform)\$(Configuration)\
	1��$(SolutionDir)����������ǵ�Solution�ļ���·��
	2��binary�������������Ҫ����һ����Ϊbinary���ļ�����Ȼ�������Ϊbinary���ļ�λ��
		SolutionDir,�൱�������SolutionDir��һ�����ļ�
	3��$(Platform)������binary�ļ��´�����Ӧ��Platform�ļ�
	4��$(Configuration)������$(Platform)·���´���һ����Ӧ��configuration�ļ�������Debug��

2��$(SolutionDir)binary\intermediates\$(Platform)\$(Configuration)\
	1��$(SolutionDir)����������Ǵ�����Solution�ļ���·����Ҳ����˵���Ǵ�������Ŀ���ڵ�λ�ã�
	2��ʣ�µĶ������Ƶģ�ֻ������֮ͬ���������intermediate����ת�����ļ�����binary�ļ���

3������Ҫ˵����һ�����:
	��һ����ָ�ļ������λ�ã�Ҳ����������д�Ĵ����λ�ã�source files)
	�ڶ�����ָbinary�ļ����������

4��summary
	���video���Ҹд����ľ������еĶ�����ֻ���ļ������ļ��ֿ�����binary��ʾ��
*/