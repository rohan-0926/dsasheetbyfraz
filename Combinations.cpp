Day - 30  Combinations
Link - https://leetcode.com/problems/combinations/



Leetcode solution



class Solution {
public:
    void solve(int i,vector<int>&v,vector<vector<int>>&res,vector<int>&row)
    {
        if(i==v.size())
        {
            res.push_back(row);
            return;
        }
        
         row.push_back(v[i]);
            solve(i+1,v,res,row);
            
        row.pop_back();
        solve(i+1,v,res,row);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>v;
        for(int i=1;i<=n;i++)
        {
            v.push_back(i);
        }
        vector<vector<int>>res;
        vector<int>row;
        solve(0,v,res,row);
        vector<vector<int>>ans;
        for(auto it:res)
        {
            if(it.size()==k)
            {
                ans.push_back(it);
            }
        }
        return ans;
        
    }
};
