#include <iostream>
using namespace std;
void counting(int i, int n)
{
    if (i == n + 1)
    {
        return;
    }

    cout << i << endl;
    counting(i + 1, n);
}

int main()
{
    int number;
    cout << "Enter a number";
    cin >> number;
    counting(1, number);
}