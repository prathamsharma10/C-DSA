#include <iostream>
using namespace std;

int main()
{
    // // taking input in array
    // int arr[5];
    // int n = 5;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Enter the value for index " << i << ": ";
    //     cin >> arr[i];
    //     cout << endl;
    // }
    // // printing array
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // // 1 2 3 4 5

    // // que  1

    // int arr[10];
    // int n = 10;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Enter the value for index " << i << ": ";
    //     cin >> arr[i];
    //     cout << endl;
    // }
    // // printing array
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    // // doubling up array
    // for (int i = 0; i < n; i++)
    // {
    //     cout << 2 * arr[i] << " ";
    // }

    // que 2
    int arr[5];
    int n = 5;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value for index " << i << " :";
        cin >> arr[i];
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum is: " << sum; // Sum is: 15

    return 0;
}