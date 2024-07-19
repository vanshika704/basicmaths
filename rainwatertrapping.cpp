#include <iostream>
using namespace std;

int left(int arr[], int n)
{
    int min = arr[0];
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= min)
        {
            cout << arr[i] << " ";
            count++;
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << endl;
    return count;
}

int right(int arr[], int n)
{
    int min = arr[n - 1];
    int count = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] <= min)
        {
            cout << arr[i] << " ";
            count++;
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << endl;
    return count;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }

    int leftCount = left(arr, n);
    int rightCount = right(arr, n);
    int final = leftCount - rightCount;
    cout << "Final result: " << final << endl;
    return 0;
}