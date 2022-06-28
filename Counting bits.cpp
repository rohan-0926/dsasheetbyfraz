Day 31 - Counting Bits
Link - https://leetcode.com/problems/counting-bits/


Leetcode solution



class Solution {
public:
    vector<int> countBits(int n) 
    {
      vector<int>v;
        for(int i=0;i<=n;i++)
        {
            bitset<1600>bt(i);
            int l=bt.count();
            v.push_back(l);
        }
        return v;
    }
};
