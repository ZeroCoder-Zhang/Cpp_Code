#include <iostream>
using namespace std;

long long a, b, n; //ǧ��Ҫ���ǿ�long long��
int main() 
{
	cin >> a >> b >> n;
	long long s = 5 * a + b * 2; //һ����������
	long long s1 = n % s; //��ʣ����
	long long s2 = n / s; //���˼���
	if (s1 <= 5 * a) 
	{//��������������
		cout << s2 * 7 + (s1 + a - 1) / a;
		//s2*7Ϊ���ܵ�������(s1+a-1)/aΪ��������Ҫ������
	}
	else 
	{
		cout << s2 * 7 + 5 + (s1 - 5 * a + b - 1) / b;
		//s2*7ͬ                                   ��5Ϊ����������(s1-5*a+b-1)/bΪ˫������������
		//����s1-5*aΪ��ȥ�����ջ�ʣ������
	}
	return 0;
}

https://www.luogu.com.cn/problem/P8780#submit
