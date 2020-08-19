#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    set <int> arr;
    for(int i = 0;i<n;i++)
    {
        int t;
        cin>>t;
        arr.insert(t);
    }
    cout<<arr.size()<<endl;
    return 0;
}