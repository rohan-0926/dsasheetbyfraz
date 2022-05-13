Day - 14 Running Sum of 1d Array
Link - https://leetcode.com/problems/running-sum-of-1d-array/



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


void solve()
{
    int n;cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++)
  {
      cin>>v[i];
  }
    vector<int>res;
        int sum=0;
        for(int i=0;i<v.size();i++)
        {
            sum+=v[i];
            res.push_back(sum);
        }
        
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
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



