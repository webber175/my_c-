#include <iostream>
class one
{
	int x;
	int y;
public:
	void set(int a, int b);
	void printfset(void);
	one();//构造函数的声明
	~one();//析构函数声明，特点为~号
};
void one::set(int a, int b)
{
	x = a;
	y = b;
}
void one::printfset(void)
{
	std::cout << "面积为" << x * y <<std::endl;
}
//构造函数的定义方式如下，其名字必须和类一致，并且没有返回值，构造函数会在创建类时调用一次，所以常被用为初始化类中数据
one::one(void):y(1)//这个y用了较为简便的方式初始化为1
{
	x = 1;//x使用传统的方式初始化为1
	std::cout << "开始初始化" << std::endl;
}
one::~one(void)//析构函数会在类删除时调用一次，名字必须和类名一致，没有返回值也没有输入值，常用来善出申请的动态内存防止内存泄露
{
	std::cout << "已结束" << std::endl;
}
int main(void)
{
	one aa;
	aa.printfset();
	aa.set(2, 2);
	aa.printfset();
	return 0;
}