//count space and vowels in a string
#include<stdio.h>
#include<string.h>
int main()
{
     char str[100];
    int i=0,spaces=0,vowels=0;

    printf("enter a string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)

    {
        if(str[i]==' ')
            spaces++;
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            vowels++;
    }
    printf("spaces=%d\n",spaces);
    printf("vowels=%d\n",vowels);
    return 0;
}
