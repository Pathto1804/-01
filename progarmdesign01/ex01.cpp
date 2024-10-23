#include <iostream>
using namespace std;

int main()
{
	//声明价格参数并获取用户输入的购物总价
	double price = 0.0;
	cout << "请输入购买商品的总价: ";
	cin >> price;

	//执行if判断语句
	if (price >= 1000)
	{
		cout << "您的满减额度为七五折";
		price *= 0.75;
	}
	else if(price >= 800 && price <1000)
	{
		cout << "您的满减额度为八五折";
		price *= 0.85;
	}
	else if (price >= 600 && price < 800)
	{
		cout << "您的满减额度为九折";
		price *= 0.9;
	}
	else if (price >= 300 && price < 600)
	{
		cout << "您的满减额度为九五折";
		price *= 0.95;
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

	//输出打折后的结果
	cout << endl <<"您最终的应付款为" << price << "元";

	return 0;
}