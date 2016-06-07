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
	short t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int t,hcf;
		long long lcm=a*b;
		if(a>b)
		{
			t=a;
			a=b;
			b=t;
		}
		while(a>0)
		{
			t=b%a;
			b=a;
			a=t;
		}
		hcf=b;
		lcm/=hcf;
		cout<<hcf<<" "<<lcm<<endl;
	}
	return 0;
}  
