Day -16 Spiral matrix
Link - https://leetcode.com/problems/spiral-matrix/submissions/



Leetcode solution

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& v) {
        int top=0,right=v[0].size()-1,left=0,down=v.size()-1;
        int dir=0;
        vector<int>row;
        while(top<=down && left<=right)
        {
            if(dir==0)
            {
                for(int i=top;i<=right;i++)
                {
                    row.push_back(v[top][i]);
                }
                top++;
            }
            else if(dir==1)
            {
                for(int i=top;i<=down;i++)
                {
                    row.push_back(v[i][right]);
                }
                right--;
            }
            else if(dir==2)
            {
                for(int i=right;i>=left;i--)
                {
                    row.push_back(v[down][i]);
                }
                down--;
            }
            else if(dir==3)
            {
                for(int i=down;i>=top;i--)
                {
                    row.push_back(v[i][left]);
                }
                left++;
            }
            dir=(dir+1)%4;
        }
        return row;
        
    }
};
