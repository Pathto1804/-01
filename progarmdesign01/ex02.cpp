#include <iostream>
using namespace std;

int main() {
    double price = 0.0;
    cout << "�����빺����Ʒ���ܼ�: ";
    cin >> price;

    //����ȼ�������ȷ���û�����������
    int level = -1;
    //ȷ���û���������
    if (price >= 1000)
    {
        level = 0;
    }
    else if (price >= 800)
    {
        level = 1;
    }
    else if (price >= 600)
    {
        level = 2;
    }
    else if (price >= 300)
    {
        level = 3;
    }
    else if (price < 300 && price >= 0)
    {
        cout << "������Ʒδ�ﵽ�������";
    }
    else
    {
        cout << "���������";
        return 0;
    }

    //ִ��switch���
    switch (level) {
    case 0:
        price *= 0.75;
        break;
    case 1:
        price *= 0.8;
        break;
    case 2:
        price *= 0.9;
        break;
    case 3:
        price *= 0.95;
        break;
    default:
        break;
    }

    cout << "���ۺ���ܶ�Ϊ: " << price << endl;

    return 0;
}