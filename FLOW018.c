/*
*
* Solution By : Pritish Thakkar
* Reference : https://gocodergo.wordpress.com
*
*/
#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long int fact=1;
		int num;
	    scanf("%d",&num);
	    while(num){
	    	fact*=num;
	    	num--;
	    }
	    printf("%lld\n",fact);
	}
	return 0;
} 
