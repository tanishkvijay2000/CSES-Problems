#include <iostream>
 
using namespace std;
#define mod 1000000007
int main()
{
    long long n;
    cin>>n;
    long long ans = 1;
    for(long long i=0;i<n;i++)
    {
        ans=(ans*2)%mod;
    }
    cout<<ans<<endl;
    return 0;
}