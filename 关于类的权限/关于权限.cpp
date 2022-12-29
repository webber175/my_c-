#include <iostream>
//在类里，私有范围里的内容外部无法使用和读取，只有类内部和友元函数才能访问
// 一般将变量或数据放在私有区域，函数放在公共区域，这样使用函数也可以调用内部数据，但是无法直接篡改数据，增加了封装性
//当类里的的数据没有被划分区域时，默认为私有，如下例的a
class one
{
	int a=99;
protected:
	int b=2;
};
//保护区域的内容，在外围只有子类里才可以访问
class two :one//two是one的子类，子类会继承父类的内容（尽管不显示出来）
{
public:
	int add(int c);
};
int two::add(int c)//只有在子类的函数中才可以调取父类里保护区域的内容
{
	return b + c;
}
int main(void)
{
	two uu;
	std::cout<<uu.add(5)<<std::endl;//输出7
	return 0;
}