//12. Write a program to insert a string S into a text T so that S begins in position K of T.
#include <bits/stdc++.h>
using namespace std;
void solve(){
    string T, S;
    int K;
    cin>>T>>S;//jijije eeirrr 3
    cin>>K;
    T.insert(K,S);
    cout<<T<<endl;
}


int main(){

    int t=1;
   // cin >> t;
    while(t--)solve(); 
    return 0;
}