#include<iostream>
using namespace std;

int main(){
    string food = "Pizza";  //A food variable of type string
    string* ptr = &food;  // pointer variable with the name ptr that stores the address to food

    cout<< food <<"\n";  //output the value of food

    cout<< &food <<"\n"; //output the memeory address of food


    cout<< ptr <<"\n"; // out the memory address of food with pointers


    return 0;
}