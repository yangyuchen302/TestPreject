#include<stdio.h>
int main()
{
    int  grade;
    while(scanf("%d",&grade)!=EOF)
        if(grade>=90&& grade<=100)
            printf( "A");
    else if(grade>=80&&grade<=89)
        printf( "B");
    else if(grade>=70&&grade<=79)
        printf( "C");
    else if(grade>=60&& grade<=69)
        printf( "D");
    else if(grade>=0&& grade<=59)
        printf("E" );
    else  if(grade>100||grade<0)
        printf( "F");
    return 0;
}
