Day - 18  K-diff Pairs in an Array
  Link - https://leetcode.com/problems/k-diff-pairs-in-an-array/
  
  
  leetcode solution
  
  
  class Solution {
public:
    int findPairs(vector<int>& v, int k) {
        unordered_map<int, int>mp;
        int res=0;
        for(int i=0;i<v.size();i++)
        {
            mp[v[i]]++;
        }
        if(k==0)
        {
           for(auto it:mp)
            {
                if(it.second>1)
                {
                    res++;
                }
            }   
            return res;
        }
        for(auto it:mp)
        {
            int x=it.first-k;
            if(mp.count(x))
            {
                res++;
            }
        }
        return res;
    }
};
