#include <iostream>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
        {
            swap(a,b);
        }
        if(2*a<b)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            a = a%3;
            b = b%3;
            if(a>b)
            {
                swap(a,b);
            }
            if((a==0 && b==0) || (a==1 && b==2))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}