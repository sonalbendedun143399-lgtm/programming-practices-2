//Identification of positive,negative,even and odd
#include<stdio.h>
int main()
{
    int a[100];
    int n,i;
    int pos=0,neg=0,odd=0,even=0;


    printf("Enter number of elements:");
    scanf("%d",&n);

     printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }

    for(i=0;i<n;i++)
    {
        if(a[i]>0)
            pos++;
        if(a[i]<0)
            neg++;
            if(a[i]%2==0)
            even++;
        else
            odd++;
    }


    printf("positive=%d\n",pos);
    printf("negative=%d\n",neg);
    printf("even=%d\n",odd);
    printf("odd=%d\n",even);


    return 0;
}

