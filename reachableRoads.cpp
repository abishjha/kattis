#include<iostream>
#include<vector>
#include<bitset>

const int maxN = 1005;
std::vector < int > G[maxN];
std::bitset < maxN > visited;

void depthFirstSearch(int start, int num) {
     visited[start] = true;

     for (int v : G[ start ]) {
          if (visited[v] == false)
               depthFirstSearch(v, num);
     }
}

int getInputandProcess() {
     int numOfEndpoints, nodesInGraph, road1, road2;
     std::cin >> numOfEndpoints;
     std::cin >> nodesInGraph;

     for (int i = 0; i < numOfEndpoints; i++)
          G[i].clear();

     for (int i = 0; i < nodesInGraph; i++) {
          std::cin >> road1 >> road2;
          G[road1].push_back(road2);
          G[road2].push_back(road1);
     }

     int count = -1;
     visited.reset();
     for (int i = 0; i < numOfEndpoints; i++) {
            if(visited[ i ] == 0){
                depthFirstSearch(i, numOfEndpoints);
                count++;
            }
     }

     return count;
}

int main() {
     int numOfCities;
     std::cin >> numOfCities;

     int * result = new int[numOfCities];

     for (int i = 0; i < numOfCities; i++)
          result[i] = getInputandProcess();

     for (int i = 0; i < numOfCities; i++)
          std::cout << result[i] << '\n';

     delete[] result;
     return 0;
}
