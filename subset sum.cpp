Day 31  subset sum




Dp solution


#include<bits/stdc++.h>
using namespace std;
bool issubset(vector<int>&v,int n,int sum)
{
     bool dp[n+1][sum+1];
    for(int i=1;i<=sum;i++)
    {
        dp[0][i]=false;
    }
    for(int i=0;i<=n;i++)
    {
        dp[i][0]=true;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(j<v[i-1])
            {
                dp[i][j]=dp[i-1][j];
            }
            else
            {
                dp[i][j]=dp[i-1][j] || dp[i-1][j-v[i-1]]; 
            }
        }
    }
    return dp[n][sum];
}
int main()
{
    int n,sum;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cin>>sum;
    if(issubset(v,n,sum))
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
    return 0;
}
