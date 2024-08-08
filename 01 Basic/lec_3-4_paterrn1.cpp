#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    
    // int n;
    // cin>>n;

    // int i = 1;
    // int a = 1;
    // while(i<=n){
    //     int j = a;
    //     while(j<=i){
    //         cout<<j;
    //         j++;
    //     }cout<<endl;
    //     a++;
    //     i++;
    // }

    // new pattern
    // 1 2 3 4 4 3 2 1
    // 1 2 3 * * 3 2 1
    // 1 2 * * * * 2 1
    // 1 * * * * * * 1

    int n;
    cin>>n;

    int row = 1;
    while(row<=n){

        // 1st triangle
        int j = 1;
        while(j<=n-row+1){
            cout<< j <<" ";
            j++;
        }

        // 2nd triangle
        int k = 1;
        while(k<row){
            cout<<"* ";
            k++;
        }

        // 3rd triangle
        int l = 1;
        while(l<row){
            cout<<"* ";
            l++;
        }

        // 4th triangle
        int m = n-row+1;
        while(m>=1){
            cout<< m <<" ";
            m--;
        }
        cout<<endl;
        row++;
    }

    return 0;
}