// #include <iostream>
// using namespace std;

// int main()
// {
//     int i = 30;

//     while (i < 1000)
//     {
//         cout << i << "\n";
//         ++i;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int number;
    int sum = 0;

    cout << "Enter a number:";
    cin >> number ;
        while (number > 0)
    {
        sum += number;

        cout << "Enter a number:";
        cin >> number;
    }

    cout<< "\n The sum is" <<sum <<endl;
    return 0;
    
}