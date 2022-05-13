Day - 14 Move Zeroes
Link - https://leetcode.com/problems/move-zeroes/


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
      vector<int>v1;
        int zero=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==0)
            {
                zero++;
            }
            else
            {
              v1.push_back(v[i]);   
            }
        }
        for(int i=0;i<zero;i++)
        {
            v1.push_back(0);
        }
        for(int i=0;i<v1.size();i++)
        {
            v[i]=v1[i];
        }
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
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



