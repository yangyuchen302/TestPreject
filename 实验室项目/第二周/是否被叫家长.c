#include<stdio.h>
int main()
{
    int m,c,e;
    int sum;
    int avg;
    scanf( "%d %d %d",&m,&c,&e);
    sum=m+c+e;
    avg=sum/3;
    if(avg>=60)
       {
           printf( "NO");
       }
    else{
           printf( "YES");
       }



}
