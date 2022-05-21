Day - 20 Number of Island
Link - https://leetcode.com/problems/number-of-islands/submissions/

Leetcdoe solution


class Solution {
public:
    int xdir[4]={-1,0,1,0};
    int ydir[4]={0,1,0,-1};
    void bfs(int i,int j,vector<vector<char>>&v)
    {
         //i-1,j
        //i,j+1
        //i+1,j
        //i,j-1
        int n=v.size();
        int m=v[0].size();
        queue<pair<int, int>>q;
        q.push({i,j});
        v[i][j]='0';
        while(!q.empty())
        {
            pair<int, int>p=q.front();
            q.pop();
            for(int i=0;i<4;i++)
            {
                int x=xdir[i]+p.first;
                int y=ydir[i]+p.second;
                if((x>=0 && x<n)&&(y>=0 && y<m)&&(v[x][y]=='1'))
                {
                    v[x][y]='0';
                    q.push({x,y});
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& v) {
        int res=0;
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                if(v[i][j]=='1')
                {
                    res++;
                    bfs(i,j,v);
                }
            }
        }
        return res;
        
    }
};
