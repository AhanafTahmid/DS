//6. Write a program to create an array of n elements and then delete an element from the list.
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int ar[n];
    /*
        6
        5 6 1 3 4 6
        3
    */
    for (int i = 0; i < n; ++i) {
        cin >> ar[i];
    }
    int pos;
    cin>>pos;

    for(int i=pos;i<n;++i){
        ar[i]=ar[i+1];
    }
    n--;

    for (int i = 0; i < n; ++i) {
        cout << ar[i]<<" ";
    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}