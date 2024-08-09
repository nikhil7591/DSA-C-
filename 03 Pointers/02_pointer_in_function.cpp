#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void print(int *p){
    cout<<p<<endl;// print address
    cout<<*p<<endl;// print value
}

void update(int *p){
    *p = *p+1;
}

int getSum(int arr[],int n){
    // arr[], *arr are both sameit is pointer 
    cout<<" \nSize: "<<sizeof(arr)<<endl;
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int value = 5;
    int *p = &value;

    // print(p);
    cout<<" after value "<<*p<<endl;
    update(p);
    cout<<" before value "<<*p<<endl;

    // now let array
    int arr[5] = {1,2,3,4,5};

    cout<< " Sum of all element is "<<getSum(arr,5)<<endl;
    return 0;
}