//��дһ�������������[100,900]���ܱ�5�����������ܱ�3����������������
//���������֮����ÿո������ÿ����ʾ10�����ݣ������������֮�䲻���п���
//��Ҫ��ֱ����while��䡢do while��䡢for���ʵ�֣�

#include <iostream>
using namespace std;

int main()
{
	int num = 100;
	int count = 0;
	do 
	{
		if (0 == (num % 5) && 0 != (num % 3))
		{
			cout << num << " ";
			if (0 == ((++count) % 10))
				cout << endl;
		}
		++num;
	}
	while (num <= 900);
	return 0;
}