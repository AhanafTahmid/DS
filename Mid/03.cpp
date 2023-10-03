//3. Write a program to calculate the roots of the quadratic equation ax2 + bx+c=0 where a, b and c are known.
#include <bits/stdc++.h>
using namespace std;
void solve(){
    double a,b,c,img;
    cin>>a>>b>>c;
    img = b*b-4*a*c;
    if(img == 0){
        cout<< fixed << setprecision(5)<< -b/(2*a)<<endl;
    }
    else if(img<0){
        cout<<"Roots are imaginary"<<endl;
    }
    else if(img>0){
        cout<< fixed<< setprecision(5)<< (-b+sqrt(img))/(2*a) <<endl;
        cout<< fixed<< setprecision(5)<< (-b-sqrt(img))/(2*a) <<endl;
    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}