Day - 17 Container With Most Water
Link - https://leetcode.com/problems/container-with-most-water/


Leetcode solution


class Solution {
public:
    int maxArea(vector<int>& v) {
        int left=0,right=v.size()-1;
        int res=0;
        vector<int>ans;
        if(v.size()==2)
        {
            int maxi=*min_element(v.begin(),v.end());
            return maxi;
        }
        while(left<=right)
        {
            if(v[left]<v[right])
            {
                res=v[left]*(right-left);
                ans.push_back(res);
                left++;
            }
            else if(v[left]>v[right])
            {
                res=v[right]*(right-left);
                ans.push_back(res);
                right--;
            }
            else
            {
                res=v[left]*(right-left);
                ans.push_back(res);
                left++;
                // right--;
            }
        }
        sort(ans.begin(),ans.end(),greater<int>());
        return ans[0];
        
    }
};
