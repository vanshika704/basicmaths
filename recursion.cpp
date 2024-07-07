#include <iostream>
using namespace std;

void counting(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << "vanshika" << endl;
    counting(i + 1, n);
}

int main()
{
    int number;
    cout << "enter number: ";
    cin >> number;
    counting(1, number);
    return 0;
}
