#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_VERTICES 200005

// Graph representation using an edge pool (adjacency list)
typedef struct
{
    int to;
    int next;
} Edge;

Edge edges[MAX_VERTICES * 2];
int head[MAX_VERTICES];
int edge_cnt = 0;

int sz[MAX_VERTICES];
long long a[MAX_VERTICES];

// Function to add an undirected edge
void add_edge(int u, int v)
{
    edges[++edge_cnt].to = v;
    edges[edge_cnt].next = head[u];
    head[u] = edge_cnt;

    edges[++edge_cnt].to = u;
    edges[edge_cnt].next = head[v];
    head[v] = edge_cnt;
}

// DFS to calculate the size of each subtree
void dfs(int u, int p)
{
    sz[u] = 1;
    for (int i = head[u]; i != 0; i = edges[i].next)
    {
        int v = edges[i].to;
        if (v != p)
        {
            dfs(v, u);
            sz[u] += sz[v];
        }
    }
}

void solve()
{
    int n;
    if (scanf("%d", &n) != 1)
        return;

    // Reset graph for the current testcase
    edge_cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        head[i] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        scanf("%d %d", &u, &v);
        add_edge(u, v);
    }

    // Precompute subtree sizes
    dfs(1, 0);

    long long squarewf = 0;

    for (int c = 1; c <= n; c++)
    {
        // Check if the central vertex's value is a perfect square
        long long root = round(sqrt((double)a[c]));
        if (root * root == a[c])
        {
            long long e1 = 0, e2 = 0, e3 = 0;

            // Gather the sizes of all components connected to c
            for (int i = head[c]; i != 0; i = edges[i].next)
            {
                int v = edges[i].to;
                long long s = 0;

                if (sz[v] < sz[c])
                {
                    s = sz[v]; // v is a child in the DFS tree
                }
                else
                {
                    s = n - sz[c]; // v is the parent in the DFS tree
                }

                // Maintain running combinatorial sums
                // e3: picking 3 outer components
                // e2: picking 2 outer components (paired with 'c')
                e3 += e2 * s;
                e2 += e1 * s;
                e1 += s;
            }

            // Aggregate valid triplets centered exactly at c
            squarewf += e3 + e2;
        }
    }

    printf("%lld\n", squarewf);
}

int main()
{
    int t;
    if (scanf("%d", &t) == 1)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}