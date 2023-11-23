//Write a program to implement Ackermann Function.

#include <bits/stdc++.h>
using namespace std;
int A(int m, int n){
    if(m==0 && n!=0){
        return n+1;
    }
    else if(m!=0 && n==0) return A(m-1,1);
    else if(m!=0 && n!=0) return A(m-1,A(m,n-1));
}


int main(){

    int t=1;
    //cin >> t;
    while(t--){
        int m = 1, n = 3;// For 1, 3 the answer is 5
        cout<<A(m,n);
    }; 
    return 0;
}
