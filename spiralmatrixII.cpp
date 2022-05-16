Day - 16 Spiral Matrix II
Link - https://leetcode.com/problems/spiral-matrix-ii/submissions/



Leetcode solution
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<int>row;
       vector<vector<int>>res(n,vector<int>(n));
        int top=0,right=n-1,left=0,down=n-1;
        int ele=1,dir=0;
        while(top<=down && left<=right)
        {
            if(dir==0)
            {
                for(int i=top;i<=right;i++)
                {
                    res[top][i]=ele;
                    ele++;
                }
                dir=1;
                top++;
            }
            else if(dir==1)
            {
                for(int i=top;i<=down;i++)
                {
                    res[i][right]=ele;
                    ele++;
                }
                dir=2;
                right--;
            }
            else if(dir==2)
            {
                for(int i=right;i>=left;i--)
                {
                    res[down][i]=ele;
                    ele++;
                }
                dir=3;
                down--;
            }
            else if(dir==3)
            {
                for(int i=down;i>=top;i--)
                {
                    res[i][left]=ele;
                    ele++;
                }
                dir=0;
                left++;
            }
        }
      return res;
        
    }
};
