#include <iostream>
using namespace std;
int main()
{
    int number;
    cin >> number;
    for (int n = 1; n <= number; n++)
    {
        if (number % n == 0)
        {
            cout << n << endl;
        }
    }
}