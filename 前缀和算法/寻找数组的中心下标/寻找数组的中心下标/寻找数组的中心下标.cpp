#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums)
    {
        //1.��������
        int n = nums.size();
        vector<int> f(n), g(n);
        //2.Ԥ����ǰ׺�����鼰��׺������
        for (int i = 1; i < n; i++)
        {
            f[i] = f[i - 1] + nums[i - 1];
        }
        for (int i = n - 2; i >= 0; i--)
        {
            g[i] = g[i + 1] + nums[i + 1];
        }
        //3.ʹ��
        for (int i = 0; i < n; ++i)
        {
            if (f[i] == g[i])
            {
                return i;
            }
        }
        return -1;
    }
};

https://leetcode.cn/problems/find-pivot-index/