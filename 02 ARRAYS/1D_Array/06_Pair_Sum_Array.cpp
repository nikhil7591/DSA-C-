#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<vector<int>> pairSum(int arr[],int size,int s){
    vector<vector<int>> ans;

    for(int i = 0;i<size;i++){
        for(int j =i+1 ;j<size;j++){
            if(arr[i]+arr[j]== s){
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
 }


int main(){

    int size;
    cin>>size;

    int arr[size];

    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
    int s;
    cin>>s;

    vector<vector<int>> ans =  pairSum(arr,size,s);
    for(int i = 0;i<ans.size();i++){
        cout << "[" << ans[i][0] << ", " << ans[i][1] << "] "<<endl;
    }cout<<endl;


    
    return 0;
}
