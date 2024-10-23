#include <iostream>
using namespace std;
const int len = 3;

int main()
{
	//声明数组存储数据
	int arr[len];
	//获取用户输入
	cout << "请连续输入三个整数，我会将他们排序" << endl;
	cin >> arr[0] >> arr[1] >> arr[2];

	
	int index;
	//冒泡排序
	for (int i = 0; i < len; ++i) {
		index = i;

		for (int ii = i; ii < len; ++ii) {
			if (arr[ii] < arr[index])
				index = ii;
		}
		//交换
		int temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;

	}

	//输出结果
	for (int i = 0; i < len; ++i) {
		cout << arr[i] << " ";
	}


	return 0;
}

