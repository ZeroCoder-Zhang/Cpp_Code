#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int N = 0;
	cin >> N;
	vector<int> v;
	for (int i = 0; i < N; ++i)
	{
		int num = 0;
		while (cin >> num)
		{
			v.push_back(num);
		}
	}
	sort(v.begin(), v.end());
	int m = 0;
	int n = 0;
	for (size_t i = 0; i < v.size(); ++i)
	{
		if (v[i + 1] - v[i] > 1)
		{
			m = v[i] + 1;
		}
		else if (v[i + 1] == v[i])
		{
			n = v[i];
		}
	}
	cout << m << " " << n;
	return 0;
}