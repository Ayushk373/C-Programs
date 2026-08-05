#include <iostream>
using namespace std;

int binarySearch(int A[], int low, int high)
{
    int key, mid;

    cout << "Enter the element to search: ";
    cin >> key;

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (key == A[mid])
        {
            return mid;
        }

        if (key > A[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int A[] = {2, 3, 7, 8, 9, 11, 13, 19};

    cout << "Array elements: ";
    for (int i = 0; i < 8; i++)
    {
        cout << A[i] << "\t";
    }
    cout << endl;
    
    int result = binarySearch(A, 0, 7);
    
    if (result == -1)
    {
        cout << " Element not found ";
    }
    else
    {
        cout << " Element found ";
    }
    return 0;
}
  
