#include<iostream>
#include<vector>
#include<bitset>

const int maxN = 200000;
std::vector < int > G[maxN];
std::bitset < maxN > visited;

void depthFirstSearch(int start, int num) {
     visited[start] = true;

     for (int v : G[ start ]) {
          if (visited[v] == false)
               depthFirstSearch(v, num);
     }
}

int main() {
     int n, m, house1, house2;
     std::cin >> n >> m;

     for (int i = 1; i <= n; i++) {
          G[i].clear();
     }

     for (int i = 0; i < m; i++) {
          std::cin >> house1 >> house2;
          G[ house1 ].push_back( house2 );
          G[ house2 ].push_back( house1 );
     }

     visited.reset();
     depthFirstSearch(1, n);

     bool check = true;
     for (int i = 1; i <= n; i++) {
          if (visited[i] == 0) {
               printf("%d\n", i);
               check = false;
          }
     }

     if (check == true)
          printf("%s\n", "Connected");

     return 0;
}