#include <iostream>
//�쳣����������������У����ܻ������
//c++�н�Ϊ���ƵĴ����쳣����
//ʹ��throw�ڷ����쳣ʱ�׳�һ���쳣�ź�
//ʹ��catch�����׳����쳣��Ϣ���������쳣�Ķ�Ӧ����
//ʹ��try�������������쳣Ӱ��Ĵ���
int count(int x, int y)
{
	if (y == 0)//����������Ϊ0
	{
		throw 100;//�׳�һ��100���쳣�ź�
	}
	return (x/y);
}
int main(void)
{
	int x=5;
	int y=0;
	int z=0;
	try//��������
	{
		z = count(x, y);
		std::cout << z << std::endl;
	}catch (int g){//����throw�׳����쳣��throw�׳�����100��������int�����
		std::cerr <<"�����쳣!�쳣����Ϊ��" << g << std::endl;
	}
	catch (char f) {//����ʹ�ö��catch
		std::cerr << f<< std::endl;
	}
	return 0;
}