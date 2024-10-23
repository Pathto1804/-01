#include <iostream>
using namespace std;

int main() {
    double price = 0.0;
    cout << "请输入购买商品的总价: ";
    cin >> price;

    //定义等级变量以确定用户的满减区间
    int level = -1;
    //确定用户满减区间
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
        cout << "您的商品未达到满减额度";
    }
    else
    {
        cout << "错误的输入";
        return 0;
    }

    //执行switch语句
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

    cout << "打折后的总额为: " << price << endl;

    return 0;
}