Day - 18 First Missing Positive
Link - First Missing Positive

  
  
Leetcode solution

class Solution {
public:
    int firstMissingPositive(vector<int>& v) {
        unordered_map<int, int>mp;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>=1 && v[i]<=v.size())
            {
                mp[v[i]]++;
            }
        }
        for(int i=1;i<=v.size();i++)
        {
            if(mp[i]==0)
            {
                return i;
            }
        }
        return v.size()+1;
        
    }
};
