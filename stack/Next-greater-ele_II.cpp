#include <bits/stdc++.h>
using namespace std;

vector<int> nge(vector<int> &arr, int n)
{
    vector<int> ans(n, -1);
    stack<int> st;
    for (int i = 2*n-1 ;i>=0;i--)
    {
        while (!st.empty() && st.top() <= arr[i % n])
        {  
           st.pop();
        }
        if(!st.empty()){
            ans[i%n]=st.top();
        }
        st.push(arr[i%n]);
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 5, 3, 4, 2 };
    vector<int> res = nge(arr, arr.size());
    for (int x : res)
    {
        cout << x << " ";
    }

    return 0;
}