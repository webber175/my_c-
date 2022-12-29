#include <iostream>
//异常，代表程序不正常运行，可能会造成损害
//c++有较为完善的处理异常方案
//使用throw在发生异常时抛出一个异常信号
//使用catch捕获抛出的异常信息，并进行异常的对应处理
//使用try来保护可能受异常影响的代码
int count(int x, int y)
{
	if (y == 0)//被除数不能为0
	{
		throw 100;//抛出一个100的异常信号
	}
	return (x/y);
}
int main(void)
{
	int x=5;
	int y=0;
	int z=0;
	try//保护代码
	{
		z = count(x, y);
		std::cout << z << std::endl;
	}catch (int g){//捕获throw抛出的异常，throw抛出的是100，所以用int来检测
		std::cerr <<"出现异常!异常编码为：" << g << std::endl;
	}
	catch (char f) {//可以使用多个catch
		std::cerr << f<< std::endl;
	}
	return 0;
}