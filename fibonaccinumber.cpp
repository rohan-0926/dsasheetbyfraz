Day - 14 Fibonacci Number
Link - https://leetcode.com/problems/fibonacci-number/

2 approches using dp and recursion


#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair
const ll mod = 1e9+7, N = 2e6+7, M = 2e6+7, INF = INT_MAX/10;
int dirx[]={-1,-1,0,1,1,1,0,-1};
int diry[]={0,1,1,1,0,-1,-1,-1};
//i-1,j
//i,j+1
//i+1,j
//i,j-1

int x4[]={-1,0,1,0};
int y4[]={0,1,0,-1};

//rear insert
//front delete

int fibo(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}

void solve()
{
    int n;cin>>n;
//   vector<int>v(n);
//   for(int i=0;i<n;i++)
//   {
//       cin>>v[i];
//   }
  int dp[100];
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
   cout<<dp[n]<<endl;
}

signed main(){
    fast;
    // int t;
    // cin >> t;
    // while(t--)
    // {
    //    solve();
    // }
    solve();
    return 0;
}



