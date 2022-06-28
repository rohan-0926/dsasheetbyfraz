Day - 31  Partition Equal Subset Sum
Link - https://leetcode.com/problems/partition-equal-subset-sum/


Leetcode solution



class Solution {
public:
    bool solve(vector<int>&v,int n,int sum)
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
    bool canPartition(vector<int>& v) {
        int n=v.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=v[i];
        }
        int tar=sum/2;
        if(sum%2==0)
        {
            if(solve(v,n,tar))
            {
                return true;
            }
        }
        return false;
    }
};
