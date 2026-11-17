#include <stdio.h>
int main()
{
    char s1[56] = "Harry";
    char s2[56] = "bhai";
    strcat(s1, s2);
    printf(" %s %s", s1, s2);

    return 0;
}