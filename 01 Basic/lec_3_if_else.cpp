#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){

    // two number which is greater 
    /* int a,b;
    cin>>a>>b;

    if(a>b){
        cout<<" a is greater than b "<<endl;

    }
    else{
        cout<<" b is greater than a "<<endl;
    }
    */

    char ch ;
    cin>>ch;

    if(ch >='a' && ch<='z'){
        cout<<" This is lower case "<<endl;
    }
    else if(ch>='A' && ch <='Z'){
        cout<<" This is Upper case "<<endl;
    }
    else if(ch>='0' && ch<='9'){
        cout<<" This is  Numeric "<<endl;        
    }
    else{
        cout<<"enter correct character "<<endl;
    }
    return 0;
}