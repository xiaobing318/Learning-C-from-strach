/*
1)#���ŵĽ���
	ǰ������#�������һ��preprocess�ı�ʶ���ţ��൱�ڸ���compiler���ȴ���������ź����
����
	�κ���#��ͷ��statement����һ��preprocessing��statement
	Ϊʲô�����#���Ž�����preprocessing statement����Ϊ��Щstatement���Ƿ�����compliment
֮ǰ��һЩ�������Խ�����preprocessing statement

2��include �Ľ���
	include statement ��������������ҵ���Ӧ���ļ������Ǻ���Ҫд���Ǹ��ļ�iostream����Ȼ��
���Ǹ��ļ��е�����content��������ǰ���ļ��У����Ǹ����������ļ�������ͷ�ļ�

3)Ϊʲô����Ҫ������Ӧ���ļ���
	ԭ���������Ҫʹ�����еĹ���
*/
#include <iostream>


/*
1)main�����Ľ���
	��������Ҳ��һ����������c++�м������еĶ����ɺ�������ɹ����ģ�ֻ�������main ������
һ����������������֮���������������������һ������ڣ�Ҳ����˵һ�������Ǵ��������ģ�Ȼ��
�������еġ�
	������Ϊ�������⣬�������ǿ���û�з���ֵ�ģ�Ҳ����˵���Բ���д return 0;
	��Ȼ�ˣ�д��Ҳ��û��ʲô�������
	������Ҫע���һ����������������û��дreturn��ʱ�򣬳���Ĭ���Ƿ���0

2������computerִ������д�������˳��
	computer��һ���е�ִ��������д��code��Of course,�����Ž���ִ�е�˳������Ǵ��һ��ִ��
��˳��
	����������������control flow���,������call other functions
	������������˵����һ���е�ִ��������д�Ĵ���

*/

/*
	�����������������һ��declaration���൱���Ǹ���compiler��������Ǵ��ڵģ���compiler��
�����������ѡ���������ǣ���һ�ֽǶȾ���˵compiler������������ȥ����������Ƿ�����Ĵ��ڣ���ô
���ǵ�������ǵ���������������Ŀ��ʱ��compiler��ô֪�����ǵ������������Ĵ��ڣ������linker
�����������ˡ�linker���������ǵĺ����Ƿ����Ȼ����Щcpp files��ϳ�һ������ļ���������
���С�
*/
void Log(const char* message);

int main()
{
/*
1)���� <<
	�������������һ��overloaded ���ţ�Ҳ����˵��������Ϊ��Ϊ�丳���˺��壬���Դ�ĳ�̶ֳ���
�����������ǿ��԰�������ſ�����һ�ֺ���
	��������Ҫ�γ�һ����ʶ�����ǳ�ʶ��operatorֻ��һ�ֺ���,������������
	std::cout.print("hello world").print(std::endl);

2)���͵�һ�д�������������
	������ǰ�<<������ſ�����һ�ֺ����Ļ�����ô����������������������ǰѡ�hello world������
һ����������ǰ��ĺ����У�Ȼ���������ִ����Ӧ�Ĺ���
	���Ƶģ����ǿ��԰�<<std::endl�����������������һ����������������У�Ȼ���������ִ��
��Ӧ�Ĺ���

3)std::endl
	��һ����������þ��Ǹ���console�Ƶ���һ�н��д���ʣ�µ��������

4��;
	��������൱���Ǹ���compiler����һ�еĴ���ִ�е�;����ǰ���Ѿ�������
*/
	//std::cout << "hello world" << std::endl;
	Log("hello world");
/*
	�ȴ����ǰ���enter����ʱ��,Ȼ��ż���ִ����һ�еĴ���
*/
	std::cin.get();

}

/*
Q:how the C++ works ?
	step1:the computer executes the preprocessing statement,which means that the compiler
just copy the iostream file and paste that file to the current file,this is the first 
step.

	step2:compiler will compile the .cpp files rather than header files to binary files
this is a key point which we should pay attention to.

	step3:every cpp files will be compiled an object individually.That is said that every
cpp files is individually.

	step4:Because we have got these individual cpp files,now we need a way which can 
combine these objects files into only one file. And this is our friend linker's job.
*/