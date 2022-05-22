Day - 21  Happy Number
  
Link -https://leetcode.com/problems/happy-number/
  
Leetcode solution


class Solution {
public:
    bool isHappy(int n) {
        int rem=0;
        while(n/10!=0)
        {
            rem=0;
            while(n)
            {
                rem+=(n%10)*(n%10);
                n/=10;
            }
            n=rem;
        }
        
        return n==1||n==7?true:false;
        
    }
};
