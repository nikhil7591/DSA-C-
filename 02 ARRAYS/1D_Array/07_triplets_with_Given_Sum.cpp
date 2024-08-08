#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<int> tripletsGivenSum(int arr[], int size,int s){
    vector<int> ans;
    // brute force 
    for(int i = 0;i<size;i++){
        for(int j = i+1;j<size;j++){
            for(int k = j+1;k<size;k++){
                if(arr[i]+arr[j]+arr[k]== s){
                    ans.push_back(arr[i]);
                    ans.push_back(arr[j]);
                    ans.push_back(arr[k]);
                }
            }
        }
    }

    return ans;
}

int main(){
    // triplets with given sum

    int size;
    cin>>size;

    int arr[size];

    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
    int s;
    cin>>s;

    vector<int> ans = tripletsGivenSum(arr,size,s);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }cout<<endl;

    
    return 0;
}