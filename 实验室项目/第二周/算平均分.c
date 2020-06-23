#include<stdio.h>
int main()
{
    float a,b,c;
    float sum;
    float ave;
    scanf( "%f %f %f",&a,&b,&c);
     sum=a+b+c;
     ave=(a+b+c)/3;
    printf( "%.2f %.2f\n",sum,ave);
    return 0;
}
