//��дһ�������������[100,900]���ܱ�5�����������ܱ�3����������������
//���������֮����ÿո������ÿ����ʾ10�����ݣ������������֮�䲻���п���
//��Ҫ��ֱ����while��䡢do while��䡢for���ʵ�֣�

#include <iostream>
using namespace std;
const int len = 900;
int main()
{
	int count = 1;
	for (int num = 100; num <= len; ++num)
	{
		if (num % 5 == 0 && num % 3 != 0)
		{
			cout << num << " ";
			if (count++ % 10 == 0 ) cout << endl;
		}

	}
	return 0;
}