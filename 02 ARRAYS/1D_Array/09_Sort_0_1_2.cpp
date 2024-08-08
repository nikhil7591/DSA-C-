#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void sort012(int arr[],int size){
    int i = 0;
    int j = size-1;

    while(i<=j){
        if(arr[i]==0){
            i++;
        }
        else if ((arr[i]==2 && arr[j]==0)){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if ((arr[i]==1 && arr[j]==0)){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else{
            j--;
        }
        
        for(int i = 0;i<size;i++){
            if((arr[i]==2 && arr[i+1]==1)){
                swap(arr[i],arr[i+1]);
            }
        } 
    }   
    
}

int main(){

    int size;
    cin>> size;

    int arr[size];

    for(int i =0 ;i< size;i++){
        cin>>arr[i];
    }

    sort012(arr,size);


    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}