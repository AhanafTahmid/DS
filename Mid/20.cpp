//20. Write a program to calculate the row sum and column sum of a matrix.
#include <iostream>
using namespace std;

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

    int rs=0,cs=0;

    for(int i=0;i<n;i++){
        rs = 0;
        for(int j=0;j<k;j++){
            rs+=ar[i][j];
        }
        cout<<"Row"<<i+1<<": "<<rs<<endl;
    }

    for(int j=0;j<k;j++){
        cs = 0;
        for(int i=0;i<n;i++){
            cs+=ar[i][j];
        }
        cout<<"Col"<<j+1<<": "<<cs<<endl;
    }

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}