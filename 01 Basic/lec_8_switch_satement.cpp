#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    // switch statement
    // // Mini calculater
    // int a,b;

    // char op;
    // cout<<"Eneter two number ";
    // cin>>a>>b;
    // cout<<"Select operator  (+ , - , * , /) ";
    // cin>>op;
    // switch(op){
    //     case '+':
    //         {int sum = a+b;
    //         cout<<"Answer "<<a<<" + "<<b<<" = "<<sum<<endl;
    //         break;}

    //     case '-':
    //         {int sub = a-b;
    //         cout<<"Answer "<<a<<" - "<<b<<" = "<<sub<<endl;
    //         break;}
    //     case '*':
    //         {int multi = a*b;
    //         cout<<"Answer "<<a<<" * "<<b<<" = "<<multi<<endl;
    //         break;}
    //     case '/':
    //         {float div = float(a)/float(b);
    //         cout<<"Answer "<<a<<" / "<<b<<" = "<<div<<endl;
    //         break;}

    //     default:
    //         cout<<"Invalid operator select "<<endl;    
    // }


    // Homework

    int amount;
    cout<<"Eneter the Amount ";
    cin>>amount;
    
    // 500, 100, 50, 20, 10, 5, 2, 1 rupees
    // int cash;
    // cout<<"enter note ( 500,100,50,20,10,5,2,1) ";
    // cin>>cash;
    switch(500){
        case 500:
        {
            int n_amount = amount/500;
            amount = amount - (n_amount*500);
            cout<<"500 ruppes note are "<<n_amount<<endl;
        }
        case 100:
        {
            int n_amount = amount/100;
            amount = amount - (n_amount*100);
            cout<<"100 ruppes note are "<<n_amount<<endl;
        }
        case 50:
        {
            int n_amount = amount/50;
            amount = amount - (n_amount*50);
            cout<<"50 ruppes note are "<<n_amount<<endl;
        }
        case 20:
        {
            int n_amount = amount/20;
            amount = amount - (n_amount*20);
            cout<<"20 ruppes note are "<<n_amount<<endl;
        }
        case 10:
        {
            int n_amount = amount/10;
            amount = amount - (n_amount*10);
            cout<<"10 ruppes note are "<<n_amount<<endl;
        }
        case 5:
        {
            int n_amount = amount/5;
            amount = amount - (n_amount*5);
            cout<<"5 ruppes coine are "<<n_amount<<endl;
        }
        case 2:
        {
            int n_amount = amount/2;
            amount = amount - (n_amount*2);
            cout<<"2 ruppes coine are "<<n_amount<<endl;
        }
        case 1:
        {
            int n_amount = amount/1;
            amount = amount - (n_amount*1);
            cout<<"1 ruppes coine are "<<n_amount<<endl;
        }
    }


    return 0;
}