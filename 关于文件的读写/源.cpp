#include <iostream>
#include <fstream>
using namespace std;
int main(void)
{
	int data;
	int buffer;
	//新数据类型，分别为ifstream（读取）ofstream（写入）fstream（读写）
	//使用其内部的函数即可对文件进行操作
	ofstream dd;
	dd.open("E:\hello,word.txt");
	//对文件操作前都需要先打开文件，先写文件地址和文件名，后方跟着打开模式,也可以默认
	//ios：：out（写入模式）
	//ios：：in（读取模式）
	//ios：：trunc（打开文件的时候如果有文件，那么新建一个文件替换掉它）
	//可以使用多个模式，如("文件信息", ios::out|ios：：in);便是读写模式
	cout << "请输入" << endl;
	cin >> data;
	dd<< data << endl;//写入
	dd.close();//关闭打开的文件
	ifstream aa;
	aa.open("E:\hello,word.txt");
	cout << "刚刚写入的数据是" << endl;
	aa >> buffer;//读取
	cout << buffer << endl;
	aa.close();
	return 0;
}