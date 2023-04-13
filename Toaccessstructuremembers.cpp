#include<iostream>
using namespace std;

    struct 
    {
        int myNum;
        string myString;

            }myStructure;
int main(){
    myStructure.myNum = 1;
    myStructure.myString = "Hello world";

    cout<<myStructure.myNum<<"\n";
    cout<<myStructure.myString;
}