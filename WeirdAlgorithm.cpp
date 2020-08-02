/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

 
#include <iostream>
 
using namespace std;
 
int main()
{
    long long n;
    cin>>n;
    cout<<n<<" "; 
    while(n!=1)
    {
        if(n%2==0)
        {
            n = n/2;
            cout<<n<<" ";
        }
        else
        {
            n = 3*n +1;
            cout<<n<<" ";
        }
    }
    return 0;
}
