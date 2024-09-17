/*
- Knowing which digits to double
- Treating doubled numbers 10 and greater according to their individual digits
- Knowing we’ve reached the end of the number
- Reading each digit separately
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Treating doubled numbers 10 and greater
int checkIfdoubleDigit(int digit)
{
    int doubledDigit, sum;
    doubledDigit = digit * 2;
    if (doubledDigit > 9)
        sum = 1 + (doubledDigit % 10);
    else
        sum = doubledDigit;
    printf("Sum is: %d\n", sum);
    return sum;
}

// Knowing we’ve reached the end of the number
int checkNumberLength(int number)
{
    string numberString = to_string(number);
    int length = numberString.length();
    return length;
}

// Reading each digit separately
// Knowing which digits to double
int calculateSumOfDigits(vector<int> numbersArray, int length)
{
    int total = 0;
    for (int i = 0; i < length; i++)
    {
        if (i % 2 != 0)
        {
            int numberToAdd = checkIfdoubleDigit(numbersArray[i]);
            printf("Number to add: %d\n", numberToAdd);
            total += numberToAdd;
        }
        else
        {
            total += numbersArray[i];
        }
        printf("Total is: %d when i is %d \n", total, i);
    }
    return total;
}

vector<int> convertNumberToArray(int number, int length)
{
    vector<int> numbersArray(length);
    for (int i = 0; i < length; i++)
    {
        numbersArray[i] = number % 10;
        number = number / 10;
    }
    return numbersArray;
}

int main()
{
    int number, numberLength, sumOfNumbers;
    bool checkSumSucess = true;
    cout << "Enter a number : " << endl;
    cin >> number;
    cout << "Entered number is: " << number << endl;

    numberLength = checkNumberLength(number);
    vector<int> numbersArray = convertNumberToArray(number, numberLength);
    sumOfNumbers = calculateSumOfDigits(numbersArray, numberLength);
    printf("Sum of numbers is: %d\n", sumOfNumbers);
    if (sumOfNumbers % 10 == 0)
    {
        cout << "The number is valid" << endl;
    }
    else
    {
        cout << "The number is invalid" << endl;
    }
    return 0;
}