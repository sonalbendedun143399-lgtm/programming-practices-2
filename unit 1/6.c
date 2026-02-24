//revres array
#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    int a[100];

    printf("Enter numbr of elements:");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Array elements in reverse order:\n");
     for(i=n-1;i>=0;i--)
     {
         printf("%d",a[i]);
     }
    return 0;
}


