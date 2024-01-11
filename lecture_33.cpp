#include <iostream>
using namespace std;
// Checking the array is sorted or not:
bool isSorted(int arr[], int size)
{
    // Base case:
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }
}
// Sum of all array element is:
int getSum(int arr[], int size)
{
    // Base case:
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    int remainingPart = getSum(arr + 1, size - 1);
    int sum = arr[0] + remainingPart;
    return sum;
}
// Linear Search using the recursion:
bool linearSearch(int arr[], int size, int key)
{
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    bool remainingPart = linearSearch(arr + 1, size - 1, key);
    return remainingPart;
}
// Binary Search using recursion:
bool BinarySearch(int arr[], int start, int end, int key)
{
    // Base case:
    if (start > end)
    {
        return false;
    }
    int mid = start + (end - start) / 2;
    if (arr[mid] == key)
    {
        return true;
    }
    if (arr[mid] < key)
    {
        BinarySearch(arr, mid + 1, end, key);
    }
    else
    {
        BinarySearch(arr, start, end - 1, key);
    }
}
int main()
{
    // Checking the array is sorted or not:
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cout << "Value of index " << i << " is: ";
        cin >> arr[i];
    }
    bool ans = isSorted(arr, size);
    if (ans)
    {
        cout << "Array is sorted.";
    }
    else
    {
        cout << "Array is not sorted.";
    }

    // Sum of all array:
    int size1;
    cout << "Enter the size1 value: ";
    cin >> size1;
    int arr1[100];
    for (int i = 0; i < size1; i++)
    {
        cout << "Value of index " << i << " is: ";
        cin >> arr1[i];
    }
    int sum = getSum(arr1, size1);
    cout << "The sum of all array is: " << sum << endl;

    // Linear search using recursion:
    int size2;
    cout << "Enter the size2 value: ";
    cin >> size2;
    int arr2[100];
    for (int i = 0; i < size2; i++)
    {
        cout << "Value of index " << i << " is: ";
        cin >> arr2[i];
    }
    int key;
    cout << "Enter the key value: ";
    cin >> key;
    bool ans = linearSearch(arr2, size2, key);
    if (ans)
    {
        cout << "Element is Found." << endl;
    }
    else
    {
        cout << "Element is Not Found." << endl;
    }

    // Binary Search using recursion:
    int size3;
    cout << "Enter the size3 value: ";
    cin >> size3;
    int arr3[100];
    for (int i = 0; i < size3; i++)
    {
        cout << "Value of index " << i << " is: ";
        cin >> arr3[i];
    }
    int key1;
    cout << "Enter the key1 value: ";
    cin >> key1;
    int start = 0;
    int end = size3 - 1;
    bool ans1 = BinarySearch(arr3, start, end, key1);
    if (ans1)
    {
        cout << "Element is Found." << endl;
    }
    else
    {
        cout << "Element is Not Found." << endl;
    }
}