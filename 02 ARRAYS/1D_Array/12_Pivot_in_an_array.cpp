#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int pivotElementInArray(int arr[],int size){
    int s = 0;
    int e = size-1;

    while(s<e){
        int mid = s + (e-s)/2;
        if(arr[mid +1]>=arr[0]){
            s = mid+1;
        }

        else{
            e = mid;
        }
    }

    return s;
}

int main(){
    int size;
    cin>>size;

    int arr[size];

    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }

    cout<<pivotElementInArray(arr,size)<<endl;
    return 0;
}