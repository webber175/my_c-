#include <iostream>
#include <fstream>
using namespace std;
int main(void)
{
	int data;
	int buffer;
	//���������ͣ��ֱ�Ϊifstream����ȡ��ofstream��д�룩fstream����д��
	//ʹ�����ڲ��ĺ������ɶ��ļ����в���
	ofstream dd;
	dd.open("E:\hello,word.txt");
	//���ļ�����ǰ����Ҫ�ȴ��ļ�����д�ļ���ַ���ļ������󷽸��Ŵ�ģʽ,Ҳ����Ĭ��
	//ios����out��д��ģʽ��
	//ios����in����ȡģʽ��
	//ios����trunc�����ļ���ʱ��������ļ�����ô�½�һ���ļ��滻������
	//����ʹ�ö��ģʽ����("�ļ���Ϣ", ios::out|ios����in);���Ƕ�дģʽ
	cout << "������" << endl;
	cin >> data;
	dd<< data << endl;//д��
	dd.close();//�رմ򿪵��ļ�
	ifstream aa;
	aa.open("E:\hello,word.txt");
	cout << "�ո�д���������" << endl;
	aa >> buffer;//��ȡ
	cout << buffer << endl;
	aa.close();
	return 0;
}