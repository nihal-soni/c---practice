#include<bits\stdc++.h>
using namespace std;

void myFunction(string country = "Norway"){
    cout << country <<"\n";
}

int main(){
    myFunction("swedan");
    myFunction("India");
    myFunction();
    myFunction("Usa");

    return 0;
}