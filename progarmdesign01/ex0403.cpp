//编写一个程序，输出区间[100,900]中能被5整除、但不能被3整除的所有整数，
//输出的整数之间采用空格隔开，每行显示10个数据，输出的数据行之间不能有空行
//（要求分别采用while语句、do while语句、for语句实现）

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