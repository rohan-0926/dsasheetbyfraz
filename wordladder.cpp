Day - 22 Word Ladder 
Link - https://leetcode.com/problems/word-ladder/


Leetcode solution


class Solution {
public:
    int ladderLength(string b, string e, vector<string>& v) {
        unordered_set<string>st;
        bool flag=false;
        for(auto it:v)
        {
            if(it==e)
            {
                flag=true;
            }
            st.insert(it);
        }
        if(!flag)
        {
            return 0;
        }
        queue<string>q;
        q.push(b);
        int res=0;
        while(!q.empty())
        {
            res++;
            int len=q.size();
            while(len--)
            {
                string str=q.front();
                q.pop();
                for(int i=0;i<str.size();i++)
                {
                    string temp=str;
                    for(char ch='a';ch<='z';ch++)
                    {
                        temp[i]=ch;
                        if(temp==str)
                        {
                            continue;
                        }
                        if(temp==e)
                        {
                            return res+1;
                        }
                        if(st.find(temp)!=st.end())
                        {
                            q.push(temp);
                            st.erase(temp);
                        }
                    }   
                }
            }
        }
        return 0;
    }
};
