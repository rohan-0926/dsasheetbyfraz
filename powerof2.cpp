Day - 21  Power of Two
Link - https://leetcode.com/problems/power-of-two/
  
  
  Leetcode solution
  
  
  
  class Solution {
public:
    bool isPowerOfTwo(int n) {
       if(n<=0)
       {
            return false;
       }
        if(n==1)
        {
            return true;
        }
        double res=ceil(log2(n));
        double ans=floor(log2(n));
        return res==ans;
    }
};
