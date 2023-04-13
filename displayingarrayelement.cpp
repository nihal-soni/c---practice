#include<iostream>
using namespace std;

int main(){
    int numbers[5] = { 2, 3, 45, 3, 6};

    cout<<" The numbers are \n";

    for (const int &n : numbers){
        cout<< n <<" ";

    }
    cout<< "\n The number is \n";

    for(int i = 0; i < 5; ++i) {
        cout<<numbers[i]<<" ";


    }
    return 0;

}
