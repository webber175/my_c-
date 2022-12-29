#include <iostream>
using namespace std;//全局作用域为std
//c和c++最大的区别就是一个是面向过程，一个是面向过程
//面向过程：主要思想是怎么实现，需要什么步骤
//面向对象：主要思想是谁能实现，怎么调用它
//类是一个抽象的概念，意思为一个数据类型的蓝图，对象是类的实例，类里可以有很多对象和方法，方法是对象的实现，一个类可以给多个对象使用
//类的关键字是class，如下例子（注:类不能在main里面定义）
class one//one是类名
{
	//一个类里可以有三个区域，分别为公共（public），私有（private），保护（protected），定义了对内的访问权限
	//在类的内部，可以互相调用其他区域的代码，访问权限只是对外限制
public://公共区
	int a=0;
	int b=0;
	int add(void);
	void count(int A, int B);
};
int one::add(void)//：：是作用域标志符，含义为告诉编译器，该函数（或者该数据）在哪个作用域里
{
	return a + b;
}
void one::count(int A, int B)
{
	a = A;
	b = B;
}
int main(void)
{
	int uu;
	one bb;//定义了bb是类one的对象
	bb.a = 2;//使用对象访问(公共)内容时，和结构体方式一致
	bb.b = 2;
	cout << bb.a <<bb.b<< endl;
	bb.count(4, 5);
	uu = bb.add();
	cout << uu << endl;//由此见得在类里函数和数据之间可以互相沟通
	return 0;
}