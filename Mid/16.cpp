//16. Write a program to implement the following string operation without using any built in functions related to string.
#include <bits/stdc++.h>
using namespace std;
void solve(){
    //a) Find the length of a string S
    string s="hsidw";
    int len=0;
    for(int i=0;s[i]!='\0';i++){
        len++;
    }
    //cout<<len<<endl;


    //b) Copy string S2 to S1.
    string s1="hello";
    string s2="";
    for(int i=0;s1[i]!='\0';i++){
        s2[i]=s1[i];
        //cout<<s2[i];
    }
    
    //c) Concatenate string S2 to S1. 
    int len2=0;
    for(int i=0;s2[i]!='\0';i++){
        len2++;
    }
    for(int i=0;s1[i]!='\0';i++){
        s2[len+i]=s1[i];
    }
    for(int i=0;i<len2+len2;i++){
        //cout<<s2[i]<<endl;
    }

    //d) Compare two strings S1 and S2 

    int i = 0;
    string S1 = "hello", S2 = "world";
    while (S1[i] != '\0' && S2[i] != '\0') {
        if (S1[i] != S2[i]) {
            //cout<< S1[i] - S2[i]<<endl;
        }
        i++;
    }

    //e) Reverse a string S.
    string ss="hello";
    int length=0;
    for(int i=0;ss[i]!='\0';i++){
        length++;
    }
    for(int i=length;i>=0;i--){
        cout<<ss[i];
    }
    

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}