#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long n;
    cin>>n;
    long long sum = (n*(n+1))/2;
    long long total = sum/2;
    vector <long long> a1;
    vector <long long> a2;
    if(sum & 1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        while(n)
        {
            if(total-n>=0)
            {
                a1.push_back(n);
                total = total-n;
            }
            else
            {
                a2.push_back(n);
            }
            n--;
        }
        cout<<a1.size()<<endl;
        for(long long i = 0;i<a1.size();i++)
        {
            cout<<a1[i]<<" ";
        }
        cout<<endl;
        cout<<a2.size()<<endl;
        for(long long i = 0;i<a2.size();i++)
        {
            cout<<a2[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}