//4. Write a program to create an array of n elements and then separately write the odd and even elements of the list.
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int ar[n];
    for (int i = 0; i < n; ++i) {
        cin >> ar[i];
    }
    cout<<"ODD ELEMENTS"<<endl;
    for (int i = 0; i < n; ++i) {
        if(ar[i]%2==1)cout<< ar[i];
    }
    cout<<endl;
    cout<<"EVEN ELEMENTS"<<endl;
    for (int i = 0; i < n; ++i) {
        if(ar[i]%2==0)cout<< ar[i];
    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}