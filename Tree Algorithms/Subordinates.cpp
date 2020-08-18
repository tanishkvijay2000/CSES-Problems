/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
vector<int> tree[2000005];

void solve(int src, int parent, vector<int>& ans)
{
    int subords = 0;
    for(int child : tree[src])
    {
        if(child!=parent)
        {
            solve(child,src,ans);
            subords += (1+ans[child]);
        }
    }
    ans[src] = subords;
}

int main()
{
    int n;
    cin>>n;
    for(int i = 2;i<=n;i++)
    {
        int x;
        cin>>x;
        tree[i].push_back(x);
        tree[x].push_back(i);
    }
    vector<int> ans(n+1);
    solve(1,0,ans);
    for(int i = 1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
