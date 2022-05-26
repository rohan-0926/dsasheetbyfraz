Day - 22 Word Search
Link - https://leetcode.com/problems/word-search/

Leetcode solution


class Solution {
public:
    static bool dfs(int i,int j,vector<vector<char>>&v,string str,int k)
    {
        int xdir[4]={-1,0,1,0};
        int ydir[4]={0,1,0,-1};
        if(k==str.size())
        {
            return true;
        }
        int n=v.size();
        int m=v[0].size();
        if(i<0 || j<0 || i>=n || j>=m || v[i][j]!=str[k])
        {
            return false;
        }
        char temp=v[i][j];
        v[i][j]='#';
        bool ans=false;
        for(int p=0;p<4;p++)
        {
            if(dfs(xdir[p]+i,ydir[p]+j,v,str,k+1))
            {
                ans=dfs(xdir[p]+i,ydir[p]+j,v,str,k+1);
            }
        }
        v[i][j]=temp;
        return ans;
    }
    bool exist(vector<vector<char>>& v, string str) {
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                if(dfs(i,j,v,str,0))
                {
                    return true;
                }
            }
        }
        return false;
    }
};
