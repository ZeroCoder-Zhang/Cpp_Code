#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
	string strA[10] = { "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };
	void Combine(string digits, int level, string combineStr, vector<string>& v)
	{
		if (level == digits.size())
		{
			v.push_back(combineStr);
			return;
		}
		int num = digits[level] - '0';
		string str = strA[num];
		for (size_t i = 0; i < str.size(); ++i)
		{
			Combine(digits, level + 1, combineStr + str[i], v);
		}
	}
	vector<string> letterCombinations(string digits)
	{
		vector<string> v;
		if (digits.empty())
		{
			return v;
		}
		Combine(digits, 0, "", v);
		return v;
	}
};

https://leetcode.cn/problems/letter-combinations-of-a-phone-number/description/
