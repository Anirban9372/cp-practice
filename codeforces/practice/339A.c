#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int compare(const void *a, const void *b)
{
    return *(char *)a - *(char *)b;
}
int main()
{
    char s[100];
    char digits[100];
    int count = 0;
    scanf("%s", s);
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] != '+')
        {
            digits[count] = s[i];
            count++;
        }
    }
    qsort(digits, count, sizeof(char), compare);
    for (int i = 0; i < count; i++)
    {
        if (i > 0)
        {
            printf("+");
        }
        printf("%c", digits[i]);
    }
    return 0;
}