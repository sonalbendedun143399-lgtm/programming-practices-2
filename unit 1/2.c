//Enter N elements and find total and average of them.

#include<stdio.h>
int main()
{
    int a[100];
    int n,i;
    int sum=0;
    float avg;

    printf("Enter number of elements:");
    scanf("%d",&n);

     printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/(float)n;

    printf("Total=%d\n",sum);
    printf("Average=%f\n",avg);

    return 0;
}
