Day - 18  Jump Game
Link - https://leetcode.com/problems/jump-game/

Leetcode solution

class Solution {
public:
    bool canJump(vector<int>& v) {
        int n=v.size();
        if(n==1)
        {
            return true;
        }
        int l=0;
        for(int i=0;i<n;i++)
        {
            if(l<i)
            {
                return false;
            }
            l=max(l,i+v[i]);
        }
        return l;
    }
};
