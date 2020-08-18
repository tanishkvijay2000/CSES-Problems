/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    long long k;
    cin>>k;
    for(long long n = 1;n<=k;n++)
    {
        cout<< n * n*(n * n-1)/2 - 4*(n-1)*(n-2)<<endl;
    }
    return 0;
}
