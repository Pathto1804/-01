//����Ϊ��* ������ɵ�4��������ͼ������дһ���������û�����ͼ�ε�����n�����n�����Ƶ�ͼ����
//*******
// *****
//  ***
//   *

#include <iostream>
using namespace std;
void draw(int line, int num, int blank = 0);


int main()
{
	//���û���ȡ����
	cout << "��������Ҫ�������� : ";
	int num;
	cin >> num;
	//�ݹ����
	draw(num, 2 * num - 1);

	return 0;
}

void draw(int line, int num, int blank)
{
	if (line <= 0) return;
	//���пհף����
	for (int i = 0; i < blank; ++i)
	{
		cout << " ";
	}
	//���*
	for (int i = 0; i < num; ++i)
	{
		cout << '*';
	}
	cout << endl;
	//�ݹ������һ��
	draw(line - 1, num - 2, blank + 1);
}