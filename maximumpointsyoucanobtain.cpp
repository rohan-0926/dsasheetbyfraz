Day - 18 Maximum Points You Can Obtain from Cards
Link - https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/

Leetcode solution


class Solution {
public:
    int maxScore(vector<int>& v, int k) {
        int sum=0;
        for(int i=0;i<v.size();i++)
        {
            sum+=v[i];
        }
        if(v.size()==k)
        {
            return sum;
        }
        int res=0,l=0;
        for(int i=0;i<v.size()-k-1;i++)
        {
            l+=v[i];
        }
        for(int i=v.size()-k-1;i<v.size();i++)
        {
            l+=v[i];
            res=max(res,sum-l);
            l-=v[i-(v.size()-k-1)];
        }
        return res;
    }
};
