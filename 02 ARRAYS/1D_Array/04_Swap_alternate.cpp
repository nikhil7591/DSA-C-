#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void swapAlernate(int arr[], int size){

    for(int i =0 ;i<size;i+=2){
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    
    int size;
    cin>>size;

    int arr[size];
    for(int i =0 ;i<size;i++){
        cin>>arr[i];
    }cout<<endl;

    // Swap alternate

    swapAlernate(arr,size);
    printArray(arr,size);

    return 0;
}