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
  long long int i,n,m,g=0;
  cin>>n>>m;
  long long int a;
  for(i=0;i<n;i++)
  {
    cin>>a;
    if(a%m==0) g+=1;
  }
  cout<<g<<endl;
return 0;
}
