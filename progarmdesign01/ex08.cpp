#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void showResult(int times, const int users_choice, const int answer);

int main()
{
	srand(time(NULL));
	int guesstimes = 0, users_choice;
	int YoN = 0;
	while (1)
	{
		guesstimes = 0;
		users_choice = 0;
		int real_answer = (rand() % 200) + 1;
		cout << "���ԣ��������ɵ�����Ϊ" << real_answer << endl;
		cout << "��������һ��1��200�����֣�����Բ�ʮ�Σ�ÿ���һ��������˻���С��" << endl;
		for (int i = 0; i < 10; ++i)
		{
			//��ȡ�û�����
			cout << "��������µ�����" << endl;
			cin >> users_choice;

			++guesstimes;
			if (real_answer == users_choice)
			{
				cout << "���ǶԵ�" << endl;
				break;
			}
			else if (real_answer < users_choice)
			{
				cout << "����" << endl;
			}
			else if (real_answer > users_choice)
			{
				cout << "��С��" << endl;
			}
			else cout << "�����ʲô��" << endl;
		}
		showResult(guesstimes, users_choice, real_answer);
		cin >> YoN;
		if (!YoN) break;
		cout << "��Ϸ����" << endl;
	}
	cout << "��Ϸ�Ѿ�����" << endl;
	return 0;
}



//����²���
void showResult(int times, const int choice, const int answer)
{
	cout << "��һ������" << times << "��" << endl;
	if (choice != answer) cout << "��δ�ܲ¶ԣ����մ���" << answer << endl;
	cout << "�������Ƿ���Ҫ������Ϸ�������˳�������0��������������������ַ�" << endl;
}
