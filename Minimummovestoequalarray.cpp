Day-21 Minimum Moves to Equal Array Elements
Link - https://leetcode.com/problems/minimum-moves-to-equal-array-elements/


Leetcode solution


class Solution {
public:
    int minMoves(vector<int>& v) {
        int sum=0;
        for(int i=0;i<v.size();i++)
        {
            sum+=v[i];
        }
        int mini=*min_element(v.begin(),v.end());
        int res=sum-v.size()*mini;
        return res;
        
    }
};
