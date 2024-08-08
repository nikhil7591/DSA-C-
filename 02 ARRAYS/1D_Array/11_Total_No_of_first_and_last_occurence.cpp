#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int firstOcc(vector<int> nums,int target){
    vector <int> res = {-1,-1};
    int i = 0;
    int j = nums.size()-1;
    int first = -1;

    while(i<=j){
        int mid = i + (j-i)/2;
        if(nums[mid]==target){
            first = mid;
            j = mid-1;
        }
        else if(target<nums[mid]){
            j = mid-1;
        }
        else{
            i= mid+1;
        }
    }
    return first;
}
int lastOcc(vector<int> nums,int target){

    int start = 0,end = nums.size()-1;
    int last = -1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(nums[mid]==target){
            last = mid;
            start = mid+1;
        }
        else if(target<nums[mid]){
            end = mid-1;
        }
        else{
            start= mid+1;
        }
    }
    return last;
}

int main(){

    int n;
    cin>>n;

    vector<int> nums(n);
    for(int i = 0;i<n;i++){
        cin>>nums[i];
    }

    sort(nums.begin(),nums.end());
    int target;
    cin>>target;

    int first = firstOcc(nums,target);
    int last = lastOcc(nums,target);

    cout<<" Total number of Occurence "<<target<<" in array is "<< (last-first)+1<<endl;


    return 0;
}