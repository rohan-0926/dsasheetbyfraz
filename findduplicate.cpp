Day - 17 Find the Duplicate Number
Link - https://leetcode.com/problems/find-the-duplicate-number/submissions/
  
  Leetcode solution
  
  class Solution {
public:
    int findDuplicate(vector<int>& v) {
        unordered_map<int, int>mp;
        int res=0;
        for(int i=0;i<v.size();i++)
        {
            mp[v[i]]++;
            if(mp[v[i]]>1)
            {
                res=v[i];
                break;
            }
        }
        return res;
        
    }
};
