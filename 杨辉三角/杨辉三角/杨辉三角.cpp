#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
	vector<vector<int>> YangHuiSanJiao(int num)
	{
		vector<vector<int>> vv;
		vv.resize(num);
		for (size_t i = 0; i < vv.size(); ++i)
		{
			vv[i].resize(i + 1, 0);
			vv[i][0] = vv[i][i] = 1;
		}
		for (size_t i = 0; i < vv.size(); ++i)
		{
			for (size_t j = 0; j < vv[i].size(); ++j)
			{
				if (vv[i][j] == 0)
				{
					vv[i][j] = vv[i - 1][j] + vv[i - 1][j - 1];
				}
			}
		}
		return vv;
	}
};

https://leetcode.cn/problems/pascals-triangle/description/