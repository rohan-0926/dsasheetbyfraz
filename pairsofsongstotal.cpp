Day - 17 Pairs of Songs With Total Durations Divisible by 60
  Link - https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60/
  
  Leetcode solution
  
  class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& v) {
       vector<int>v1;
        for(int i=0;i<v.size();i++)
        {
            v1.push_back(v[i]%60);
        }
        int target=60,count=0;
       unordered_map<int, int>mp;
        // mp[0]=1;
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]==0)
            {
                count+=mp[v1[i]];
            }
            if(mp.find(target-v1[i])!=mp.end())
            {
                count+=mp[target-v1[i]];
            }
            mp[v1[i]]++;
        }
        return count;
    }
};
  
