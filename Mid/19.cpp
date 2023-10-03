//19. Write a program to calculate the multiplication of two matrices.
//If confused, Watch the video https://youtu.be/38_xouYxIY8
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int r1,r2,c1,c2;
    //Rows and column of 1st matrix
    cin>>r1>>c1;

    //Rows and column of 2nd matrix
    cin>>r2>>c2;

    if(c1!=r2){
        cout<<"Invalid"<<endl;
    }
    else{

    }
    /*  2 3
        3 2

        1 2 3
        4 5 6

        3 2
        5 8
        7 8
    */

    int first[100][100],second[100][100];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>first[i][j];
        }
    }

    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>second[i][j];
        }
    }
    

    //Multiplying
    int s=0;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                s+=first[i][k]*second[k][j];
            }
            cout<<s<<" ";
            s=0;
        }
        cout<<endl;
    }


}




int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}