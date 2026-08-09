#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            printf("%d %d %d ", i + 1, n + 1 + 2 * i, n + 2 + 2 * i);
        }
        printf("\n");
    }

    return 0;
}