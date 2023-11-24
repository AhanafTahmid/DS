//Insertion sort
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n=7;
    int ar[100]={1,23,5,4,5,2,44};
    for(int i=0;i<n;i++){
        for(int j=i;j>0;j--){
            if(ar[j-1]>ar[j]) swap(ar[j-1],ar[j]);
        }
    }

    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}