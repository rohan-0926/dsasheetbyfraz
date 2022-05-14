Day - 15 Merge Intervals
Link - https://leetcode.com/problems/merge-intervals/



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
      vector<vector<int>>v;
    for(int i=0;i<n;i++)
    {
        vector<int>row;
        for(int j=0;j<2;j++)
        {
            int ele;cin>>ele;
            row.push_back(ele);
        }
        v.push_back(row);
    }
    sort(v.begin(),v.end());
    vector<vector<int>>res;
    int l=v[0][0],m=v[0][1];
    for(int i=1;i<n;i++)
    {
        if(m>=v[i][0])
        {
            if(v[i][1]>m)
            {
                m=v[i][1];
            }
        }
        else
        {
            res.push_back({l,m});
            l=v[i][0];
            m=v[i][1];
        }
        if(i==n-1)
        {
            res.push_back({l,m});
        }
    }
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
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



