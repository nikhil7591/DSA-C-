#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool search(int arr[],int size,int k){
    for(int i = 0;i<size;i++){
        if(arr[i]==k){
            return true;
        }
    }
    return false;
}

int main(){
    int size;
    cin>>size; 

    int arr[100];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }cout<<endl;

    // Array print

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    // linear search
    int k;
    cout<<"Enter the element to search for ";
    cin>>k;
    int found = search(arr,size,k);
    if(found){
        cout<<" YES "<<endl;
    }
    else{
        cout<<" NO "<<endl;
    }
  
    return 0;
}