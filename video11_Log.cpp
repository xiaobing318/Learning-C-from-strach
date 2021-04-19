#include <iostream>
//#include "video11_Log.h"
/*
	我觉得这个declaration是不必include的，因为declaration的作用就只是在一个file中说明这个
函数是存在的，那么在这个methods的实现中，那么就没有必要包含这个declaration了。
*/
void Log(const char* message)
{
	std::cout << message << std::endl;
}
