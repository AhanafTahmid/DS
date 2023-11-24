//15. Write a program to display the adjacency list of a graph.
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int v,e;
    cin>>v>>e;
    vector<int> graph[1000];
    for(int i=1;i<=e;i++){
        int v1,v2;
        cin>>v1>>v2;
        graph[v2].push_back(v1);//3 -> 1
        graph[v1].push_back(v2);
    }


    //int size = graph[1].size();
    for(int i=0;i<graph[1].size();i++){
        cout<<i<<" : ";
        
            cout<<graph[1][i]<<endl;
        
        cout<<endl;
    }
    cout<<endl;

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}