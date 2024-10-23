//水仙花数
//编写一个程序，求100～999之间的水仙花数。所谓水仙花数，是指一个3位数，它的每位数字的立方之和等于该数。
//例如，因为153 = 13 + 53 + 33，所以153为水仙花数。
#include <iostream>
using namespace std;
inline int threetimes(int a){return a * a * a;}
inline int construct(int a, int b, int c){return 100 * a + 10 * b + c;}

int main()
{
	for (int a = 1; a <= 9; ++a)
	{
		for (int b = 0; b <= 9; ++b)
		{
			for(int c = 0;c <= 9 ;++c)
				if (threetimes(a) + threetimes(b) + threetimes(c) == construct(a, b, c) )cout << construct(a, b, c) << " ";
		}
	}
}

