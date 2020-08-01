#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d %d\n",&a,&b)!=EOF)
    {
    if(a>b)
        printf("%d>%d\n",a,b);
    if(a<b)
        printf("%d<%d\n",a,b);
    if(a==b)
        printf("%d=%d\n",a,b);

    }
}
