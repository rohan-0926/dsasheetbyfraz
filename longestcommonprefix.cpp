Day - 23 Longest Common Prefix
Link - https://leetcode.com/problems/longest-common-prefix/

Leetcode solution


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        vector<vector<string>>res;
        for(int i=0;i<strs.size();i++)
        {
            string str=strs[i];
            string check="";
            vector<string>ps;
            for(int j=0;j<str.size();j++)
            {
                check+=str[j];
                ps.push_back(check);
            }
            res.push_back(ps);
        }
        unordered_map<string, int>mp;
        for(int i=0;i<res.size();i++)
        {
            vector<string>row=res[i];
            for(int j=0;j<row.size();j++)
            {
                mp[row[j]]++;
            }
        }
        vector<string>ans;
        for(auto it:mp)
        {
            if(it.second>=res.size())
            {
                ans.push_back(it.first);
            }
        }
        sort(ans.begin(),ans.end());
        if(ans.size()==0)
        {
            return "";
        }
        return ans[ans.size()-1];
        
    }
};
