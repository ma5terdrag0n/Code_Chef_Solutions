/*
*
* Solution By : Pritish Thakkar
* Reference : https://gocodergo.wordpress.com
*
*/
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        if(n==1)
        cout<<1<<endl;
        if(n==2)
        cout<<2<<endl;
        else if(n>2)
        cout<<n/2+1<<endl;
    }
    return 0;
} 
