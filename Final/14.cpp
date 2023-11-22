//14. Write a program to display the adjacency matrix of a graph.
/*
Sample Input: 

// For 3 vertices, 4 edges
3 4  
1 3
3 2
2 1
1 1

*/

//adjacency matrix space complexity is worse than adjacency list

#include <bits/stdc++.h>
using namespace std;
void adjacency_matrix(){
    int v,e;//v=vertices, e = edges
    cin>>v>>e;
    int graph[v+1][v+1]={};
    for(int i=1;i<=e;i++){
        int v1,v2;//vertex 1, vertex 2
        cin>>v1>>v2;
        graph[v1][v2]=1;
        graph[v2][v1]=1;//for undirected graph, it is 2 way
    }



    //Display the graph
    cout << "Adjacency Matrix:" << endl;

    // Displaying the adjacency matrix
    for (int i = 1; i <=v; i++) {
        for (int j = 1; j <=v; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)adjacency_matrix(); 
    return 0;
}