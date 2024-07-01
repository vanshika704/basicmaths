#include <iostream>
using namespace std;

int main()
{
    int number;
    int originalNumber;
    int reversenumber = 0;

    cin >> number;
    originalNumber = number;

    while (number > 0)
    {
        int lastdigit = number % 10;
        reversenumber = reversenumber * 10 + lastdigit;
        number = number / 10;
    }

    if (reversenumber == originalNumber)
    {
        cout << "Yes, the number is a palindrome";
    }
    else
    {
        cout << "No, the number is not a palindrome";
    }

    return 0;
}
