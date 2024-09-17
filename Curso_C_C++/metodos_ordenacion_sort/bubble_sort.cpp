//! pseudocode
/*
do

  swapped = false

  for i = 1 to indexOfLastUnsortedElement-1

    if leftElement > rightElement

      swap(leftElement, rightElement)

      swapped = true; ++swapCounter

while swapped
*/

#include <iostream>
using namespace std;

// Compara repetidamente elementos adyacentes a su derecha (+1) y
// los intercambia si están en el orden incorrecto.
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                cout << "I igual a " << i << endl;
                cout << "J igual a " << j << endl;
                cout << arr[j] << endl;
                cout << arr[j + 1] << endl;
                cout << "===========================" << endl;
                // Intercambia arr[j] y arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    cout << "Array ordenado: " << endl;

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
