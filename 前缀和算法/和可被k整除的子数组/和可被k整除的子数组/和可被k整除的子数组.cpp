#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution 
{
public:
    int subarraysDivByK(vector<int>& nums, int k) 
    {
        unordered_map<int, int> hash;
        hash[0 % k] = 1;

        int sum = 0, ret = 0;
        for (auto x : nums)
        {
            sum += x;
            int r = (sum % k + k) % k;
            if (hash.count(r))
            {
                ret += hash[r];
            }
            hash[r]++;
        }
        return ret;
    }
};

https://leetcode.cn/problems/subarray-sums-divisible-by-k/