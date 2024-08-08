#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){

    int size;
    cin>> size;

    int arr[size];

    for(int i =0 ;i< size;i++){
        cin>>arr[i];
    }

    int i = 0;
    int j = size-1;

    while(i<=j){
        if(arr[i]==0){
            i++;
        }
        else if(arr[i] == 1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else{
            j--;
        }
    }

    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}