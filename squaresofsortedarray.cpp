Day - 14 Squares of a Sorted Array
Link - https://leetcode.com/problems/squares-of-a-sorted-array/

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
		priority_queue<int>q;
	for(int i=0;i<n;i++)
	{
		q.push(v[i]*v[i]);
	}
	vector<int>ans;
	while(!q.empty())
	{
		ans.push_back(q.top());
		q.pop();
	}
	reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
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



