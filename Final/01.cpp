//Write a program to calculate the Factorial of a number using recursive and non-recursive method
#include <bits/stdc++.h>
using namespace std;

//Factorial using non recursive method
void non_recursive(int n){
    //int n = 6; 
    int s = 1;
    for(int i=1;i<=n;i++){
        s*=i;
    }
    cout<<s<<endl;
}


//recursive method 1 - Using Parameterized function
void recursive1(int n, int f){
    if(n==1){
        cout<<f <<" Method 1"<<endl;
        return;
    }
    f*=n;
    recursive1(n-1, f);
}




//recursive method 2 - Using Parameterized function, with global variable

int s1 = 1;
void recursive2(int n){
    if(n==1){
        cout<<s1<<" Method 2"<<endl;
        return;
    }
    s1*=n;
    recursive2(n-1);
    
}



//recursive method 3 - Using Functional Recursion
int recursive3(int n){
    if(n==1){
        return 1;
    }
    return n * recursive3(n-1);//4-1, 3-1, 2-1,1 [egula stack e joma hobe]
}



int main(){

    int t=1;
    //cin >> t;
    while(t--){
        int k = 6; //6 is the sample input, 6! = 1x2x3x4x5x6 = 720

        non_recursive(k);
        recursive1(k,1);
        recursive2(k);
        cout<<recursive3(6)<<" Method 3";
    }; 
    return 0;
}

