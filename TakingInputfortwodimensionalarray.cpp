#include <iostream>
using namespace std;

int main()
{
    int number[2][3];
    cout << "Enter 6 numbers:" << endl;

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin >> number[i][j];
        }
    }

    cout<< "The Numbers are: "<< endl;

    for (int i = 0; i < 2; ++i){
    for (int j = 0; j < 3; ++j){
       cout<< "number["<<i<<"]["<<j<<"]:" << number[i][j] <<endl;
    }
}
return 0;
}