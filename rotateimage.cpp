Day -17 Rotate Image
Link - https://leetcode.com/problems/rotate-image/

Leetcode solution

class Solution {
public:
    void rotate(vector<vector<int>>& v) {
        vector<vector<int>>dup;
        for(int i=0;i<v.size();i++)
        {
            vector<int>row;
            for(int j=v[i].size()-1;j>=0;j--)
            {
                row.push_back(v[j][i]);
            }
            dup.push_back(row);
        }
        for(int i=0;i<dup.size();i++)
        {
            for(int j=0;j<dup[i].size();j++)
            {
                v[i][j]=dup[i][j];
            }
        }
        
    }
};
