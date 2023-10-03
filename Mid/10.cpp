//10. Write a program to determine whether a number n is prime or not where 1<n<215 by using sieve method.
#include <bits/stdc++.h>
using namespace std;
int isPrime(int n){
    if(n<=1){
        return false;
    }
    bool prime[n+1];
    memset(prime,true,sizeof(prime));

    for(int p=2;p*p<=n;p++){
        if(prime[p]==1){
            for(int i=p*p;i<=n;i+=p){
                prime[i] = false;
            }
        }
    }
    return prime[n];
}

void solve(){
    int n;
    cin>>n;
    if(isPrime(n))cout<<"Prime"<<endl;
    else cout<<"Not Prime"<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}