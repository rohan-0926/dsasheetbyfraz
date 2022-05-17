Day - 17 3Sumcloset
  Link -https://leetcode.com/problems/3sum-closest/submissions/
  
  
  Leetcode solution
  
  class Solution {
public:
    int threeSumClosest(vector<int>& v, int target) {
        int maxi=10000;
        sort(v.begin(),v.end());
        int l=0,p=0,q=0;
        for(int i=0;i<v.size();i++)
        {
            int left=i+1,right=v.size()-1;
            int ele=target-v[i];
            while(left<right)
            {
                int sum=v[left]+v[right]+v[i];
                if(sum==target)
                {
                    return target;
                }
                if(abs(target-sum)<abs(target-maxi))
                {
                    maxi=sum;
                }
                if(v[left]+v[right]<ele)
                {
                    left++;
                }
                else
                {
                    right--;
                }
                
            }
        }
        return maxi;
        
    }
};
