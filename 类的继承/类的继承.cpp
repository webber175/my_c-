#include <iostream>
//接类的权限
//子类的继承会继承父类的所有内容，但是继承内容的访问权限会发生改变
//有3种继承
//public（公共）继承，继承后的权限不变，分别为公共区，私有区，保护区
//private（私有）继承，继承后全部权限变为私有，分别为私有区，私有区，私有区
//protected（保护）继承，继承后公共区变为保护区，分别为保护区，私有区，保护区
//不声明类型继承的时候默认进行私有继承
class father//父类
{
public:
	friend int oao(father qq);//友元函数的定义，关键字是friend
	int a = 1;
	int add(void)
	{
		return b;
	}
private://注意，子类虽然继承了数据，但是不能在子类中用函数操作父类的私有区，只能用父类的函数来操作父类私有区
	int b = 2;
protected:
	int c = 3;
};
class son1:public father//公共继承
{
public:
	int sona(void)
	{
		return c;
	}
};
class son2 :private father//私有继承
{

};
class son3 :protected father//保护继承
{

};
int oao(father qq)//友元函数，可以访问类中的任何数据，函数定义在指定类里
{
	return qq.b;
}
int main(void)
{
	father ff;
	son1 aa;
	son2 bb;
	son3 cc;
	std::cout << "下方为公共继承" << std::endl;
	std::cout <<"公共区数据:"<<aa.a << std::endl;//公共继承后，可以直接读取继承父类的公共区数据
	std::cout << "用函数获取的私有区数据:" << aa.add() << std::endl;//用父类函数调用父类私有区数据
	std::cout << "用子类函数获取的保护区数据:" << aa.sona() << std::endl;//只能用子类函数调用父类保护区数据
	std::cout << "\n" << std::endl;
	std::cout << "下方为私有继承，因私有继承的特殊性，外部想访问只能通过友元函数或友元类" << std::endl;
	std::cout << "用友元函数获取的私有区数据:" << oao(ff) << std::endl;
	std::cout << "\n" << std::endl;
	return 0;
}