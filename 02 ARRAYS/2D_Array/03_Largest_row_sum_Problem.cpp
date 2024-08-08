#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int largestrowSum(int arr[][4], int row , int col){

    int maxi = INT16_MIN;
    int rowIndex = -1;
    cout<<endl;
    for(int i = 0;i<row;i++){
        int sum = 0;
        for(int j = 0; j<col;j++){
            sum += arr[i][j];
        }
        cout<< sum <<" ";

        if(sum>maxi){
            maxi = sum;
            rowIndex = i;
        }
    }
    cout<<"\n The maximum Row Sum is "<<maxi<<endl;
    return rowIndex;
}

int main(){

    int arr[3][4];
    // input array
    for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    int rowIndex = largestrowSum(arr,3,4);

    cout<<" The index of maximum RowSum is "<<rowIndex<<endl;
    return 0;
}