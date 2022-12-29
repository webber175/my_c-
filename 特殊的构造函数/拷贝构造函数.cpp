#include <iostream>
//故名思意，拷贝构造函数就是用这个类之前定义过的对象再来初始化一个新的对象
//也可以拷贝后通过参数传入函数
//或者复制当前对象然后return出函数
//如果一个类里有指针变量并且分配了动态内存，那么它必须要有一个拷贝函数
class one 
{
	int* p;
public:
	void pr(void);
	one(const one& dd);
	one(int x);
	~one(void);
};
one::one(int x)//构造函数
{
	std::cout << "已开始" << std::endl;
	p = new int;//分配动态内存
	*p = x;
}
one::one(const one& dd)//复制构造函数，长的和构造函数很像，但是复制构造函数的传参一定是引用
{
	std::cout << "已复制" << std::endl;
	p = new int;//给p再申请一块动态内存
	*p = *dd.p;//把这块内存的地址给新复制里的p，完成复制
}
one::~one(void)//析构函数
{
	std::cout << "已结束" << std::endl;
	delete p;//释放动态内存
}
void one:: pr(void)
{
	std::cout << *p << std::endl;
}
int main(void)
{
	one ff(20);
	one rr = ff;//在这里使用了复制构造函数，这里也可以写为one rr（ff）；
	ff.pr();//成功复制
	rr.pr();
	return 0;
}