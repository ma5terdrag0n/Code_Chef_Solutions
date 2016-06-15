#include<stdio.h>
int main(void){
int t;
scanf("%d",&t);
while(t--){
int q,p;
double tot=0.0;
scanf("%d%d",&q,&p);
        if(q>1000){
            tot=0.9*p*q;
        }
        else {
            tot=(double)(p*q);
        }
        printf("%f\n",tot);
}
return 0;
}
 
