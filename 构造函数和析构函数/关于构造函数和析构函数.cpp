#include <iostream>
class one
{
	int x;
	int y;
public:
	void set(int a, int b);
	void printfset(void);
	one();//���캯��������
	~one();//���������������ص�Ϊ~��
};
void one::set(int a, int b)
{
	x = a;
	y = b;
}
void one::printfset(void)
{
	std::cout << "���Ϊ" << x * y <<std::endl;
}
//���캯���Ķ��巽ʽ���£������ֱ������һ�£�����û�з���ֵ�����캯�����ڴ�����ʱ����һ�Σ����Գ�����Ϊ��ʼ����������
one::one(void):y(1)//���y���˽�Ϊ���ķ�ʽ��ʼ��Ϊ1
{
	x = 1;//xʹ�ô�ͳ�ķ�ʽ��ʼ��Ϊ1
	std::cout << "��ʼ��ʼ��" << std::endl;
}
one::~one(void)//��������������ɾ��ʱ����һ�Σ����ֱ��������һ�£�û�з���ֵҲû������ֵ���������Ƴ�����Ķ�̬�ڴ��ֹ�ڴ�й¶
{
	std::cout << "�ѽ���" << std::endl;
}
int main(void)
{
	one aa;
	aa.printfset();
	aa.set(2, 2);
	aa.printfset();
	return 0;
}