//15. Write a program to display the adjacency list of a graph.
/*
Sample Input: 

// For 3 vertices, 4 edges
3 4  
1 3
3 2
2 1
1 1

*/


#include <bits/stdc++.h>
using namespace std;
void adjacency_list(){
    int v,e;//v=vertices, e = edges
    cin>>v>>e;
    vector<vector<int>> graph(v + 1); // 2d vector array
    for(int i=1;i<=e;i++){
        int v1,v2;//vertex 1, vertex 2
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);

    }



    //Display the graph
    cout << "Adjacency List:" << endl;

    // Displaying the adjacency list
    for (int i = 1; i <= v; i++) {
        cout << i << ": ";
        for (int j = 0; j < graph[i].size(); j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }


    //showing just the number 1's adjacency list
    int size=graph[1].size();
    for(int i=0; i < size ; i++){
        printf("%d ",graph[1][i]);
    }



}


int main(){

    int t=1;
    //cin >> t;
    while(t--)adjacency_list(); 
    return 0;
}





