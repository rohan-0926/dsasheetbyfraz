Day - 15 Subarray Sum Equals K
Link - https://leetcode.com/problems/subarray-sum-equals-k/


Leetcode solution

class Solution {
public:
    int subarraySum(vector<int>& v, int k) {
      vector<int>ps;
        int sum=0;
        for(int i=0;i<v.size();i++)
        {
            sum+=v[i];
            ps.push_back(sum);
        }
        unordered_map<int, int>mp;
        int res=0;
        for(int i=0;i<v.size();i++)
        {
            if(ps[i]==k)
            {
                res++;
            }
            if(mp.find(ps[i]-k)!=mp.end())
            {
                res+=mp[ps[i]-k];
            }
            mp[ps[i]]++;
        }
        return res;
    }
};
