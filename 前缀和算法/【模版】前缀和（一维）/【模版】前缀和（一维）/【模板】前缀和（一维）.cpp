#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//1.��������
	int n = 0, q = 0;
	cin >> n >> q;
	vector<int> arr(n + 1, 0);
	for (int i = 1; i <= n; ++i)
	{
		cin >> arr[i];
	}
	//2.Ԥ�������һ��ǰ׺������
	vector<long long> dp(n + 1, 0);
	for (int i = 1; i <= n; ++i)
	{
		dp[i] = dp[i - 1] + arr[i];
	}
	//3.ʹ��ǰ׺������
	int l = 0, r = 0;
	while (q--)
	{
		cin >> l >> r;
		cout << dp[r] - dp[l - 1] << endl;
	}

	return 0;
}