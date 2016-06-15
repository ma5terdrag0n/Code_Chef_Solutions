/*
*
* Solution By : Pritish Thakkar
* Reference : https://gocodergo.wordpress.com
*
*/
#include<stdio.h>
#include<math.h>
int digits(int num){
	int i=0;
	while(num>0){
		num/=10;
		i++;
	}
	return i;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a;
		scanf("%d",&a);
		int k=digits(a);
		int s=pow(10,k-1);
		int first=a/s;
		int last=a%10;
		printf("%d\n",first+last);
	}
	return 0;
} 
