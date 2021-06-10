/*
1)thinking and inference
	在这个视频中将会讲解的是How Strings Work in C++ (and how to use them)。首先我有一些问题：
	1、什么是string？
	2、string在计算机中是如何进行表示的？
	3、如何对string进行操作？
	4、还有一个最为重要的点就是我们为什么会用到string？（到目前位置我好像还没有这方面的需求）
	5、strings的出现能够为我们解决什么样的问题？

	那么什么是string呢？我不应该做的一件事情就是Google这个名词是什么含义，相反我应该试着去理解这个string，即
使我还没有完全的理解这个名词的含义。
	那么，我先做一个类比，这应该是一种数据类型，类似于int、double、and so on,那么随之而来的问题就是它在memory
中是如何进行存储的？因为我知道int在memory中存储的方式是以4 bytes进行存储的，也就是32 bits，那么不论是哪一种类
型，其本质都是一系列的bits组合而成的（这个观点是来自于最近正在学习的一本书，说这个并不是简单的复述，而是一种思考）
因此，我觉得string的存储形式必然是一系列的bits，问题就是多少个bytes?因为如果我们define一个int的变量，那么它将
会在内存中的某个位置以4 bytes的形式存在（这里就不谈论arrays了，我想起这个的原因就是数据集成的表示，采用的就是
数组的形式）
	以我现在的观点来看所谓的strings指的就是一系列的characters,那么这些characters是存在大小的，这里我所说的大小
是针对于bytes而言的，也就是不能简单的以一个常数的大小进行定义，相反我现在认为string更像是一种array of char，从
这个角度来看是比较合理的，一个char所占用的内存大小是1 byte，那么这种类型的array则会变得更加的方便和灵活。
	以上就是我现阶段对string的理解，当然这只是我个人的看法，但是我也不太清楚这种看法是否是正确的，不过从推断的
角度来看，这种想法是正确的。
	假设string是由一系列的characters组成的，那么从english language的角度来看，我们有ASCII一一对应的关系，那么
我们就可以实现string，因此我的想法就是如何实现这种类型的数据类型，到目前为止，我想要知道或者是想要解决的一个问题
就是如何知道一个被创建的array of char的大小，因为作为user的我，在没有创建的前提下，compiler是不知道具体的大小，
那么怎么实现任意大小的string类型的目的呢？
	如果我们想要使用SDL中的string，也就相当于说我们想用SDL中已经实现好的string，那么我们要做的就是include这个
class,然后才能进行使用，这里我说class的原因是想说这是一种class的实现方式而已。


*/

#include <string>
#include <iostream>
int main()
{
	std::string test = "I am a student!";
	std::cout << test << std::endl;
	std::cout << test[16] << std::endl;
}