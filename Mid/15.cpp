//15. Write a program which calculates the no. of occurrence of each letter of an input text.
#include <bits/stdc++.h>
using namespace std;
void solve(){
    string T,P;
    cin>>T;//aabcddd
    int l = T.size();
    int fr[26]={};
    for(int i=0;i<l;i++){
        fr[T[i]-'a']++;
    }

    for(int i=0;i<=26;i++){
        if(fr[i]>=1){
            cout<<char(i+'a')<<" "<<fr[i]<<endl;
        }
    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}