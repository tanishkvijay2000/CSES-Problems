#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string input;
    cin>>input;
    int ma = 1;
    int c  =1;
    for(int i = 1;i<input.length();i++)
    {
        if(input[i]==input[i-1])
        {
            c++;
            ma = max(c,ma);
        }
        else if (input[i]!=input[i-1])
        {
            ma = max(c,ma);
            c = 1;
        }
    }
    cout<<ma<<endl;
    return 0;
}