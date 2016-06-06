/*
*
* Solution By : Pritish Thakkar
* Reference : https://gocodergo.wordpress.com/
*
*/
#include <iostream>
using namespace std;
int main()
{
int a;
float b;
cin>>a;
cin>>b;
if(a%5!=0||(float)a>b-5)
{
cout<<endl<<b;
}
else
{
cout<<endl<<float(b-0.5-a);
}
return 0;
}   
