//copy the elements of one array into another
#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    int a[100],b[100];

    printf("Enter numbr of elements:");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
     {
         b[i]=a[i];
     }
     printf("Element of second array after copying:\n");
     for(i=0;i<n;i++)
     {
         printf("%d",b[i]);
     }
    return 0;
}
