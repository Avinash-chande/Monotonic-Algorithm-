#include <bits/stdc++.h>
using namespace std;
vector<int>nge_left(vector<int> &arr ,int n){
      
    vector<int> ans(n, 1);
    stack<int> st;
    for (int i = n-1; i>=0; i--)
    {
        while (!st.empty() && arr[st.top()] < arr[i])
        {
            ans[st.top()] = st.top()-i;
            st.pop();
        }
        st.push(i);
    }
    // below loop for  doing empty whole arr 
    while (!st.empty())
    {
       ans[st.top()] =st.top()+1;
       st.pop();
    }
    
    return ans;
}

int main(){

    vector<int> arr = {100,80,55,70,60,75,85};
    vector<int> res = nge_left(arr, arr.size());
    for (int x : res)
    {
        cout << x << " ";
    }

return 0;
}