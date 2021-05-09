/*
1、cherno说visibility对于program是没有什么影响的，具体来说就是对其性能方面是没有什么影响的。
	这一点我是没有想到的或者说是没有进行过思考的，我没有在这方面进行思考，也就是说目前而言我对这一部分的内
容还没有进行研究，我想如果想要写出一个更好的program，那么这方面的内容一定是要进行考虑的。

2、如果我们在一个class中没有申明或者说是说明visibility的类型，并不是说没有这方面的内容，实际上是存在的，也
就是默认的设置（对于visibility）

3、让我想起的一件事情就是struct and class两者之间的区别，但是最为重要的就是我们什么时候使用它们？cherno他
的习惯就是如果遇到数据的管理的时候，他常常会采用struct的形式，其他的情况则是class,当然了，这只是他自己的习
惯，我们没有必要和他一样，但是了解这一部分的知识也是非常重要的。

4、private
	代表的含义就是只有这个特定的class才可以进行对data的write and read,让我感兴趣的是后面这两个说法
即write and read,（以我的理解就是从一个很高的角度来看，data就是由两个事情需要我们做，一个就是write 另外一
个就是read），
	他在这里还提到了一件事情：only*（也就是上述所说的只有这个class才是可以对private members进行call and
use），但实际上还存在着另外一个东西：friend ;首先，我们要了解到的一件事情就是这是一个keyword，它的作用对象
可以是variable，也可以是function，还可以是class，但是我对这一部分的内容是不太熟悉的，所以只能理解到这里。

5、protected
	这个keyword的作用效果是介于private和public之间的，对于其subclass来说相对应的members是可以被call and 
use,但是对于instance却是不可以用的。

6、visibility
	visibility的出现并不是为了computer，而是为了我们能够更好的进行理解program，或者是让别人更好的理解我们
所写的代码，也就是说这是为了我们自己更好的写出program。
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