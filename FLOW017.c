/*
*
* Solution By : Pritish Thakkar
* Reference : https://gocodergo.wordpress.com
*
*/
#include<stdio.h>
 
int main()
{
    int t,a,b,c,tmp;
 
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&a,&b,&c);
 
        if(a<b)
        {
            tmp=a;
            a=b;
            b=tmp;
        }
        if(a<c)
        {
            printf("%d\n",a);
        }
        else
        {
            if(b>c)
                printf("%d\n",b);
            else
                printf("%d\n",c);
        }
    }
return 0;
}
