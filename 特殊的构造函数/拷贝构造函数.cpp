#include <iostream>
//����˼�⣬�������캯�������������֮ǰ������Ķ���������ʼ��һ���µĶ���
//Ҳ���Կ�����ͨ���������뺯��
//���߸��Ƶ�ǰ����Ȼ��return������
//���һ��������ָ��������ҷ����˶�̬�ڴ棬��ô������Ҫ��һ����������
class one 
{
	int* p;
public:
	void pr(void);
	one(const one& dd);
	one(int x);
	~one(void);
};
one::one(int x)//���캯��
{
	std::cout << "�ѿ�ʼ" << std::endl;
	p = new int;//���䶯̬�ڴ�
	*p = x;
}
one::one(const one& dd)//���ƹ��캯�������ĺ͹��캯�����񣬵��Ǹ��ƹ��캯���Ĵ���һ��������
{
	std::cout << "�Ѹ���" << std::endl;
	p = new int;//��p������һ�鶯̬�ڴ�
	*p = *dd.p;//������ڴ�ĵ�ַ���¸������p����ɸ���
}
one::~one(void)//��������
{
	std::cout << "�ѽ���" << std::endl;
	delete p;//�ͷŶ�̬�ڴ�
}
void one:: pr(void)
{
	std::cout << *p << std::endl;
}
int main(void)
{
	one ff(20);
	one rr = ff;//������ʹ���˸��ƹ��캯��������Ҳ����дΪone rr��ff����
	ff.pr();//�ɹ�����
	rr.pr();
	return 0;
}