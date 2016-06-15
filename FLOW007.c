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
   		int num;
   		scanf("%d",&num);
   		int  rev=0;
   		while(num){
   			rev=rev*10+num%10;
   			num/=10;
   		}
   		printf("%d",rev);
   		printf("\n");
	}
 
return 0;
} 
