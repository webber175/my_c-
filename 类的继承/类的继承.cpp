#include <iostream>
//�����Ȩ��
//����ļ̳л�̳и�����������ݣ����Ǽ̳����ݵķ���Ȩ�޻ᷢ���ı�
//��3�ּ̳�
//public���������̳У��̳к��Ȩ�޲��䣬�ֱ�Ϊ��������˽������������
//private��˽�У��̳У��̳к�ȫ��Ȩ�ޱ�Ϊ˽�У��ֱ�Ϊ˽������˽������˽����
//protected���������̳У��̳к󹫹�����Ϊ���������ֱ�Ϊ��������˽������������
//���������ͼ̳е�ʱ��Ĭ�Ͻ���˽�м̳�
class father//����
{
public:
	friend int oao(father qq);//��Ԫ�����Ķ��壬�ؼ�����friend
	int a = 1;
	int add(void)
	{
		return b;
	}
private://ע�⣬������Ȼ�̳������ݣ����ǲ������������ú������������˽������ֻ���ø���ĺ�������������˽����
	int b = 2;
protected:
	int c = 3;
};
class son1:public father//�����̳�
{
public:
	int sona(void)
	{
		return c;
	}
};
class son2 :private father//˽�м̳�
{

};
class son3 :protected father//�����̳�
{

};
int oao(father qq)//��Ԫ���������Է������е��κ����ݣ�����������ָ������
{
	return qq.b;
}
int main(void)
{
	father ff;
	son1 aa;
	son2 bb;
	son3 cc;
	std::cout << "�·�Ϊ�����̳�" << std::endl;
	std::cout <<"����������:"<<aa.a << std::endl;//�����̳к󣬿���ֱ�Ӷ�ȡ�̳и���Ĺ���������
	std::cout << "�ú�����ȡ��˽��������:" << aa.add() << std::endl;//�ø��ຯ�����ø���˽��������
	std::cout << "�����ຯ����ȡ�ı���������:" << aa.sona() << std::endl;//ֻ�������ຯ�����ø��ౣ��������
	std::cout << "\n" << std::endl;
	std::cout << "�·�Ϊ˽�м̳У���˽�м̳е������ԣ��ⲿ�����ֻ��ͨ����Ԫ��������Ԫ��" << std::endl;
	std::cout << "����Ԫ������ȡ��˽��������:" << oao(ff) << std::endl;
	std::cout << "\n" << std::endl;
	return 0;
}