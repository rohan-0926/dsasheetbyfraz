Day - 23 Valid Palindrome II
Link - https://leetcode.com/problems/valid-palindrome-ii/submissions/

Leetcode solution


class Solution {
public:
    bool ispalindrome(string str,int left,int right)
    {
        while(left<=right)
        {
            if(str[left]==str[right])
            {
                left++;
                right--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
       int left=0,right=s.size()-1;
        while(left<=right)
        {
            if(s[left]==s[right])
            {
                left++;
                right--;
            }
            else
            {
               return ispalindrome(s,left+1,right) || ispalindrome(s,left,right-1);
            }
        }
        return true;
    }
};
