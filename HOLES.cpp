/*
*
* Solution By : Pritish Thakkar
* Reference : https://gocodergo.wordpress.com/
*
*/
#include<iostream>
using namespace std ;
void op(string s);
int main(){ 
  int  t,i;
  cin>>t;
  string s[t];
  for(i=0;i<t;i++)
  cin>>s[i];
  for(i = 0;i<t;i++)
  op(s[i]);
}
void op(string s){
  int n ,a=0,i;
  n=s.size();
  for(i=0;i<n;i++){
     if (s[i]=='A'||s[i]=='D'||s[i]=='O'|s[i]=='R'||s[i]=='P' ||s[i]=='Q') a++;
     if(s[i]=='B') a=a+2;
   }
cout<<a<<endl;
}
