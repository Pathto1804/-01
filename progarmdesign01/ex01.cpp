#include <iostream>
using namespace std;

int main()
{
	//�����۸��������ȡ�û�����Ĺ����ܼ�
	double price = 0.0;
	cout << "�����빺����Ʒ���ܼ�: ";
	cin >> price;

	//ִ��if�ж����
	if (price >= 1000)
	{
		cout << "�����������Ϊ������";
		price *= 0.75;
	}
	else if(price >= 800 && price <1000)
	{
		cout << "�����������Ϊ������";
		price *= 0.85;
	}
	else if (price >= 600 && price < 800)
	{
		cout << "�����������Ϊ����";
		price *= 0.9;
	}
	else if (price >= 300 && price < 600)
	{
		cout << "�����������Ϊ������";
		price *= 0.95;
	}
	else if (price < 300 && price >= 0)
	{
		cout << "������Ʒδ�ﵽ�������";
	}
	else 
	{
		cout << "���������";
		return 0;
	}

	//������ۺ�Ľ��
	cout << endl <<"�����յ�Ӧ����Ϊ" << price << "Ԫ";

	return 0;
}