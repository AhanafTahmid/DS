//2. Write a program to find the largest number from a given list of integers.
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int ar[]={2,4,5,6,111,3};
    int mx = ar[0];
    int ln = sizeof(ar)/sizeof(ar[0]);//size of the array
    for(int i=1;i<ln;i++){
        if(ar[i]>=mx) mx = ar[i];
    }
    cout<<mx<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}