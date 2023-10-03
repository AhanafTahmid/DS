//14. Write a program that will read a string (S) and find the index of the first occurrence of a pattern (P) in the string S.
#include <bits/stdc++.h>
using namespace std;
void solve(){
    string T,P;
    cin>>T>>P;//stuvst st
    int n = T.find(P);
    if (n != string::npos) {
        cout << n << endl;
    } else {
        cout << "Pattern P not found in text T." << endl;
    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}