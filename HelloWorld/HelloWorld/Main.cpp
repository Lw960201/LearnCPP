//任何以#开头的都是预处理指令
//当编译器收到一个源文件时它做的第一件事就是预处理你所有的预处理指令
//之所以叫预处理指令，是因为它们发生在真正的编译之前
//include所做的就是找到一个文件，该文件里的所有内容会被复制粘贴到目前这个文件里
//include的这些文件一般被称为头文件
//之所以之所以include这个iostream是因为我们要用cout和cin这两个函数，
#include <iostream>
void Log(const char* message);
//void Log(const char* );
//void Log(const char* message)
//{
//	std::cout << message << std::endl;
//}

//main函数被称为入口点
//main函数的返回值是int，而我们并没有返回一个整数：main函数是个例外，你不需要从主函数返回任何类型的值
//如果你不返回任何值，它会返回0，这只适用于main函数
int main()
{
	// << 是被重载的符号，把它想象成一个函数，看起来像是运算符，实际上，运算符就是函数
	//std::cout.print("Hello World!").print(std::endl);//这句和下面那句同理
	//所以我们做的就是把Hello World字符串传入这个cout，cout就是把它打印在控制台里
	//endl就是告诉控制台前进到另一行
	//std::cout << "Hello World!" << std::endl;
	Log("Hello World!");
	//cin.get()函数等待我们输入回车，然后接着执行下一行代码
	//由于这里下一行什么都没有，也就说会返回0，说明程序成功运行了
	std::cin.get();
}

//首先是预处理指令，会在编译文件前被评估，这里的意思就是把iostream文件里的内容拷贝到这个文件里
//当我们预处理指令被评估后，我们的文件会被编译，编译器把我们的C++代码转化为实际的机器码
//有几个很重要的设置来决定这一切是如何发生的：