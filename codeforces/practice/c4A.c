#include <stdio.h>
#include <stdlib.h>
long long a[200005];
long long b[200005];
long long diff[200005];
int compare(const void *a, const void *b)
{
    long long a1 = *(const long long *)a;
    long long a2 = *(const long long *)b;
    if (a1 < a2)
        return -1;
    if (a1 > a2)
        return 1; // i realized this that normal compare function wont work here due to long long datatype
    return 0;
}
int main()
{
    long long t;

    scanf("%lld", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &b[i]);
        }
        for (int i = 0; i < n; i++)
        {
            diff[i] = a[i] - b[i];
        }

        qsort(diff, n, sizeof(long long), compare);
        int m_f = 1, c_f = 1;
        for (int i = 1; i < n; i++)
        {
            if (diff[i] == diff[i - 1])
            {
                c_f++;
            }
            else
            {
                c_f = 1;
            }
            if (c_f > m_f)
            {
                m_f = c_f;
            }
        }
        printf("%d\n", m_f);
    }

    return 0;
}