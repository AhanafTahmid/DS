//17. Write a program to interchange the row and column of a matrix.
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    /*  3 3
        4 5 6
        6 7 5
        1 2 3
    */
    int ar[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cin>>ar[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cout<<ar[j][i];
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