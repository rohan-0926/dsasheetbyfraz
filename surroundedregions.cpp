Day - 22 Surrounded Regions
Link - https://leetcode.com/problems/surrounded-regions/


Leetcode solutions


class Solution {
public:
    void dfs(int i,int j,vector<vector<char>>&v)
    {
        int xdir[4]={-1,0,1,0};
        int ydir[4]={0,1,0,-1};
        int n=v.size();
        int m=v[0].size();
        v[i][j]='#';
        for(int k=0;k<4;k++)
        {
            int x=xdir[k]+i;
            int y=ydir[k]+j;
            if(x>=0 && y>=0 && x<v.size() && y<v[0].size())
            {
                if(v[x][y]=='O')
                {
                   dfs(x,y,v);   
                }    
            }  
        }
            
    }
    void solve(vector<vector<char>>& v) {
        int n=v.size();
        int m=v[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i*j ==0 || i==n-1 || j==m-1)
                {
                    if(v[i][j]=='O')
                    {
                        dfs(i,j,v);
                    }   
                }   
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(v[i][j]=='O')
                {
                    v[i][j]='X';
                }
                if(v[i][j]=='#')
                {
                    v[i][j]='O';
                }
            }
        }
    }
};
