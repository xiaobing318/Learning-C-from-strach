/*
1)trying
	今天将会讲解的事情是关于static keyword in class or struct，那么在我的脑海中将会产生一些问
题：
	1、static keyword在一个class中将会起到什么样的作用？或者换句话说我们为什么会在一个class中
	使用static，也就是static keyword将会为我们提供什么。
	2、static的使用将会遵循什么样的pricinples?
	3、在一个class中可以被使用的方面都会有哪些？

2）thinking
	一个class将会是由一些data members 和一些methods组成的,现在我能更好地理解this指针的作用了，
某种程度上简化了代码，只不过这个机制的实现是在class种实现的，还有很多的用处我还没有发现，还需要
继续找到相应的答案。
	那么这些members是怎么被存储起来的，对于一个class来说，每一个object将会有一份member data的
copy，而function或者叫做是method在众多objects只会有一个copy，这便是class的存储形式。
	与此同时，我还注意到的一件事情就是copy似乎在程序中是非常重要的，但是目前为止我还不知道是为什
么，我觉得随着我的问题更加深入的时候，这些疑惑将会得到解答。

	那么在一个class中我们为什么会需要static？我们可能会有这样的需求：某些变量或者是functions，
我们想让它们和class本身是关联的，而不会与class的每个object关联，为什么会有这样的需求，因为在某
些情况下，这些objects的data members中将会有一些共同的成员，那么在这种情况下，我们想要做的就是
把这个共同的部分提出来，也就是只有一个copy，而且这个copy存在于class，那么这么做的原因就是为了节
省内存空间，因为如果不这样做的话，那么class的每一个objects将会有一个对应的copy，这时候就会造成
内存空间的浪费，这便是我们的目的。

	这里产生了一个疑惑，为什么我们会需要一个 static function,这是非常奇怪的，因为一个class中
function只会在内存中被copy一次，不像是data members，那么我们为什么会需要static function？如果
说一个计算机中最为重要的东西就是memory，那么我们static function将能解释同一点点，但还是很牵强。


	在这里我想说一下我对static in class中的理解：首先，在一个class中，static可以作用的对象有
data attribution和methods，如果有成员被加上了static，那么就代表这个这个成员将不会和这个class的
objects相挂钩，那么相当于是一个class中的global variable。
	再者对于declaration和definition两个概念，我们必须要搞清楚，这是理解程序的重要的一个角度。
*/
#include <iostream>

class Multiple
{
private:
	int m_value_1;
	int m_value_2;

public:
	int multiple()
	{
		return m_value_1 * m_value_2;
	}

	Multiple(int p_value_1, int p_value_2)
	{
		m_value_1 = p_value_1;
		m_value_2 = p_value_2;
	}
};

int Multiple_f(int* p_value_1, int* p_value_2)
{
	return (*p_value_1) * (*p_value_2);
}

int main()
{

	int Int_Array_1[2] = { 1,2 };
	int Int_Array_2[2] = { 2,2 };
	int Int_Array_3[2] = { 3,4 };
	int* ptr = Int_Array_3;
	std::cout << Multiple_f(ptr,ptr+1) << std::endl;
	std::cout << "=================" << std::endl;
	Multiple obj_1(1,2);
	Multiple obj_2(2,2);
	Multiple obj_3(3,4);
	std::cout << obj_1.multiple() << std::endl;
}