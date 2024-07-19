#include <iostream>
using namespace std;

void selectionsort(int array[], int n) // function bnaya humne sselection sort naam ka , ume do values pass ki h , array , int
{
    for (int i = 0; i < n - 1; i++) // for loop laya ek ek index pe jaane ko
    {
        int minIndex = i;               // minimum index ko i se initialize kiya
        for (int j = i + 1; j < n; j++) // fir usme doosra loop lagya
        {
            if (array[j] < array[minIndex]) // agar array ka element minimum ke barabar ho
            {
                minIndex = j; // minimum value ko fir barabar krdo us index ke
            }
        }
        int temp = array[minIndex]; // fir bss swap kiya h

        array[minIndex] = array[i];
        array[i] = temp;
    }
}

void bubblesort(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // Fix: use arr[i] instead of arr[n]
    }
    bubblesort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}