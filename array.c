#include <stdio.h>

int findSmallest(int arr[], int size);
int findLargest(int arr[], int size);
int sumArray(int arr[], int size);
float averageArray(int arr[], int size);

int main()
{
    int arr[] = {5, 8, 3, 12, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int choice;
    int resultInt;
    float resultFloat;

    printf("Array elements: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Choose an operation:\n");
    printf("1. Find Smallest\n");
    printf("2. Find Largest\n");
    printf("3. Sum of Elements\n");
    printf("4. Average of Elements\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        resultInt = findSmallest(arr, size);
        printf("Smallest element: %d\n", resultInt);
        break;
    case 2:
        resultInt = findLargest(arr, size);
        printf("Largest element: %d\n", resultInt);
        break;
    case 3:
        resultInt = sumArray(arr, size);
        printf("Sum of elements: %d\n", resultInt);
        break;
    case 4:
        resultFloat = averageArray(arr, size);
        printf("Average of elements: %.2f\n", resultFloat);
        break;
    default:
        printf("Invalid choice.\n");
    }

    return 0;
}

int findSmallest(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int findLargest(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int sumArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

float averageArray(int arr[], int size)
{
    int sum = sumArray(arr, size);
    return (float)sum / size;
}