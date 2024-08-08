#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<int> rowSum(int arr[][4], int row , int col){
    vector<int> ans;
    for(int i = 0;i<row;i++){
        int sum = 0;
        for(int j = 0; j<col;j++){
            sum += arr[i][j];
        }
        ans.push_back(sum);
    }
    return ans;
}

int main(){

    int arr[3][4];
    // input array
    for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    vector<int> ans ;
    ans = rowSum(arr,3,4);

    // print answer array
    for(int i = 0;i<3;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}