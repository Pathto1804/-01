//��дһ�������������[100,900]���ܱ�5�����������ܱ�3����������������
//���������֮����ÿո������ÿ����ʾ10�����ݣ������������֮�䲻���п���
//��Ҫ��ֱ����while��䡢do while��䡢for���ʵ�֣�

#include <iostream>
using namespace std;

int main()
{
	int num = 100;
	int count = 0;
	while (num <= 900) {

		if (0 == (num % 5) && 0 != (num % 3))
		{
			cout << num << " ";
			if (0 == ((++count) % 10))
				cout << endl;
		}
		++num;

	}
	return 0;
}