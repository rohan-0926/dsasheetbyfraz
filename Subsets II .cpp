Day - 30 Subsets II
Link - https://leetcode.com/problems/subsets-ii/

Leetcdoe solution



class Solution {
public:
   void solve(int i,vector<int>&v,vector<int>&row,vector<vector<int>>&copy)
   {
       
       if(i==v.size())
       {
           copy.push_back(row);
           return;
       }
       
       //include ith ele
       row.push_back(v[i]);
       solve(i+1,v,row,copy);
       
       //not include ith ele
       row.pop_back();
       solve(i+1,v,row,copy);
       
   }
    vector<vector<int>> subsetsWithDup(vector<int>& v) {
        vector<vector<int>>copy;
        vector<int>row;
        solve(0,v,row,copy);
        set<vector<int>>st;
        for(int i=0;i<copy.size();i++)
        {
            sort(copy[i].begin(),copy[i].end());
        }
        for(auto it:copy)
        {
            st.insert(it);
        }
        vector<vector<int>>res;
        for(auto it:st)
        {
            res.push_back(it);
        }
        return res;
    }
};
