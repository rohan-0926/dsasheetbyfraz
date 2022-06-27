Day - 30 Pow(x, n)
  Link - https://leetcode.com/problems/powx-n/




Leetcode solution




class Solution {
public:
    double solve(double x,int n)
    {
        if(n==0)
        {
            return 1;
        }
        if(n==1)
        {
            return x;
        }
        double prev=solve(x,n/2);
        if(n%2==0)
        {
          return prev*prev;   
        }
        return x*prev*prev;
    }
    double myPow(double x, int n) {
        
       
        if(n<0)
        {
           return solve(1/x,abs(n));
        }
        return solve(x,n);
        
    }
};
