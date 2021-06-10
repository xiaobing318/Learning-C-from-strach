#include "video21.h"
#include <iostream>

static int Multiple(int a, int b)
{
	return a * b;
}

void Print_attribution(int a,int b)
{
	int result = Multiple(a, b);
	std::cout << "the result is " << result << std::endl;
}