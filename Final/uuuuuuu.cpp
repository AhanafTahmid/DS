#include <bits/stdc++.h>

using namespace std;

#define MAX 100 //maximum node
vector <int> edges[MAX];
vector <int> cost[MAX]; //parallel vector to store costs;

int main() {
   int numNodes, numEdges;

    cin>>numNodes>>numEdges;
    for (int i = 1; i <= numEdges; i++) {
        int x, y;
        cin>>x>>y;
        edges[x].push_back(y);
        edges[y].push_back(x);
        cost[x].push_back(1);
        cost[y].push_back(1);

  }
    int size=edges[1].size();//showing just the number 1's adjacency list
    for(int i=0; i < size ; i++){
        printf("%d ",edges[1][i]);
    }


  return 0;
}