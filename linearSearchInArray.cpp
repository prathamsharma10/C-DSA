#include <iostream>
using namespace std;

// void printArray(int arr[], int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// present - > true
// absent - > false

bool linearSearch(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    // Arrays and functions

    int arr[5] = {10, 50, 30, 6, 70};
    int n = 5;
    int target;
    cout << "Enter target value: ";
    cin >> target;
    // printArray(arr, n);

    bool finalAns = linearSearch(arr, n, target);
    if (finalAns)
    {
        cout << "Target Found";
    }
    else
    {
        cout << "Target Not Found";
    }
    return 0;
}