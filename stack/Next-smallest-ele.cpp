#include <bits/stdc++.h>
using namespace std;

vector<int> nse(vector<int> &arr, int n)
{
    vector<int> ans(n, -1);
    stack<int> st;
    for (int i = 0; i <n; i++)
    {
        while (!st.empty() && arr[st.top()] > arr[i])
        {
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    return ans;
}
int main()
{
    vector<int> arr = {7,9,12,10,14,8,3,6,9};
    vector<int> res = nse(arr , arr.size());
    for (int x : res)
    {
        cout << x << " ";
    }

    return 0;
}