#include <iostream>
using namespace std;

long long a, b, n; //千万不要忘记开long long！
int main() 
{
	cin >> a >> b >> n;
	long long s = 5 * a + b * 2; //一周做的题数
	long long s1 = n % s; //还剩几题
	long long s2 = n / s; //做了几周
	if (s1 <= 5 * a) 
	{//如果工作日能完成
		cout << s2 * 7 + (s1 + a - 1) / a;
		//s2*7为整周的天数，(s1+a-1)/a为求工作日需要的天数
	}
	else 
	{
		cout << s2 * 7 + 5 + (s1 - 5 * a + b - 1) / b;
		//s2*7同                                   理，5为工作日天数(s1-5*a+b-1)/b为双休日所需天数
		//其中s1-5*a为除去工作日还剩的题数
	}
	return 0;
}

https://www.luogu.com.cn/problem/P8780#submit
