#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

// Function prototypes
int findSmallest(const std::vector<int> &arr);
int findLargest(const std::vector<int> &arr);
int sumArray(const std::vector<int> &arr);
double averageArray(const std::vector<int> &arr);
std::vector<int> transformArray(const std::vector<int> &arr, int (*func)(int));

int main()
{
    std::vector<int> arr = {5, 8, 3, 12, 7};
    int choice;
    int resultInt;
    double resultDouble;

    std::cout << "Array elements: ";
    for (int elem : arr)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    std::cout << "Choose an operation:\n";
    std::cout << "1. Find Smallest\n";
    std::cout << "2. Find Largest\n";
    std::cout << "3. Sum of Elements\n";
    std::cout << "4. Average of Elements\n";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        resultInt = findSmallest(arr);
        std::cout << "Smallest element: " << resultInt << std::endl;
        break;
    case 2:
        resultInt = findLargest(arr);
        std::cout << "Largest element: " << resultInt << std::endl;
        break;
    case 3:
        resultInt = sumArray(arr);
        std::cout << "Sum of elements: " << resultInt << std::endl;
        break;
    case 4:
        resultDouble = averageArray(arr);
        std::cout << "Average of elements: " << resultDouble << std::endl;
        break;
    default:
        std::cout << "Invalid choice.\n";
    }

    return 0;
}

int findSmallest(const std::vector<int> &arr)
{
    return *std::min_element(arr.begin(), arr.end());
}

int findLargest(const std::vector<int> &arr)
{
    return *std::max_element(arr.begin(), arr.end());
}

int sumArray(const std::vector<int> &arr)
{
    return std::accumulate(arr.begin(), arr.end(), 0);
}

double averageArray(const std::vector<int> &arr)
{
    int sum = sumArray(arr);
    return static_cast<double>(sum) / arr.size();
}

// Example function to apply to each element of the array
int increment(int x)
{
    return x + 1;
}

// Function to apply a given function to each element of the array
std::vector<int> transformArray(const std::vector<int> &arr, int (*func)(int))
{
    std::vector<int> result(arr.size());
    std::transform(arr.begin(), arr.end(), result.begin(), func);
    return result;
}