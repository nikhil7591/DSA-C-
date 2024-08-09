#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    // // n x n ki matrix hai 
    // int n;
    // cin>>n;
    // // CREATING 2D ARRAY
    // int** arr = new int*[n];
    // for(int i=0;i<n;i++){
    //     arr[i] = new int[n];
    // }
    // // CREATION IS DONE

    // // TAKE INPUT ARRAY
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cin>>arr[i][j];
    //     }   
    // }
    // // PRINT 2D ARRAY
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<arr[i][j]<<" ";
    //     } cout<<endl;
    // } 

    // // RELEASE THE MEMORY
    // int** arr = new int*[n];
    // for(int i=0;i<n;i++){
    //     delete []arr[i];
    // }
    // delete []arr  ;


    // // FOR DIFFERENT ROW AND COL
    // int row;
    // cin>>row;
    // int col;
    // cin>>col;

    // // different row and col
    // int** matrix = new int*[row];
    // for(int i=0;i<n;i++){
    //     matrix[i] = new int[col];
    // }
    // // TAKE INPUT ARRAY
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cin>>matrix[i][j];
    //     }   
    // }
    // // PRINT 2D ARRAY
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<matrix[i][j]<<" ";
    //     } cout<<endl;
    // } 

    // // RELEASE THE MEMORY
    // int** matrix = new int*[row];
    // for(int i=0;i<n;i++){
    //     delete []matrix[i];
    // }
    // delete []matrix;


    // FOR DIFFERENT ROW AND COL jagged array (not fixed col)
    int row1;
    cin >> row1;

    // different row and col
    int** array = new int*[row1];
    int* colSizes = new int[row1]; // To store the size of each row

    for (int i = 0; i < row1; i++) {
        cout<<" enter all col size ";
        cin >> colSizes[i];
        array[i] = new int[colSizes[i]];
    }

    // TAKE INPUT ARRAY
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < colSizes[i]; j++) {
            cin >> array[i][j];
        }
    }

    // PRINT 2D ARRAY
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < colSizes[i]; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // RELEASE THE MEMORY
    for (int i = 0; i < row1; i++) {
        delete[] array[i];
    }
    delete[] array;
    delete[] colSizes;

    return 0;
}