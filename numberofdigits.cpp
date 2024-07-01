#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int count = 0;
    while (number > 0)
    {
        int lastdigit = number % 10;
        count = count + 1;

        number = number / 10;
    }

    cout << count;
}
