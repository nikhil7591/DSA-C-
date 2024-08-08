#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){
    for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
          if(arr[i][j] == target){
            return true;
          }  
        }
    }
    return false;
}

int main(){
    int arr[3][4];
    // input array
    for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    // print 2D Array
    for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    // linear Search in 2D array

    cout<< " Enter the element to Search "<<endl;
    int target;
    cin>>target;

    if(isPresent(arr,target,3,4)){
        cout<<" Element Found "<<endl;
    }
    else{
        cout<<" Element Not Found "<<endl;
    }
    return 0;
}   