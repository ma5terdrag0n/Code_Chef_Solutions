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
long int t;
cin>>t;
long int i,n[t],a,rem,sum;
for(i=0;i<t;i++)
{
cin>>n[i];
}
   for(i=0;i<t;i++)
   {
     a=n[i];
     while(a>0)
     {
       rem=a%10;
       a=a/10;
       sum+=rem;
     }
     cout<<sum<<endl;
     sum=0;
   }
return 0;
} 
