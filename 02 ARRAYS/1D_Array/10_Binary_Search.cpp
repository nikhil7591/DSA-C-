#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int binarySearch(int arr[], int n,int key){
    sort(arr,arr+n);
    int i = 0;
    int j = n-1;
    while(i<=j){
        int mid = i+(j-i)/2;
        if(key == arr[mid]){
            return mid;
        }
        else if(key < arr[mid]){
            j = mid-1;
        }
        else{
            i = mid+1;
        }
    }
    return -1;
}

int main(){
    // Binary search
    int n;
    cin>> n;

    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;

    cout<<" Index of "<<key<<" is "<<binarySearch(arr,n,key)<<endl;;

    return 0;
}