#include <stdio.h>
#include <stdlib.h>

// Comparator function to sort long longs in DESCENDING order
int compare_desc(const void *a, const void *b)
{
    long long val1 = *(const long long *)a;
    long long val2 = *(const long long *)b;

    if (val1 < val2)
        return 1;
    if (val1 > val2)
        return -1;
    return 0;
}

void solve()
{
    int n;
    scanf("%d", &n);

    long long b[105]; // The problem states max n is 100
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &b[i]);
    }

    // Step 1: Sort the array in descending order
    qsort(b, n, sizeof(long long), compare_desc);

    // Step 2: Verify the Euclidean property
    int valid = 1; // 1 means true, 0 means false
    for (int i = 0; i < n - 2; i++)
    {
        // If the sequence breaks the modulo rule, it's invalid
        if (b[i] % b[i + 1] != b[i + 2])
        {
            valid = 0;
            break;
        }
    }

    // Step 3: Output the result
    if (valid)
    {
        printf("%lld %lld\n", b[0], b[1]);
    }
    else
    {
        printf("-1\n");
    }
}

int main()
{
    int t;
    // Read number of test cases
    if (scanf("%d", &t) == 1)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}