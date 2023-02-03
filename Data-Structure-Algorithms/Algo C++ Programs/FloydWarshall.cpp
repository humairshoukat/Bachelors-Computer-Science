/* Floyd Warshall Algorithm in C++ */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define INF 99999

void floydWarshall(int graph[][4]) {
  int dist[4][4], i, j, k;

  for (i = 0; i < 4; i++)
    for (j = 0; j < 4; j++)
      dist[i][j] = graph[i][j];

  for (k = 0; k < 4; k++) {
    for (i = 0; i < 4; i++) {
      for (j = 0; j < 4; j++) {
        if (dist[i][k] + dist[k][j] < dist[i][j])
          dist[i][j] = dist[i][k] + dist[k][j];
      }
    }
  }

  cout << "The following matrix shows the shortest distances"
          " between every pair of vertices \n";
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      if (dist[i][j] == INF)
        cout << "INF"
             << "     ";
      else
        cout << dist[i][j] << "     ";
    }
    cout << endl;
  }
}

int main() {
  int graph[4][4] = {{0, 5, INF, 10}, {INF, 0, 3, INF}, {INF, INF, 0, 1}, {INF, INF, INF, 0}};
  floydWarshall(graph);
}