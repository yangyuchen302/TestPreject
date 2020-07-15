#include<stdio.h>
int main()
{
    int N;
    scanf( "%d",&N);
    if(N%2==0)
        printf("%d %d",N/2,N/2);
    else
        printf( "%d %d",N/2+1,N/2);
    return 0;


}
