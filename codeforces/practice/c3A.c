#include <stdio.h>
#include <math.h>

int main()
{
    long long x, y;
    long long found_count = 0; // Tracks number of squares found

    if (scanf("%lld%lld", &x, &y) != 2)
        return 0;

    for (long long i = x; i <= y; i++)
    {
        // 1. Calculate sqrt and cast to long long
        long long root = (long long)sqrt((double)i);

        // 2. Check if the root squared equals the original number
        if (root * root == i)
        {
            printf("%lld ", i);
            found_count++; // Increment only when a square is found
        }
    }

    // 3. If no squares were found, print -1
    if (found_count == 0)
    {
        printf("-1");
    }
    printf("\n");

    return 0;
}