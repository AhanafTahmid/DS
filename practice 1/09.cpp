//Write a program to sort n numbers using Merge sort algorithm.
#include <bits/stdc++.h>
using namespace std;



void merge(int ar[],int l, int m, int h){
    //4 steps may be
    vector<int> temp;
    int i = l;
    int j = m+1;

    while(i<=m && j<=h){
        if(ar[i]<=ar[j]){
            temp.push_back(ar[i]);
            i++;
        }
        else if(ar[i]>=ar[j]){
            temp.push_back(ar[j]);
            j++;
        }
    }

    while(i<=m){
        temp.push_back(ar[i]);
        i++;
    }

    while(j<=h){
        temp.push_back(ar[j]);
        j++;
    }



    for(int k=l;k<=h;k++){
        ar[k] = temp[k-l];
    }
    
}



void merge_sort(int ar[],int lo, int hi){
    if(lo>=hi) return;
    int mid = (lo+hi)/2;
    merge_sort(ar,lo,mid);
    merge_sort(ar,mid+1,hi);
    merge(ar,lo,mid,hi);
}


int main(){

    int t=1;
    //cin >> t;
    while(t--){
        int n = 7;
        int ar[100]={11,2,43,34,5,6,9};

        
        merge_sort(ar,0,n-1);
        for(int i=0;i<n;i++){
            cout<<ar[i]<<" ";
        }
        cout<<endl;
    } 
    return 0;
}