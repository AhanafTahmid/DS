//18. Write a program to add two matrices.
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    /*  3 3
        4 5 6
        6 7 5
        1 2 3

        4 5 6
        6 7 5
        1 2 3
    */
    int ar1[100][100],ar2[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cin>>ar1[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cin>>ar2[i][j];
        }
    }
    

    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cout<<ar1[i][j]+ar2[i][j]<<" ";
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