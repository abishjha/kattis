#include<iostream>
#include<vector>
#include<bitset>

const int maxN = 10000;
std::vector < int > G[maxN];
std::bitset < maxN > visited;
int input[maxN];
int total;

void depthFirstSearch(int start, int num) {
     visited[start] = true;
      total += input[start];
     for (int v : G[ start ]) {
          if (visited[v] == false){
               depthFirstSearch(v, num);
          }
     }
}

void adjList(int n, int m){
     int f1, f2;
     for (int i = 0; i < n; i++) {
          G[i].clear();
     }

     for (int i = 0; i < m; i++) {
          std::cin >> f1 >> f2;
          G[ f1 ].push_back( f2 );
          G[ f2 ].push_back( f1 );
     }
}

int main() {
     int n, m;
     std::cin >> n >> m;
     for(int i = 0; i < n; i++)
      std::cin >> input[i];
     
     adjList(n, m); //read in the list
     
     visited.reset();

     for (int i = 0; i < n; i++) {
          total = 0;
          if (visited[i] == false)
            depthFirstSearch(i, n);
            
          if(total != 0){
            std::cout << "IMPOSSIBLE\n";
            return 0;
          }
     }
     std::cout << "POSSIBLE\n";
     return 0;
}