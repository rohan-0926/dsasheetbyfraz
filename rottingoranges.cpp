Day - 22 Rotting Oranges
Link - https://leetcode.com/problems/rotting-oranges/


Leetcode solution



class Solution
{
    public:
         int xdir[4]={-1,0,1,0};
         int ydir[4]={0,1,0,-1};
        int orangesRotting(vector<vector < int>> &v) {
            int l=0;
            int n=v.size();
            int m=v[0].size();
            queue<pair<int, int>>q;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if(v[i][j]==1)
                    {
                        l++;
                    }
                    else if(v[i][j]==2)
                    {
                         q.push({i,j});
                    }
                }
            }
            int res=0;
            while(!q.empty())
            {
                int len=q.size();
                while(len--)
                {
                     pair<int, int>p=q.front();
                    q.pop();
                    for(int i=0;i<4;i++)
                    {
                        int x=xdir[i]+p.first;
                        int y=ydir[i]+p.second;
                        if((x>=0 && x<n)&&(y>=0 && y<m)&&(v[x][y]==1))
                        {
                            v[x][y]=2;
                            q.push({x,y});
                            l--;
                        }
                    }
                }
               res++;
            }
            if(l!=0)
            {
                return -1;
            }
            else if(res>0 && l==0)
            {
                return res-1;
            }
            return 0;
        }
};
