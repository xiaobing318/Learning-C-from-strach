/*
	���콫��ѧϰString Literals in C++����ô�ҽ�����һЩ���⣺
	1��ʲô��string literals��
	2����ʲô�ã�
	3���ܹ�Ϊ���ǽ��ʲô�������⣿
	4�������һ���µĶ����Ļ�����ô��c++�еĻ���������ô���ģ�

1��thinking and inference
	���ȣ�����ҪŪ����һ�����ʾ���literals��ʲô��˼���ҸղŲ���һ�£����ĵķ����ǡ����֡�����˼����ô����Ҫ֪��
���ǣ������characters��ʲô������Ϊ�Ҿ���������Ӧ����û��ʲô����ģ����ҵ���֪��Χ�ڣ���ν������ָ�ľ���һ
ϵ�е�characters������˵��Щ���־�����characters��ɵģ��������û��ʲô�������������ѧϰ�������ݵĽǶȳ���
��ô������֮����������ʲô������ôcherno��Ҫ�������Ƶ�д���ʲô�������ݣ�����˵�Ҵ������Ƶ�н���ѧϰ��ʲô
����֪ʶ���ݡ�

2��Answer
	Constants refer to fixed values that the program may not alter and they are called literals.Constants
can be of any of the basic data types and can be divided into Integer Numerals, Floating-Point Numerals, 
Characters, Strings and Boolean Values.
	constantsָ�ľ�����Щprogram���ܸ��ĵ�ֵ������������ֵ����Ϊ��literals,constants�������κεĻ�����������
��ˣ���Щconstants���Ա���Ϊ������˵�ļ��֡�
	��һ�����⣺ΪʲôҪ��һ�����������֣�������û��Ū�����һ�����飬�������������һ������
	
	��������˵������֪���ˣ�ԭ������������������һ���ģ�����string��������Ҳ�ǻ����constant���͵ģ�Ҳ����˵��
�����������ǲ��ᱻprogram���ı�ġ���ô�ҿ�����һ��������ƶϣ����������Ҫһ��string���͵�data���ᱻprogram��
��ı���ô���Ǿ�Ҫ�����������͵ı�����һ��constant����ô��ô����������������������constant data��һ���ģ�ֻ��
Ҫ�ڱ�����ǰ�����һ��const�Ϳ����ˣ�����const std::string name = "the Xb_Y";�����һ��constant string�ı���
��ô������Ҫע���һ��������ʲô����Ϊ������ǲ������constant string�������г�ʼ������ô������compiler�������
����������stack�ֵ�ĳ���ڴ�ռ��ϣ������Ǹ��ض����ڴ�ռ��ϣ������ͻ������һЩֵ����Щֵ�����ᷢ���仯��׼ȷ��
˵����program������ı�����ض�������ֵ�������ǣ����ǰ�һ�������趨��һ��constant��Ŀ����ʲô�����ǵ�Ŀ��������
���program����ı�������Ҫ������ֵ����ô����ͻ��漰��һ�����ݣ����Ǳ����ĳ�ʼ����
	����������У���������Ϊʲô�ܶ�����ǿ�����ǽ��г�ʼ�����ӻ�����˵���⽫��һ���ĳɱ������Ƕ��ڿ��ܻ����bug
�ĳɱ���˵����ʼ���������ĳɱ��ǿ��Ժ��Բ��Ƶģ�����ˣ�������ʲô����£����������������ı�����������ö����г�
ʼ��������������һ���ĳ̶��ϱ���һЩ����Ĳ�����

3)ѧϰcherno��˵�Ķ���
	�����ϣ�һ��string literals����Ķ�����������˫��������Ķ���������"this is a string literal",���������
����һ����string literalsֻ������˫��������Ķ�������Ҫ����ע����ǣ�string literals�����;���const�ġ�֮ǰ��
�ҹ��ܶ�����ϣ�����ӡ��Ƚ���̵ľ��ǣ�string literals ����һ�α�˫������������text��������ֵ�ǲ��ܱ��ı�ġ�
	array of char �� string֮����������string ��һ�������array of char����Ϊ��һ��string�У���arrayĩβ��
�Ậ��һ��������ַ������������ַ���һ�ֱ�ʶ�����൱���Ǹ���compiler array�ķ�Χ�Ƕ��٣������������֮�������
�������ǿ��������룺string literalsֻ������һ��constant string,���������Ƕ�����⣬��ô�Ҿ���û��ʲô��������
��ģ���Ϊ�����ƵĶ�������const  pointer Ҳ�������ǳ�˵��reference�����ǿ���ͨ������һ������ȵĹ�ϵ��������
������
	cherno���ᵽ��һ���������string literals�Ĵ洢λ�ã�string literals���Ǵ洢��read-only��segment,ע����
��˵�������ǣ���ô������ʲô����£����Ƕ��ǿ�����Ϊ��Щstring literals������Ƕ��������д��һ�������У��Գ�����
˵�����������ľ�����ǰд��һЩָ�Ȼ��ͨ��ָ�����޸�data in memory�����ǲ������ľ����޸�code,��Ϊ���ǵ�string
literals����Ƕ��program��Ҳ����˵string literals��һ��"ָ��"����ô���ǲ������ľ����޸�ָ�

===================���˼��=====================
	�ڼ������Ӳ��ʵ������һ��ר�е�memory device named Read-only memory,���memory�еĶ���ֻ�ǿ��Ա�����access
�������ǲ��������������modify���������memory��һ���ص������memory�еĶ�����"������"�Ĵ��ڵģ���������������
���ǶϿ���Դ��˵�ģ�Ҳ����˵������ǶϿ��˵�Դ����ô���device�еĶ�����Ȼ�Ǵ��ڵģ���ô���device�д洢�Ķ�������
����ϵͳ����Ҫ��һЩdata������program�����Դ�ʵ�������еõ��ܺõ���֤��Ҳ�ǱȽ�����������ġ�
	��ô����������д�����Լ���program��ʱ��Ҳ����Ҫһ���������ƵĶ�������ô���������ʵ�־���ͨ��system�����һ
���ض���memory space�������������Ҫ��һ���������ô����������ǾͿ��Գ�����const segment����ʵ�����ƺ���Ҳ��֪��
�ǲ����ر��׼ȷ����������������𵽵�һ�����þ��Ǵ洢���ǵĴ��������һЩ����ı��data��
	����һ���Ƚϳ��������Ӿ���const and static������static������Ҫ���յ�����scope and lifetime��������һ���ֵ���
�����������յıȽ�����ˡ�

*/

#include <iostream>
#include <stdlib.h>

void function()
{
	static int number = 0;
	number += 1;
	const char* name = "cherno";
	std::cout << ":::" << number << std::endl;
}
int main()
{
	//std::string name0 = std::string("cherno") + "cherno";
	//std::cout << name0 << std::endl;
	//const char name[8] = "Che\0rno";
	//std::cout << strlen(name) << std::endl;
	//std::cout << "cherno0" << std::endl;
	//std::cin.get();


	//test the memory of static variable
	static int num = 0;


}