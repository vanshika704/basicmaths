#include <iostream>
using namespace std;
void counting(int i, int n)
{
    if (i == n)
        return;

    counting(i + 1, n);
    cout << i << endl;
}
int main()
{
    int number;
    cout << "Enter a number" << endl;
    cin >> number;
    counting(1, number);
}