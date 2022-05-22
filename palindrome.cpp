Day - 21 Palindrome
Link - https://leetcode.com/problems/palindrome-number/
  Leetcdoe solution
  
  
  class Solution {
public:
    bool isPalindrome(int x) {
        if(x>=0)
        {
          int rem=0,sum=0;
            while(x!=0)
            {
                rem=x%10;
                sum=sum*10+rem;
                x=x/10;
            }
            return sum==x;
        }
        return false;
        
    }
};
  
  
  
