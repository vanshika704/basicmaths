#include <iostream>
using namespace std;
// using reversed number
// int main()
// {
//     int number;
//     cout << "Enter number: ";
//     cin >> number;

//     if (number < 0)
//     {
//         cout << "Please enter a non-negative number." << endl;
//         return 1;
//     }

//     if (number == 0)
//     {
//         cout << "Digits: 0" << endl;
//         return 0;
//     }

//     // Reverse the number
//     int reversedNumber = 0;
//     int originalNumber = number;

//     while (number > 0)
//     {
//         int lastDigit = number % 10;
//         reversedNumber = reversedNumber * 10 + lastDigit;
//         number = number / 10;
//     }

//     // Print the digits of the reversed number
//     cout << "Digits: ";
//     while (reversedNumber > 0)
//     {
//         int digit = reversedNumber % 10;
//         cout << digit << " ";
//         reversedNumber = reversedNumber / 10;
//     }

//     cout << endl;
//     return 0;
// }

// using vectors
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int number;
//     cout << "Enter number: ";
//     cin >> number;

//     if (number < 0)
//     {
//         cout << "Please enter a non-negative number." << endl;
//         return 1;
//     }

//     if (number == 0)
//     {
//         cout << "Digits: 0" << endl;
//         return 0;
//     }

//     vector<int> digits;

//     while (number > 0)
//     {
//         int lastDigit = number % 10;
//         digits.push_back(lastDigit);
//         number = number / 10;
//     }

//     cout << "Digits: ";
//     for (int i = digits.size() - 1; i >= 0; i--)
//     {
//         cout << digits[i] << " ";
//     }

//     cout << endl;
//     return 0;
// }

// strivers code ;

int main()
{
    int number;
    cout << "enter number";
    cin >> number;
    while (number > 0)
    {
        int lastdigit = number % 10;
        cout << lastdigit << endl;
        number = number / 10;
    }
}