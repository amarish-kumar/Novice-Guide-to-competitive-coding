#include<stdio.h>
#include<string.h>
main()
{
    char str[123],d,n='0',p='10';
    int i;
    gets(str);
    i=strlen(str);
    while(i--)
    {
       d=str[i];
       n=n*p+d;
    }
    printf("%c",n);
}
