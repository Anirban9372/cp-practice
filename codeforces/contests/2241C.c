#include <stdio.h>
#include <string.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        char s[105];
        scanf("%d %s", &n, s);

        int runs = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
                runs++;
        }

        printf("%d\n", (runs == 2) ? 2 : 1);
    }
    return 0;
}