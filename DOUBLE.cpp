/*
*
* Solution By : Pritish Thakkar
* Reference : https://gocodergo.wordpress.com/
*
*/
#include<iostream>
using namespace std;
int main(){
   int t;
   cin>>t;
   long long int n[1000000],i;
   for(i=0;i<t;i++){
   cin>>n[i];
   }
   for(i=0;i<t;i++){
   if(n[i]%2==0)
      cout<<n[i]<<endl;
   else
      cout<<n[i]-1<<endl;
   }
   return 0;
}
 
