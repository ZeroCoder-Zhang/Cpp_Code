#include <string>
using namespace std;


//常用方法
class Solution 
{
public:
    bool isPalindrome(string s)
    {
        string::iterator left = s.begin();
        string::iterator right = s.end() - 1;
        if (s.size() == 0 || s.size() == 1)
        {
            return true;
        }
        while (left < right)
        {
            while (left < right && isalnum(*left) == 0)
            {
                left++;
            }
            while (left < right && isalnum(*right) == 0)
            {
                right--;
            }
            if (tolower(*left) != tolower(*right))
            {
                return false;
            }
            right--;
            left++;
        }
        return true;
    }
};

//非常规方法：字符串反转及比较
class Solution {
public:
    bool isPalindrome(string s) 
    {
        string sgood;
        for (char ch : s) 
        {
            if (isalnum(ch)) 
            {
                sgood += tolower(ch);
            }
        }
        string sgood_rev(sgood.rbegin(), sgood.rend());
        return sgood == sgood_rev;
    }
};