//8. Write a program to search an element from a list of n numbers using Linear Search algorithm.
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int ar[]={2,4,5,6,111,3};
    int ln = sizeof(ar)/sizeof(ar[0]);
    int x;
    cin>>x;
    int f = 0;
    for(int i=0;i<ln;i++){
        if(ar[i]==x) {
            f = 1;
            break;
        }
    }
    if(f)cout<<"Found "<<x<<endl;
    else cout<<"Not Found "<<x<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}