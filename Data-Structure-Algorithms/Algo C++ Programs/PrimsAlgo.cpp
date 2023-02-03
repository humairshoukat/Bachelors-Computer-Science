/* Prim's Algorithm */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int n, i, j, a[10][10], ne = 1;
    int visited[10] = { 0 }, min, mincost = 0, u, v;
    cout << "Enter the number of nodes: ";
    cin >> n;
    cout << "Enter the adjacency matrix: ";
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 0)
                a[i][j] = 999;
        }
    visited[1] = 1;
    cout << "n";
    while (ne < n)
    {
        for (i = 1, min = 999; i <= n; i++)
            for (j = 1; j <= n; j++)
                if (a[i][j] < min)
                    if (visited[i] != 0)
                    {
                        min = a[i][j];
                        u = i;
                        v = j;
                    }
        if (visited[u] == 0 || visited[v] == 0)
        {
            cout << "n Edge " << ne++ << ":(" << u << "," << v << ") cost:" << min;
            mincost += min;
            visited[v] = 1;
        }
        a[u][v] = a[v][u] = 999;
    }
    cout << "n Minimum cost:" << mincost;
    return 0;
}

