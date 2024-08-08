#include<bits/stdc++.h>
#include<iostream>
using namespace std;

long long binarySearch(int x){
    int s = 0;
    int e = x;
    long long ans = -1;
    while(s<=e){
        long long mid = s + (e-s)/2;
        if((mid*mid)==x){
            return mid;
        }
        else if((mid*mid)>x){
            e = mid-1;
        }
        else{
            ans = mid;
            s = mid+1;
        }
    }
    return ans;
}

double morePrecision(int n, int Precision, int tempSol){
    double factor = 1;
    double ans = tempSol;
    for(int i =0;i<Precision;i++){
        factor = factor/10;
        for(double j = ans;j*j<n ; j = j+factor ){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<" Enter thr number ";
    cin>>n;

    int tempSol = binarySearch(n);
    cout<<" Answer is "<< morePrecision(n,4,tempSol)<<endl;
    return 0;
}