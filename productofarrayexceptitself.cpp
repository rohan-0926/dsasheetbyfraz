Day - 15  Product of Array Except Self
Link - https://leetcode.com/problems/product-of-array-except-self/


Leetcode Solution

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& v) {
        int res=1;
        vector<int>ps;
        for(int i=0;i<v.size();i++)
        {
            res=res*v[i];
        }
        int z=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==0)
            {
                z++;
            }
        }
        if(z==1)
        {
            int temp=1;
            for(int i=0;i<v.size();i++)
            {
                if(v[i]!=0)
                {
                    temp=temp*v[i];
                }
            }
            for(int i=0;i<v.size();i++)
            {
                if(v[i]!=0)
                {
                    ps.push_back(0);
                }
                else
                {
                    ps.push_back(temp);
                }
            }
        }
        else if(z==v.size())
        {
            return v;
        }
        else if(z>1 && z<v.size())
        {
            for(int i=0;i<v.size();i++)
            {
                ps.push_back(0);
            }
        }
        else
        {
                for(int i=0;i<v.size();i++)
                {
                    ps.push_back(res/v[i]);
                }   
        }
        return ps;
        
    }
};
