Day - 27  N-Queens
Link - https://leetcode.com/problems/n-queens/


Leetcode solution

class Solution {
public:
    
    void issafe(int j,int n,vector<string>v,vector<vector<string>>&res,vector<int>&lr,vector<int>&ud,vector<int>&ld)
    { 
        if(j==n)
        {
            res.push_back(v);
            return;
        }
        for(int i=0;i<n;i++)
        {
            if(lr[i]==0 && ud[i+j]==0 && ld[n-1+i-j]==0)
            {
                v[i][j]='Q';
                lr[i]=1;
                ud[i+j]=1;
                ld[n-1+i-j]=1;
                issafe(j+1,n,v,res,lr,ud,ld);
                v[i][j]='.';
                lr[i]=0;
                ud[i+j]=0;
                ld[n-1+i-j]=0;
            }
        }
        
    }
    vector<vector<string>> solveNQueens(int n)
    {
            vector<vector<string>>res;
            vector<string>v(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            v[i]=s;
        }
        vector<int>lr(n,0),ud(2*n-1,0),ld(2*n-1,0);
        issafe(0,n,v,res,lr,ud,ld);
        return res;
            
    }
};
