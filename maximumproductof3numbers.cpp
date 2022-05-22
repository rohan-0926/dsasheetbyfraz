Day - 21 Maximum Product of Three Numbers
Link - https://leetcode.com/problems/maximum-product-of-three-numbers/


Leetcode solution



class Solution {
public:
    int maximumProduct(vector<int>& v) {
        vector<int>copy=v;
        sort(v.begin(),v.end(),greater<int>());
        int res=1;
        for(int i=0;i<3;i++)
        {
            res*=v[i];
        }
        int ans=1;
        int neg=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]<0)
            {
                neg++;
            }
        }
        if(neg>1)
        {
            sort(copy.begin(),copy.end());
            for(int i=0;i<2;i++)
            {
                ans*=copy[i];
            }
            ans*=copy[copy.size()-1];
            int l=max(res,ans);
            return l;
        }
        return res;
        
    }
};
