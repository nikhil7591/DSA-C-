#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    /*
    int arr[10] = {23,144,41,67};
    cout<<" address of first memory block is "<<arr<<endl;
    cout<<arr[0]<<endl;

    cout<<" address of first element block is "<<&arr[0]<<endl;

    cout<<" 4th "<<*arr<<endl;
    cout<<" 5th "<<*arr +1 <<endl;
    cout<<" 6th "<<*(arr+1) <<endl;
    cout<<" 7th "<<*(arr)+1 <<endl;
    cout<<" 8th "<<arr[2]<<endl;
    cout<<" 9th "<<*(arr+2)<<endl;

    int i = 3;
    cout<<i[arr]<<endl;

    int temp[10] = {1,2};
    cout<< sizeof(temp)<<endl;
    cout<< " 1st "<< sizeof(*temp)<<endl;
    cout<< " 2nd "<< sizeof(&temp)<<endl;

    int *ptr = &temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;

   int arr[5] = {1,2,3,4,5};
   cout<<&arr[0]<<endl;
   cout<<&arr<<endl;
   cout<<&arr<<endl;

   int *ptr = &arr[0];
   cout<< ptr<<endl;
   cout<<*ptr<<endl;
   cout<<&ptr<<endl;

    int arr[5] = {1,2,3,4,5};
    // a = arr+1;
    int *p = &arr[0];
    p = p+1;
    cout<<p<< " and arr is "<<arr<<endl;

    */


    // CHARACTER ARRAY IN POINTERS
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";// isme hamne 6 size isliye liya hai kio ki char array ik null character store karta hai

    cout<<arr<<endl;
    cout<<ch<<endl;

    // if i print only c like  in int array then return enitre string but int array return first index element address
    char *c = &ch[0];
    // prints entire string
    cout<< c <<endl;

    // if null character is not initalization

    char temp = 'z';
    char *p = &temp;
    cout<<p<<endl;


    return 0;
}