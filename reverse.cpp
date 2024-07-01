#include <iostream>
using namespace std;
int main()
{
    int number;
    int reversenumber = 0;
    cin >> number;
    while (number > 0)
    {
        int lastdigit = number % 10;
        reversenumber = reversenumber * 10 + lastdigit;
        number = number / 10;
    }
    cout << reversenumber;
}