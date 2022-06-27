Day - 30 Combination Sum III
Link - https://leetcode.com/problems/combination-sum-iii/



Leetcode solution



class Solution {
public:
    void solve(int i,int tar,vector<int>&v,vector<vector<int>>&res,vector<int>&row,int sum)
    {
        if(sum==tar)
        {
            res.push_back(row);
            return;
        }
        for(int k=i;k<v.size();k++)
        {
            if(sum<=tar)
            {
                row.push_back(v[k]);
                solve(k+1,tar,v,res,row,sum+v[k]);
                row.pop_back();
            }
            else
            {
                continue;
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>v={1,2,3,4,5,6,7,8,9};
        vector<vector<int>>res;
        vector<int>row;
        int sum=0;
        solve(0,n,v,res,row,sum);
        set<vector<int>>st;
        vector<vector<int>>ans;
        vector<int>p;
        for(int i=0;i<res.size();i++)
        {
            sort(res[i].begin(),res[i].end());
        }
        for(auto it:res)
        {
            if(it.size()==k)
            {
                st.insert(it);
            }
        }
        for(auto it:st)
        {
            ans.push_back(it);
        }
        // ans.push_back(p);
        return ans;
    }
};
