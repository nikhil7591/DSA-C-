#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    // fibonacci series
    // int a= 0;
    // int b= 1;
    // int n = 10;
    // cout<<a<<" "<<b<<" ";
    // for(int i = 1;i<=n;i++){
    //     int next_no = a+b;
    //     a = b;
    //     b = next_no;
    //     cout<<next_no<<" ";
    // } 

    // prime number
    int n = 9;
    bool isprime = 1;
    for(int i = 2;i<n;i++){
        if(n%i==0){
            isprime = 0;
            break;
        }
    }
    if(isprime==0){
        cout<<n<<" is not prime "<<endl;
    }
    else{
        cout<<n<<" is prime "<<endl;
    }
    return 0;
}