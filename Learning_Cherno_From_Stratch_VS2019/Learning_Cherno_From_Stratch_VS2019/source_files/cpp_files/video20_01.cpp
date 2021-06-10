
class Log
{
public:
	const int WarningLevel = 0;
	const int ErrorLevel = 1;
	const int InfLevel = 2;
private:
	int m_LogLevel = 0;

public:
	void SetLevel(int l_value)
	{
		m_LogLevel = l_value;
	}
};

int main()
{
	Log log;
	log.SetLevel(log.WarningLevel);
}


/*
1)�ܽ�
	�������Ƶ�У�cherno��Ҫ������ôдһ��class��д�������ǹ���һ��LOG class��������˼�����class
���Ա�úܸ��ӣ�Ҳ�ǿ��Ա�ü�һ�㣬�������ѡ����������ԭ��

	1�����ǿ�����class��д�������Ȩ�ޣ�private��public��protected����Ϊ������data member��
	methods member
	2��Ϊ������һ�����е�data member��local variable�������������ڱ���ǰ�����һ��m������member
	data��
	3�������ǲ�֪��һ�����о���Ҫ����Щdata member������methods��ʱ����ô���Ǿ���ʹ�ã�Ҳ����
	�������������б�д����һ���Ƿǳ�����Ҫ��
*/