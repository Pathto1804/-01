//ˮ�ɻ���
//��дһ��������100��999֮���ˮ�ɻ�������νˮ�ɻ�������ָһ��3λ��������ÿλ���ֵ�����֮�͵��ڸ�����
//���磬��Ϊ153 = 13 + 53 + 33������153Ϊˮ�ɻ�����
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

