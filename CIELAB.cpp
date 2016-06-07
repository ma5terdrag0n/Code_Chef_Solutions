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
 int a,b;
 cin>>a;
 cin>>b;
 int c=a-b;
 if(c%10==9)
 cout<<c-1;
 else
 cout<<1+c;
return 0;
} 
