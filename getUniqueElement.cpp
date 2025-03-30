#include <iostream>
using namespace std;

int getUniqueElement(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {2, 11, 3, 2, 14, 15, 14, 15, 3};
    int size = 9;

    int finalAns = getUniqueElement(arr, size);
    cout << "Unique Element is: " << finalAns << endl;

    return 0;
}