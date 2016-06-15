#include<stdio.h>
#include<math.h>
 
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long int a,b;
		scanf("%ld%ld",&a,&b);
		if(a<b){
			printf("<");
		}
		else if(a>b){
			printf(">");
		}
		else if(a==b){
			printf("=");
		}
			printf("\n");
	}
	return 0;
} 
