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
		cout << "调试：本次生成的数字为" << real_answer << endl;
		cout << "程序生成一个1到200的数字，你可以猜十次，每次我会告诉你大了还是小了" << endl;
		for (int i = 0; i < 10; ++i)
		{
			//获取用户输入
			cout << "请输入你猜的数字" << endl;
			cin >> users_choice;

			++guesstimes;
			if (real_answer == users_choice)
			{
				cout << "你是对的" << endl;
				break;
			}
			else if (real_answer < users_choice)
			{
				cout << "大了" << endl;
			}
			else if (real_answer > users_choice)
			{
				cout << "猜小了" << endl;
			}
			else cout << "你输的什么鬼" << endl;
		}
		showResult(guesstimes, users_choice, real_answer);
		cin >> YoN;
		if (!YoN) break;
		cout << "游戏继续" << endl;
	}
	cout << "游戏已经结束" << endl;
	return 0;
}



//输出猜测结果
void showResult(int times, const int choice, const int answer)
{
	cout << "您一共猜了" << times << "次" << endl;
	if (choice != answer) cout << "您未能猜对，最终答案是" << answer << endl;
	cout << "请问您是否想要继续游戏，若想退出请输入0，若想继续请输入任意字符" << endl;
}
