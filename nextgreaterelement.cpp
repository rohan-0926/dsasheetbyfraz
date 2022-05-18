Day - 18 NExt Greater ELement
Link - https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1


GFG solution


lass Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long>res(n,-1);
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && arr[i]>arr[st.top()])
            {
                res[st.top()]=arr[i];
                st.pop();
            }
            st.push(i);
        }
        return res;
    }
};
