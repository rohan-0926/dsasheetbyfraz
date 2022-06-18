Day - 28  Palindrome Partitioning
Link - https://leetcode.com/problems/palindrome-partitioning/


Leetcode solution



class Solution {
public:
    bool ispalindrome(string str)
    {
        string temp=str;
        reverse(str.begin(),str.end());
        return temp==str;
    }
    void backtrack(int i,int n,string s,vector<vector<string>>&res,vector<string>&v)
    {
        if(i==n)
        {
            res.push_back(v);
            return;
        }
        // int j=i;
        // string sr="";
        for(int k=i;k<n;k++)
        {
            // sr+=s[k];
            string sr=s.substr(i,k-i+1);
            if(ispalindrome(sr))
            {
                v.push_back(sr);
                 // vis[k]=1;
                backtrack(k+1,n,s,res,v);
                // vis[k]=0;
                v.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        int n=s.size();
        vector<vector<string>>res;
        vector<string>v;
        // vector<int>vis(n,0);
        string str="";
        backtrack(0,n,s,res,v);
        return res;
    }
};
