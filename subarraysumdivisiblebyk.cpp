Day - 18 Subarray Sums Divisible by K
Link - https://leetcode.com/problems/subarray-sums-divisible-by-k/

Leetcode solution

class Solution {
public:
    int subarraysDivByK(vector<int>& v, int k) {
       map<int, int>mp;
        int sum=0,res=0;
        mp[0]=1;
        for(int i=0;i<v.size();i++)
        {
            sum+=v[i];
            int rem=sum%k;
            if(rem<0)
            {
                rem+=k;
            }
            if(mp.find(rem)!=mp.end())
            {
                res+=mp[rem];
            }
            mp[rem]++;
        }
        return res;
    }
};
