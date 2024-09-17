//!pseudocode
/*
mark first element as sorted

for each unsorted element X

  'extract' the element X

  for j = lastSortedIndex down to 0

    if current element j > X

      move sorted element to the right by 1

    break loop and insert X here
*/

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    cout << "Initial array: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n\n";

    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        cout << "Considering key = " << key << "\n";
        cout << "Array before insertion: ";
        for(int k = 0; k < n; k++) cout << arr[k] << " ";
        cout << "\n";

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;

            cout << "Shifting: " << arr[j + 1] << " to the right\n";
        }
        arr[j + 1] = key;

        cout << "Array after inserting key = " << key << ": ";
        for(int k = 0; k < n; k++) cout << arr[k] << " ";
        cout << "\n\n";
        cout << "===========================" << endl;
    }
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 9 , 105, 1 , 45, 67 ,88,4, 32, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    cout << "Array ordenado: " << endl;

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
