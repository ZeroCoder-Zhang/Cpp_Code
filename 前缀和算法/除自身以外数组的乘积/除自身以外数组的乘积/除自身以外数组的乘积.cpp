#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        //1.��ȡ����
        int n = nums.size();
        vector<int> f(n), g(n);
        //2.Ԥ����ǰ׺���ͺ�׺��
        f[0] = g[n - 1] = 1;//ϸ��
        for (int i = 1; i < n; ++i)
        {
            f[i] = f[i - 1] * nums[i - 1];
        }
        for (int i = n - 2; i >= 0; --i)
        {
            g[i] = g[i + 1] * nums[i + 1];
        }
        //3.ʹ��
        vector<int> ret(n);
        for (int i = 0; i < n; ++i)
        {
            ret[i] = f[i] * g[i];
        }
        return ret;
    }
};

https://leetcode.cn/problems/product-of-array-except-self/