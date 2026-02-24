//reverse string function with and without string function
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,len;

    printf("enter a string:");
    gets(str);
    len=strlen(str);

    printf("reverse string with function is:\n");
   for(i=len-1;i>=0;i--)
      printf("%c",str[i]);

    printf("\nreversed string without function:");
    for(i=0;str[i]!='\0';i++);
    for(i=i-1;i>=0;i--)
        printf("%c",str[i]);
    return 0;
}
