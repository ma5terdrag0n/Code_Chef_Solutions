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
   long long int n[1000000],i,a;
   for(i=0;i<t;i++){
   cin>>n[i];
   }
   for(i=0;i<t;i++)
   {
   a=n[i];
 
   if(a%2!=0) cout<<"BOB"<<endl;
   if(a%2==0) cout<<"ALICE"<<endl;
 
   }
   return 0;
}
