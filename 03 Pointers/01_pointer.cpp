#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int nums = 5;
    int *ptr = &nums;
    cout<< nums <<endl;
    cout<< &nums <<endl;
    cout<< *ptr <<endl;
    cout<< ptr <<endl;

    int i = 5;
    int *p = 0;
    p = &i;
    cout<<p<<endl;
    cout<<*p<<endl;

    // coping one pointer to another pointer
    int **q = &p;
    cout<< q <<" "<<p<<endl;
    cout<<*q<<" "<<*p<<endl;
    
    return 0;
}