
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int arr1[n];
    int arr2[m];
    for(int i = 0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i = 0;i<m;i++)
    {
        cin>>arr2[i];
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    int i = 0;
    int j = 0;
    int ans = 0;
    while(n>0 && m>0)
    {
        if(arr2[j]==arr1[i])
        {
            n--;
            m--;
            ans++;
            i++;
            j++;
        }
        else if(arr2[j]>arr1[i])
        {
            if(arr2[j]-k<=arr1[i])
            {
                n--;
                m--;
                ans++;
                i++;
                j++;
            }
            else
            {
                i++;
                n--;
            }
        }
        else if(arr2[j]<arr1[i])
        {
            if(arr2[j]+k>=arr1[i])
            {
                n--;
                m--;
                ans++;
                i++;
                j++;
            }
            else
            {
                j++;
                m--;
            }
        }
        else
        {
            j++;
            m--;
        }
    }
    cout<<ans<<endl;
    ret