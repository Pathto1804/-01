//��дһ�����򣬼���һ���������Ǽ�λ���������������λ���֣�
// ����1234��һ��4λ��������������Ϊ4321
// ����ʾ��������������x��x%10������x�ĸ�λ����x=x/10����ʹ��x�����һλ���ֵ���������

#include <iostream>
using namespace std;
const int len = 1000;
int main()
{
	unsigned long num = 0;
	cout << "������һ������ : ";
	cin >> num;

	int dig = 0;//����λ��
	int arr[len] = {};//�洢����λ���Լ����Ӧ��λ��

	while (num > 0)
	{
		arr[dig++] = num % 10;//��λ��д������
		num /= 10;//��λ
	}

	cout << "\n��������� " << dig << " λ" << endl;
	cout << "��������Ϊ ";
	int n = 0;//�Ӹ�λ����ʼ���
	while (n < dig)
		cout << arr[n++];
	
	return 0;

}