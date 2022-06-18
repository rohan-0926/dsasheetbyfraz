Day 28 - PErmutations II (Backtracking)
  
Link - https://leetcode.com/problems/permutations-ii/


Leetcode solution


class Solution {
public:
     void solve(int i,int n,vector<int>&v,vector<int>&vis,vector<int>&r,vector<vector<int>>&res)
    {
        if(i==n)
        {
            res.push_back(r);
            return;
        }
        for(int k=0;k<n;k++)
        {
           if(vis[k]==0)
           {
                vis[k]=1;
               r.push_back(v[k]);
               solve(i+1,n,v,vis,r,res);
               vis[k]=0;
               r.pop_back();
           }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& v) {
         int n=v.size();
        vector<vector<int>>res;
        vector<int>vis(n,0);
        vector<int>r;
        solve(0,n,v,vis,r,res);
        set<vector<int>>st;
        for(auto it:res)
        {
            st.insert(it);
        }
        vector<vector<int>>ans;
        for(auto it:st)
        {
            ans.push_back(it);
        }
        return ans;
    }
};
