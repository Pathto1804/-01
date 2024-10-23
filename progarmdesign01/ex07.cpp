//以下为“* ”号组成的4行三角形图案。编写一个程序，由用户输入图形的行数n，输出n行类似的图案。
//*******
// *****
//  ***
//   *

#include <iostream>
using namespace std;
void draw(int line, int num, int blank = 0);


int main()
{
	//向用户获取行数
	cout << "请输入想要画多少行 : ";
	int num;
	cin >> num;
	//递归调用
	draw(num, 2 * num - 1);

	return 0;
}

void draw(int line, int num, int blank)
{
	if (line <= 0) return;
	//若有空白，输出
	for (int i = 0; i < blank; ++i)
	{
		cout << " ";
	}
	//输出*
	for (int i = 0; i < num; ++i)
	{
		cout << '*';
	}
	cout << endl;
	//递归进入下一层
	draw(line - 1, num - 2, blank + 1);
}