#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int uniqueElement(int arr[],int size){
    int a = 0;
    for(int i=0;i<size;i++){
        a = a^arr[i];
        
    }
    return a;
}

bool uniqueOccurrences(vector<int>& arr) {
    
    int max = arr[0];
    for(int i=0 ;i<arr.size();i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }

    vector <int> freq(max+1,0);

    for(int i =0 ;i<arr.size();i++){
        freq[arr[i]]++;
    }

    for(int i = 1 ;i<max+1;i++){
        if(freq[i]==freq[i-1]){
            return false;
            break;
        }
    }
    return true;
}

int main(){

    int size ;
    cin>>size;

    int arr[100];
    for(int j = 0;j<size;j++){
        cin>>arr[j];
    }cout<<endl;
    // cout<<uniqueElement(arr,size)<<endl;

    if(uniqueOccurrences){
        cout<<"True"<<endl;
    }else{
        cout<<"false"<<endl;
    }
 
    return 0;
}