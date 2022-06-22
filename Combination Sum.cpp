Day - 30  Combination Sum
Link - https://leetcode.com/problems/combination-sum/



Leetcode solution code



class Solution {
public:
     void backtrack(int i,int tar,int n,int sum,vector<int>&row,vector<vector<int>>&res,vector<int>&v)
    {
        if(sum==tar)
        {
            res.push_back(row);
            return;
        }
        for(int k=i;k<n;k++)
        {
            if(sum<=tar)
            {
                row.push_back(v[k]);
                // sum+=v[k];
                backtrack(k,tar,n,sum+v[k],row,res,v);
                // sum-=v[k];
                row.pop_back();
            }
            else
            {
                continue;
            }
        }
        
    }
    vector<vector<int>> combinationSum(vector<int>& v, int k) {
          int n=v.size();
        // sort(v.begin(),v.end());
        vector<vector<int>>res;
        vector<int>row;
        int sum=0;
        backtrack(0,k,n,sum,row,res,v);
        // for(int i=0;i<res.size();i++)
        // {
        //     sort(res[i].begin(),res[i].end());
        // }
        // set<vector<int>>st;
        // for(auto it:res)
        // {
        //     st.insert(it);
        // }
        // vector<vector<int>>ans;
        // for(auto p:st)
        // {
        //     ans.push_back(p);
        // }
        return res;
    }
};
