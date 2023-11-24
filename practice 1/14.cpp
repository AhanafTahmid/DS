//Write a program to display the adjacency matrix of a graph.
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int v,e;
    cin>>v>>e;
    int graph[100][100]={};
    for(int i=1;i<=e;i++){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1][v2]=1;
        graph[v2][v1]=1;
    }

    for(int i=1;i<=v;i++){
        for(int j=1;j<=v;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}