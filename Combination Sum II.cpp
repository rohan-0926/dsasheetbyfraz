Day - 30 Combination Sum II
Link - https://leetcode.com/problems/combination-sum-ii/


Leetcode solution




class Solution {
public:
    void solve(int i,int n,vector<int>&v,int tar,vector<vector<int>>&res,vector<int>&row,int sum)
    {
        if(sum==tar)
        {
            res.push_back(row);
            return;
        }
        if(sum>tar || i>=n)
        {
            return;
        }
         row.push_back(v[i]);
         sum+=v[i];
         solve(i+1,n,v,tar,res,row,sum);
         row.pop_back();
         sum-=v[i];
         while(i+1<n && v[i]==v[i+1])
         i++;
         solve(i+1,n,v,tar,res,row,sum);
    }
    vector<vector<int>> combinationSum2(vector<int>&v, int k) {
        int n=v.size();
        sort(v.begin(),v.end());
        vector<vector<int>>res;
        vector<int>row;
        // vector<int>vis(n,0);
        int sum=0;
        solve(0,n,v,k,res,row,sum);
        return res;
    }
};
