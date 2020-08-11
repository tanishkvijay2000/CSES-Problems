#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<1<<endl;
    }
    else if(n<=3)
    {
        cout<<"NO SOLUTION"<<endl;
    }
    else
    {
        if(n%2==0)
        {
            for(int i = 2;i<=n;i+=2)
            {
                cout<<i<<" ";
            }
            for(int i = 1;i<=n-1;i+=2)
            {
                cout<<i<<" ";
            }
        }
        else
        {
            for(int i = 2;i<=n-1;i+=2)
            {
                cout<<i<<" ";
            }
            for(int i = 1;i<=n;i+=2)
            {
                cout<<i<<" ";
            }
        }
    }
    return 0;
}