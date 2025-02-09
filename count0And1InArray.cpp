#include <iostream>
using namespace std;

void countZeroAndOne(int arr[], int size)
{
    int zeroCount = 0;
    int oneCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        if (arr[i] == 1)
        {
            oneCount++;
        }
    }
    cout << "Zero Count is: " << zeroCount << endl;
    cout << "One Count is: " << oneCount << endl;
}

int main()
{

    int arr[] = {0, 1, 0, 1, 1, 0, 1, 0};
    int size = 8;

    countZeroAndOne(arr, size);

    return 0;
}