//9. Write a program to search an element from a list of n numbers using Binary Search Algorithm
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int ar[]={2,4,5,6,111,3};
    int ln = sizeof(ar)/sizeof(ar[0]);
    sort(ar,ar+ln);
    int x;
    cin>>x;
    int f;

    int mid,l,r;
    l = 0;
    r = ln-1;
    while(l<=r){
        f = 0;
        mid = (l+r)/2;
        if(ar[mid]==x){
            f = 1;
            break;
        }
        else if(ar[mid]>x){
            r = mid-1;
        }
        else if(ar[mid]<x){
            l = mid+1;
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
