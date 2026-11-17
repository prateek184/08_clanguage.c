#include <stdio.h>
#include <stdio.h>
int main()
{
    char st[] = "Harry";

    // printf("%d",strlenn(st));
    char target[30];
    strcpy(target, st); // target now contains"Harry"
    printf("%s %s", st, target);
    return 0;
}