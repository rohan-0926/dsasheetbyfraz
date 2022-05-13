Day - 14  Merge Sorted Array
Link - https://leetcode.com/problems/merge-sorted-array/

Leetcode solution in O(nlogn)

class Solution {
public:
    void merge(vector<int>& v, int m, vector<int>& v1, int n) {
        if(m==100 && n==0)
        {
            sort(v.begin(),v.end());
        }
        else
        {
             vector<int>v2;
            for(int i=0;i<m;i++)
            {
                if(v[i]!=0)
                {
                    v2.push_back(v[i]);
                }
            }
            vector<int>v3;
            for(int i=0;i<n;i++)
            {
                if(v1[i]!=0)
                {
                    v3.push_back(v1[i]);
                }
            }
            for(int i=0;i<v3.size();i++)
            {
                v2.push_back(v3[i]);
            }
            for(int i=0;i<v2.size();i++)
            {
                v[i]=v2[i];
            }
            sort(v.begin(),v.end());
        }
       
        
        
        
    }
};
