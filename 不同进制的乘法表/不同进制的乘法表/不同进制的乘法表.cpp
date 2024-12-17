#include <iostream>
#include <algorithm>//reverse要用
using namespace std;

int n;

char trans(int a) 
{
	if (a% n < 10)
	{
		return a % n + '0';
	}
	return a % n - 10 + 'A';//大于10时用大写字母
}

string ten_to_k(int x) 
{	//10进制转k进制
	string a;//字符串存储
	for (int i = 0; x > 0; i++)
	{
		a += trans(x);
		x /= n;//短除法
	}
	reverse(a.begin(), a.end());//翻转字符串，因为是从下往上
	return a;
}

int main() 
{
	cin >> n;
	for (int i = 1; i < n; i++, putchar(10))
	{
		for (int j = 1; j <= i; j++)
		{
			cout << ten_to_k(i) << '*' << ten_to_k(j) << '=' << ten_to_k(i * j) << ' ';//循环输出
		}
	}
	return 0;
}