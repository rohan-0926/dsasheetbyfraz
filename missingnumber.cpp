Day - 21 Missing Number
Link - https://leetcode.com/problems/missing-number/


Leetcode solution


class Solution {
public:
    int missingNumber(vector<int>& v) {
   map<int, int>mp;
        for(int i=0;i<=v.size();i++)
        {
            mp[i]++;
        }
        for(int i=0;i<v.size();i++)
        {
            mp[v[i]]++;
        }
        int res=0;
        for(auto it:mp)
        {
            if(it.second==1)
            {
                res=it.first;
            }
        }
        return res;
    }
};
