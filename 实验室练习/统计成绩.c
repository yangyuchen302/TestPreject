#include<stdio.h>
int main()
{
    int n;
    double score;
    double min=100;
    double max=0;
    double sum=0;
    double avg;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%lf",&score);
        sum +=score;
        if(min>score)
        {
            min =score;
        }
        if(max<score)
        {
            max=score;
        }
        avg=sum/n;
    }
       printf( "%.2lf %.2lf %.2lf\n",max,min,sum/n);

}
