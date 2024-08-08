#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int size;
    cin>>size; 

    int arr[100];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }cout<<endl;

    int i = 0;
    int j = size-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    // print array

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}