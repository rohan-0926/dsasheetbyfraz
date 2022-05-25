Day - 22 Flood Fill
Link - https://leetcode.com/problems/flood-fill/submissions/


Leetcode soltuion


class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& v, int sr, int sc, int k)     {
        
        int n=v.size();
        int m=v[0].size();
        int xdir[4]={-1,0,1,0};
        int ydir[4]={0,1,0,-1};
        queue<pair<int, int>>q;
        q.push({sr,sc});
        int l=v[sr][sc];
        if(l==k)
        {
            return v;
        }
        v[sr][sc]=k;
        while(!q.empty())
        {
            pair<int, int>p=q.front();
            q.pop();
            for(int i=0;i<4;i++)
            {
                int x=xdir[i]+p.first;
                int y=ydir[i]+p.second;
                if(x>=0 && x<n && y>=0 && y<m && v[x][y]==l)
                {
                    v[x][y]=k;
                    q.push({x,y});
                }
            }
        }
        return v;
        
    }
};
