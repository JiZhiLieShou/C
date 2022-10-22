#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    gets(str1);
    /*
        str2 =  
    */
    int re = strcmp(str1, str2);
    re = (re == 0 ? re : (re > 0 ? 1 : -1));
    printf("%d\n", re);
}