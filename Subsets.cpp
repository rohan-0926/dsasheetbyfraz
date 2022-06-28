Day 30 - Subsets
Link - https://leetcode.com/problems/subsets/


Leetcode solution

class Solution {
public:
    vector<vector<int>> solve(vector<int>&v,int i)
    {
        if(i>=v.size())
        {
            return {{}};
        }
        vector<vector<int>>temp=solve(v,i+1);
        vector<vector<int>>ans;
        for(auto it:temp)
        {
            ans.push_back(it);
        }
        for(auto it:temp)
        {
            it.push_back(v[i]);
            ans.push_back(it);
        }
        return ans;
    }
    vector<vector<int>> subsets(vector<int>& v) {
        return solve(v,0);
    }
};
