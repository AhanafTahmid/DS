//1. Write a program to create an array of n elements and then display all the elements of the list.
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int myArray[n];
    for (int i = 0; i < n; ++i) {
        cin >> myArray[i];
    }
    for (int i = 0; i < n; ++i) {
        cout<< myArray[i];
    }

}

int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}
