#include <iostream>
/*
1)setup
	首先我要说明的一点就是在solution explorer中的那些files并不是真正意义上存在的，只是为了
我们的方便，所以进行的文件的管理，但其实在文件中这些所谓的分类其实是不存在的。

	总的来看就是为了我们的方便，并不是真正意义上的存在。


2)文件组成形式
	首先，我们是想要形成我们自己想要的一种形式：
	1、源文件，也就是我们自己所写的一些文件，但是这种文件还不是那种系统可以直接进行运行的文件
	2、binary文件（常见的形式就是bin），也就是 machine code。
	3、solution 文件

	因此我们想要做的一件事情就是把相关的文件设置成我们想要的一种形式。
*/


int main()
{
	//只是作为程序的一个接口
	std::cout << "Hello World!" << std::endl;
	std::cin.get();
}

/*
1)$(SolutionDir)binary\$(Platform)\$(Configuration)\
	1、$(SolutionDir)代表的是我们的Solution文件的路径
	2、binary代表的是我们想要创建一个名为binary的文件，当然了这个名为binary的文件位于
		SolutionDir,相当于是这个SolutionDir的一个子文件
	3、$(Platform)则是在binary文件下创建对应的Platform文件
	4、$(Configuration)则是在$(Platform)路径下创建一个对应的configuration文件（比如Debug）

2）$(SolutionDir)binary\intermediates\$(Platform)\$(Configuration)\
	1、$(SolutionDir)代表的是我们创建的Solution文件的路径（也就是说我们创建的项目所在的位置）
	2、剩下的都是类似的，只不过不同之处在于这个intermediate（被转化的文件，即binary文件）

3）还需要说明的一点就是:
	第一条是指文件的输出位置，也就是我们所写的代码的位置（source files)
	第二条是指binary文件的相关设置

4）summary
	这个video让我感触最大的就是所有的东西都只是文件，而文件又可以用binary表示。
*/