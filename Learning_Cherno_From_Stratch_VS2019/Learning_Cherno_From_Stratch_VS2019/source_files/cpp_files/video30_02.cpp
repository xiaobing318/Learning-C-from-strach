/*
1��cherno˵visibility����program��û��ʲôӰ��ģ�������˵���Ƕ������ܷ�����û��ʲôӰ��ġ�
	��һ������û���뵽�Ļ���˵��û�н��й�˼���ģ���û�����ⷽ�����˼����Ҳ����˵Ŀǰ�����Ҷ���һ���ֵ���
�ݻ�û�н����о������������Ҫд��һ�����õ�program����ô�ⷽ�������һ����Ҫ���п��ǵġ�

2�����������һ��class��û����������˵��˵��visibility�����ͣ�������˵û���ⷽ������ݣ�ʵ�����Ǵ��ڵģ�Ҳ
����Ĭ�ϵ����ã�����visibility��

3�����������һ���������struct and class����֮������𣬵�����Ϊ��Ҫ�ľ�������ʲôʱ��ʹ�����ǣ�cherno��
��ϰ�߾�������������ݵĹ�����ʱ�������������struct����ʽ���������������class,��Ȼ�ˣ���ֻ�����Լ���ϰ
�ߣ�����û�б�Ҫ����һ���������˽���һ���ֵ�֪ʶҲ�Ƿǳ���Ҫ�ġ�

4��private
	�����ĺ������ֻ������ض���class�ſ��Խ��ж�data��write and read,���Ҹ���Ȥ���Ǻ���������˵��
��write and read,�����ҵ�������Ǵ�һ���ܸߵĽǶ�������data����������������Ҫ��������һ������write ����һ
������read����
	�������ﻹ�ᵽ��һ�����飺only*��Ҳ����������˵��ֻ�����class���ǿ��Զ�private members����call and
use������ʵ���ϻ�����������һ��������friend ;���ȣ�����Ҫ�˽⵽��һ�������������һ��keyword���������ö���
������variable��Ҳ������function����������class�������Ҷ���һ���ֵ������ǲ�̫��Ϥ�ģ�����ֻ�����⵽���

5��protected
	���keyword������Ч���ǽ���private��public֮��ģ�������subclass��˵���Ӧ��members�ǿ��Ա�call and 
use,���Ƕ���instanceȴ�ǲ������õġ�

6��visibility
	visibility�ĳ��ֲ�����Ϊ��computer������Ϊ�������ܹ����õĽ�������program���������ñ��˸��õ���������
��д�Ĵ��룬Ҳ����˵����Ϊ�������Լ����õ�д��program��
*/

#include <iostream>

class Entity
{
private:
	int X, Y;

public:
	Entity()
	{

	}
};

class Player :public Entity
{

};

int main()
{

	std::cin.get();
}