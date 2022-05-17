Day - 17 Find All Duplicates in an Array
Link - https://leetcode.com/problems/find-all-duplicates-in-an-array/

Leetcode solution

class Solution {
public:
    vector<int> findDuplicates(vector<int>& v) {
        vector<int>res;
        unordered_map<int, int>mp;
        for(int i=0;i<v.size();i++)
        {
            mp[v[i]]++;
            if(mp[v[i]]>1)
            {
                res.push_back(v[i]);
            }
        }
        return res;
    }
};
