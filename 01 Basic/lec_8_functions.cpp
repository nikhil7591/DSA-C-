#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// factorial
int factorial(int n){

    int fact = 1;
    for(int i = 1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

// nCr
int nCr(int n,int r){

    int num = factorial(n);
    int denom = factorial(r)*factorial(n-r);
    int ans = num/denom;
    
    return ans;
}

int main(){

    int n,r;
    cin>>n;
    cin>>r;

    // factorial
    cout<<" factorial of "<<n<<" is "<<factorial(n)<<endl;

    // nCr
    cout<<" Answer nCr is "<<nCr(n,r)<<endl;
    
    return 0;
}