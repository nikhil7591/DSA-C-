#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int i =9;
    int& j = i;
    cout<<i++<<endl;
    cout<<i<<endl;
    cout<<j++<<endl;
    cout<<i<<endl;
    return 0;
}