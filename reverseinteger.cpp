Day - 20 Reverse Integer
Link - https://leetcode.com/problems/reverse-integer/


Leetcode solution


class Solution {
public:
    int reverse(int x) {
       long long rem=0,sum=0;
          while(x!=0)
           {
               if (sum > INT_MAX/10 || sum < INT_MIN/10)
               {
                return 0;
                }
               rem=x%10;
                sum=(sum*10)+rem;
                x=x/10;
           }
      
        return sum;
    }
};
