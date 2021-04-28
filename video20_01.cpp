
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
1)总结
	着这个视频中，cherno主要讲了怎么写一个class，写的内容是关于一个LOG class，他的意思是这个class
可以变得很复杂，也是可以变得简单一点，这便是他选择这个主题的原因。

	1、我们可以在class中写多个访问权限（private、public、protected），为了区分data member和
	methods member
	2、为了区分一个类中的data member和local variable，其做法就是在变量前面加上一个m，代表member
	data。
	3、当我们不知道一个类中具体要有哪些data member或者是methods的时候，那么我们就先使用，也就是
	根据需求来进行编写，这一点是非常的重要。
*/