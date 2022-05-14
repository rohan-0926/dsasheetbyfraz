Day - 15 3Sum
 Link - https://leetcode.com/problems/3sum/


Leetcode solution



class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {     
        sort(v.begin(),v.end());
        int n=v.size();
        vector<vector<int>>res;
        for(int i=0;i<n;i++)
        {
            int ele=(-1*v[i]);
            int left=i+1,right=n-1;
            while(left<right)
            {
                if(v[left]+v[right]<ele)
                {
                    left++;
                }
                else if(v[left]+v[right]>ele)
                {
                    right--;
                }
                else
                {
                    res.push_back({v[i],v[left],v[right]});
                    while(left<right && v[left]==v[left+1])
                    {
                        left++;
                    }
                    while(left<right && v[right]==v[right-1])
                    {
                        right--;
                    }
                    left++;
                    right--;
                }
            }
            while(i+1<n && v[i+1]==v[i])
            {
                i++;
            }
        }
        return res;
    }
};
