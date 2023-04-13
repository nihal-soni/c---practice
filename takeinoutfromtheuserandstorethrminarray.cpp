#include<iostream>
using namespace std;

int  main(){
    int numbers[5];

    cout<<"Enter the 5 Numbers "<< endl;

    // Store input form userr to array
    for( int i =0; i < 5; ++i){
        cin>> numbers[i];


    }

    cout<<"The numbers are";

    // PRINT THE ARRAY ELEMENT
    for ( int n =0; n < 5; ++n){
        cout<<numbers[n]<<" ";
    }
    return 0;
}