//! pseudocode

/*
repeat (numOfElements - 1) times

  set the first unsorted element as the minimum

  for each of the unsorted elements

    if element < currentMinimum

      set element as new minimum

  swap minimum with first unsorted position
*/

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    cout << "Initial array: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n\n";

    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        cout << "Cycle start, initial min_idx = " << min_idx << " (" << arr[min_idx] << ")\n";

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
                cout << "New min found at index " << min_idx << " (" << arr[min_idx] << ")\n";
            }
        }

        // Swap the found minimum element with the first element
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;

        cout << "After swapping: ";
        for(int k = 0; k < n; k++) cout << arr[k] << " ";
        cout << "\n\n";
        cout << "===========================" << endl;
    }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
