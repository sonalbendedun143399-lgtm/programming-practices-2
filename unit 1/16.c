//compare 2 strings and check 2 are same or not
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    printf("enter first string:");
    gets(str1);
    printf("enter 2nd string:");
    gets(str2);
    if(strcmp(str1,str2)==0)
        printf("both string are equal");
    else
        printf("both string are not equal");
    return 0;
}
