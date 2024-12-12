#include <iostream>
#include <string>

class Solution 
{
public:
    int waysToStep(int n)
    {
        if (n == 1)
        {
            return 1;
        }
        if (n == 2)
        {
            return 2;
        }
        if (n == 3)
        {
            return 4;
        }
        else
        {
            int a = 0, b = 1, c = 2, d = 4;
            for (int i = 4; i <= n; i++)
            {
                a = ((b + c) % 1000000007 + d) % 1000000007;
                b = c;
                c = d;
                d = a;
            }
            return a % 1000000007;
        }
    }
};

https://leetcode.cn/problems/three-steps-problem-lcci/