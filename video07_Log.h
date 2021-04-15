#pragma once

/*
	这里的static是非常重要的，如果我们没有写这个static的话，那么在link的时候将会出现错误，
问题就是当linker link之后形成一个translation unit 的时候，那么就会出现多个相同的文件，那
么这就是我们所要担心的问题。
*/
static void Log(const char* message)
{
	std::cout << message << std::endl;
}
