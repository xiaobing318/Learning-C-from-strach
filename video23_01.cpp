/*
1)˵��
	���콫Ҫ����������Local static in c++
	��ô��֮�������������ʲô��local��
	ʲô��local static��
	Ϊʲô����local��
	Ϊʲô����static local��

2)recall
	����ѧϰ���Ķ����ǣ�
	1������һ��������˵������Ҫ��������������Ҫ���ǲ��ĵģ����������ͣ�Ҳ�������С��������һ��
	���������ڴ��д��ڵ�λ�ã�scope��

	���ʹ�С�����Ѿ��ǳ���Ϥ�ˣ���ô����scope�أ���������˵�һ��ǲ�̫��Ϥ�������ô�Ҿ�����˵˵
	���Լ�������ĸ�������֪��

	scope����Ӱ����������������ݣ���һ�������access��Ȩ�ޣ������Ƿ���Է���������û��ʲô����
	�⽫�ǵ�һ�����ǽ�Ҫ���ǵ����أ���ô�ڶ�������������ڴ��д��ڵ�ʱ�䳤�̣�lifetime��

	��Ҫ��Ϊ�������֣�local variable��global variable��static local variable

	local variable����һ�������������ı�������local variable
		1������Ȩ�ޣ�����������в��ܱ�����
		2��lifetime�����������exist��ʱ�򽫻ᱻ���٣�Ҳ���Ǵ��ڴ���destroy

	global variable�����������κκ����еı���
		1������Ȩ�ޣ�program�е��κ�function��statements���ǿ��Է��ʵģ������޸ĵģ�������ʵ�
		��˼Ҳ�������޸ĵĺ��壬Ϊ�˲��޸�֮ǰ��˵�ģ�
		2��lifetime���������program�У�Ҳ���ǵ����program������ʱ�����ֱ����Ż����ڴ��б�
		destroy

	static local variable��ͬlocal variable�Ķ�����һ���ģ�Ψһ��ͬ�ľ����ڱ�����ǰ�����һ��
	static
		1������Ȩ�ޣ���program�е�functions and statements���ǿ��Է��ʵ�
		2��lifetime:����������program��
*/
#include <iostream>

void function()
{
	static int var = 0;
	var++;
	std::cout << var << std::endl;
}

int main()
{
	function();
	function();
	function();
	function();
	function();


}