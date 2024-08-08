#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int maxElement(int arr[],int size){
    int max = arr[0];
    for(int i = 1;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int minElement(int arr[],int size){
    int min = arr[0];
    for(int i = 1;i<size;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int size;
    cin>>size; 

    int arr[100];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }cout<<endl;

    cout<<" Maximum Element of Array is "<<maxElement(arr,size)<<endl;
    cout<<" Minimum Element of Array is "<<minElement(arr,size)<<endl;
    cout<<endl;

    return 0;
}