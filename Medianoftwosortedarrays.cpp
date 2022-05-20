Day - 19 Median of Two Sorted Arrays
Link - https://leetcode.com/problems/median-of-two-sorted-arrays/



Leetcode solution


class Solution
{
    public:
        double findMedianSortedArrays(vector<int> &v, vector<int> &v1) {
            priority_queue<int>q;
            for(int i=0;i<v.size();i++)
            {
                q.push(v[i]);
            }
            for(int i=0;i<v1.size();i++)
            {
                q.push(v1[i]);
            }
            vector<int>v2;
            float res=0;
            while(!q.empty())
            {
                v2.push_back(q.top());
                q.pop();
            }
            reverse(v2.begin(),v2.end());
            int n=v2.size();
            if(v2.size()%2!=0)
            {
                double res;
                res=v2[n/2];
                return res;
            }
            double x=(v2[n/2]+v2[n/2-1]);
            res=x/2;
            return res;
            
        }
};
