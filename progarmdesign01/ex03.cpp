#include <iostream>
using namespace std;
const int len = 3;

int main()
{
	//��������洢����
	int arr[len];
	//��ȡ�û�����
	cout << "���������������������һὫ��������" << endl;
	cin >> arr[0] >> arr[1] >> arr[2];

	
	int index;
	//ð������
	for (int i = 0; i < len; ++i) {
		index = i;

		for (int ii = i; ii < len; ++ii) {
			if (arr[ii] < arr[index])
				index = ii;
		}
		//����
		int temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;

	}

	//������
	for (int i = 0; i < len; ++i) {
		cout << arr[i] << " ";
	}


	return 0;
}

