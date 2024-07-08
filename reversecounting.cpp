#include <iostream>
using namespace std;
void reverse(int i, int n)
{
    if (i == n)
    {
        return;
    }
    cout << n << endl;
    reverse(i + 1, n);
}
int main()
{
    int number;
    cout << "Enter a number";
    cin >> number;
    reverse(number, number);
}