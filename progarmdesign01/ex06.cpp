//编写一个程序，计算一个正整数是几位数，并逆序输出各位数字，
// 例如1234是一个4位数，逆序输出结果为4321
// （提示：假设有正整数x，x%10可以求x的个位数，x=x/10可以使得x变成少一位数字的整数）。

#include <iostream>
using namespace std;
const int len = 1000;
int main()
{
	unsigned long num = 0;
	cout << "请输入一个数字 : ";
	cin >> num;

	int dig = 0;//储存位数
	int arr[len] = {};//存储各个位数以及其对应的位数

	while (num > 0)
	{
		arr[dig++] = num % 10;//个位数写入数组
		num /= 10;//退位
	}

	cout << "\n这个数字有 " << dig << " 位" << endl;
	cout << "并且逆序为 ";
	int n = 0;//从个位数开始输出
	while (n < dig)
		cout << arr[n++];
	
	return 0;

}