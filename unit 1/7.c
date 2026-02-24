//merge two array
#include<stdio.h>
#include<string.h>
int main()
{
    int n1,n2,i,j;
    int a[50],b[50],c[100];

    printf("Enter size of first array:");
    scanf("%d",&n1);
    printf("Enter elements:\n");
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);

     printf("Enter size of second array:");
        scanf("%d",&n2);
     printf("Enter elements:\n");
     for(i=0;i<n2;i++)
        scanf("%d",&b[i]);

     for(i=0;i<n1;i++)
            c[i]=a[i];
     for(j=0;j<n2;j++)
            c[i+j]=b[j];

         printf("Merged array:\n");
         for(i=0;i<n1+n2;i++)
            printf("%d",c[i]);

    return 0;
}

