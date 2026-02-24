//enter a string and find out length of string with and without string function
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int lenwith=0,i=0,lenwithout=0;

    printf("Enter a string:");
    gets(str);

    while(str[i]!='\0')
        {
            lenwithout++;
            i++;
        }
        lenwith=strlen(str);

    printf("Length using string function=%d\n",lenwith);

    printf("length without using string function=%d\n",lenwithout);

    return 0;
}
