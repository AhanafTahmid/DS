//13. A text T and a pattern P are in memory. Write a program to delete first occurrence of P in T.
#include <bits/stdc++.h>
using namespace std;
void solve(){
    string T,P;
    cin>>T>>P;//stuvst st
    int n = T.find(P);
    if (n != string::npos) {
        T.erase(n, P.size());  // Erase the pattern P from text T
        cout << T << endl;
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