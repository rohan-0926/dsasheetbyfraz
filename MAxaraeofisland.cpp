Day - 23 Max Area Of Island
Link - https://leetcode.com/problems/max-area-of-island/

Leetcode Solution


class Solution {
public:
       int res=0;
    void dfs(int i, int j,vector<vector<int>>&v)
    {
        int xdir[4]={-1,0,1,0};
        int ydir[4]={0,1,0,-1};
        int n=v.size();
        int m=v[0].size();
        if(i<0 || j<0 || i>=n || j>=m || v[i][j]!=1)
        {
            return;
        }
        v[i][j]=2;
         res++;
        for(int k=0;k<4;k++)
        {
            dfs(xdir[k]+i,ydir[k]+j,v);
        }
        
    }
    int maxAreaOfIsland(vector<vector<int>>& v) {
         int n=v.size();
        int m=v[0].size();
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            // res=0;
            for(int j=0;j<m;j++)
            {
                if(v[i][j]==1)
                {
                    dfs(i,j,v);
                     maxi=max(maxi,res);
                    res=0;
                }
            }
        }
       return maxi;
        
    }
};
