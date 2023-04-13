#include<iostream>
using namespace std;

int main(){
    string food ="Pizza";      //FOOD VARIABLE
    string &meal = food;        //REFRENCE TO FOOD
                        
    cout<< food <<"\n";
   cout<< meal <<"\n";
   

   return 0;
}