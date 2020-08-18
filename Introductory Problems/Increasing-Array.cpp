#include <iostream>
 
using namespace std;
 
int main()
{
    long long n;
    cin>>n;
    long long arr[n];
    long long count = 0;
    for(long long i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(long long i = 1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            count = count+(arr[i-1]-arr[i]);
            arr[i] += arr[i-1]-arr[i];
        }
    }
    cout<<count<<endl;
    return 0;
}