#include <bits/stdc++.h>
using namespace std;
void solve(){
    //selection sort
    int n= 9;
    int ar[1000]={2,34,5,2,32,3,1,-3,-44};
    int min;
    int minIndex=0;
    for(int i=0;i<n-1;i++){
        min = ar[i];
        for(int j=i;j<n;j++){
            if(ar[j]<=min){
                min = ar[j];
                minIndex = j;
            }
        }
        
        if(min<=ar[i]){
            swap(ar[minIndex],ar[i]);
        }

    }

    for(int i=0;i<n;i++){
        cout<<ar[i]<<endl;
    }
    //cout<<min<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}