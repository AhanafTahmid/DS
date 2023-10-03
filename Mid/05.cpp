//5. Write a program to create an array of n elements and then insert an element to the list.
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
        4
    */
    for (int i = 0; i < n; ++i) {
        cin >> ar[i];
    }
    int pos;
    cin>>pos;
    int element;
    cin>>element;

    n++;
    for(int i=n-1;i>pos;--i){
        ar[i]=ar[i-1];
    }
    ar[pos]=element;

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