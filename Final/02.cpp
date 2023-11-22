
//Write a program to find the nth term F, of the Fibonacci sequence using recursive and non-recursive method.
//Sequence followed here: 0,1,1,2,3,5,8,13,21...

#include <bits/stdc++.h>
using namespace std;

//Fibonacci using non recursive method
void non_recursive(int n){
    int s = 0, t = 1, k = 0;
    if(n==1){
        cout<<s<<endl;
        return;
    }
    if(n==2){
        cout<<t<<endl;
        return;
    }

    for(int i=3;i<=n;i++){
        k = s + t;
        s = t;
        t = k;
        //cout<<k<<endl;
    }
    cout<<k<<endl;
}



//recursive method - Using Functional Recursion
int recursive1(int n){

    if(n<=1){
        return n;
    }
    return recursive1(n-1)+recursive1(n-2);
}


int main(){

    int t=1;
    //cin >> t;
    while(t--){
        int k = 5; //9 is the sample input, for 9th term the answer is 8: 0,1,1,2,3,5,8,13,21

        non_recursive(k);
        cout<<recursive1(k-1);//1 dile base index hit, 2 dile base index hit, 3 dile 

    };  
    return 0;
}