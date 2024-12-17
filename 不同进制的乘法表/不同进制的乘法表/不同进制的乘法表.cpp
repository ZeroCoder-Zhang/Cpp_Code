#include <iostream>
#include <algorithm>//reverseҪ��
using namespace std;

int n;

char trans(int a) 
{
	if (a% n < 10)
	{
		return a % n + '0';
	}
	return a % n - 10 + 'A';//����10ʱ�ô�д��ĸ
}

string ten_to_k(int x) 
{	//10����תk����
	string a;//�ַ����洢
	for (int i = 0; x > 0; i++)
	{
		a += trans(x);
		x /= n;//�̳���
	}
	reverse(a.begin(), a.end());//��ת�ַ�������Ϊ�Ǵ�������
	return a;
}

int main() 
{
	cin >> n;
	for (int i = 1; i < n; i++, putchar(10))
	{
		for (int j = 1; j <= i; j++)
		{
			cout << ten_to_k(i) << '*' << ten_to_k(j) << '=' << ten_to_k(i * j) << ' ';//ѭ�����
		}
	}
	return 0;
}