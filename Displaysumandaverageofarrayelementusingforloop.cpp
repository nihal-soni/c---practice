#include <iostream>
using namespace std;
int main()
{
    // INITALIZE AN ARRAY WITHOUT SPECIFYING IZE

    double number[] = {23, 3, 4, 5, 78, 45};
    double sum = 0;
    double count = 0;
    double average;

    cout << "The numbers are \n";

    for (const double &n : number)
    {
        cout << n << " ";
        sum +=n;

            // count the no of array elements
            ++ count;
    }

    // PRINT THE SUM

    cout<< " \nTheir sum = " << sum<<endl;

    average = sum / count;

    cout<<"\nTheir average = "<<average <<endl;
    return 0;
}