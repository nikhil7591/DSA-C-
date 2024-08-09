#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int i = 10;
    int *p = &i;
    int **q = &p;
    cout<<**q<<endl;
    cout<<&q<<endl;
    cout<<q<<endl;
    cout<<*q<<endl;
    return 0;
}