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
long long int n,k,max,min;
cin>>n>>k;
long long int a[n],i;
for(i=0;i<n;i++)
cin>>a[i];
min=a[0];
max=a[0];
for(i=1;i<n;i++)
{
if(a[i]>max)
max=a[i];
if(a[i]<min)
min=a[i];
}
if(k==0)
for(i=0;i<n;i++)
cout<<a[i]<<" ";
else if(k%2!=0)
for(i=0;i<n;i++)
cout<<max-a[i]<<" ";
else
for(i=0;i<n;i++)
cout<<a[i]-min<<" ";
return 0;
}
