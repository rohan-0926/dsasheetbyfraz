Day 14 - Two Sum 
Link - https://leetcode.com/problems/two-sum/

Solved using two pinter technique + introsort in O(nlogn)
  
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
    int n,k;cin>>n>>k;
  vector<int>v(n);
  for(int i=0;i<n;i++)
  {
      cin>>v[i];
  }
  vector<int>copy=v;
        int left=0,right=n-1;
        sort(v.begin(),v.end());
        int p=0,q=0;
        while(left<=right)
        {
            if(v[left]+v[right]==k)
            {
                p=v[left];
                q=v[right];
                break;
            }
            else if(v[left]+v[right]<k)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        // cout<<"{"<<p<<","<<q<<"}"<<endl;
        vector<int>res;
        for(int i=0;i<copy.size();i++)
        {
            if(copy[i]==p)
            {
                res.push_back(i);
                break;
            }
        }
        for(int i=copy.size()-1;i>=0;i--)
        {
            if(copy[i]==q)
            {
                res.push_back(i);
                break;
            }
        }
        cout<<"{"<<res[0]<<","<<res[1]<<"}"<<endl;
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



