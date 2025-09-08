#include <bits/stdc++.h>
using namespace std;

vector<int>nse_left(vector<int> &arr , int n){
    vector<int> ans(n, -1);
    stack<int> st;
    for (int i = n-1; i>=0; i--)
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

int main(){
 vector<int> arr = {4,13,11,5,9,7,8,6};
    vector<int> res = nse_left(arr , arr.size());
    for (int x : res)
    {
        cout << x << " ";
    }
return 0;
}