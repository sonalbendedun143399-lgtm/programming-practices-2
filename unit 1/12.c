//Enter name and print vertically
#include<stdio.h>
#include<string.h>
int main()
{
    char name[50];
    int i=0;

    printf("Enter your name:");
    scanf("%s",name);

    while(name[i]!='\0')
    {
        printf("%c\n",name[i]);
        i++;
    }
    return 0;
}
