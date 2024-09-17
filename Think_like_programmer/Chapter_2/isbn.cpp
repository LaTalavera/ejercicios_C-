/*
If you like the Luhn formula problem, try writing a program for a different
check-digit system, like the 13-digit ISBN system. The program could take an
identification number and verify it or take a number without its check digit
and generate the check digit.
*/

#include <iostream>
#include <string>
using namespace std;

enum MenuOptions
{
    VALIDATE_ISBN = 1,
    GENERATE_CHECK_DIGIT = 2
};

bool checkNumberLength(long long number, int choice);
bool validateNumber(long long number);
char generateCheckDigit(long long number);
string addCheckDigitToNumber(char checkDigit, long long number);

int main()
{
    int option;
    int counter = 0;
    long long isbn;
    bool isNumberValid;
    char checkDigit;
    string finalNumber;

    do
    {
        if (counter != 0)
        {
            cout << "Invalid option, please enter a valid option \n";
            cout << "\n";
        }
        cout << "Main menu: \n";
        cout << "1. Validate ISBN  \n";
        cout << "2. Generate check digit \n";
        cout << "Enter your choice: \n";
        cin >> option;
        counter++;
    } while (option != 1 && option != 2);

    switch (option)
    {
    case VALIDATE_ISBN:
        cout << "Enter the 13 digits ISBN: \n";
        cin >> isbn;
        isNumberValid = checkNumberLength(isbn, option);
        if (isNumberValid)
        {
            validateNumber(isbn);
        }
        else
        {
            cout << "Number is smaller or shorther than 13, please enter a valid number \n";
        }
        break;
    case GENERATE_CHECK_DIGIT:
        cout << "Enter the 12 digits to add a valid ISBN: \n";
        cin >> isbn;
        isNumberValid = checkNumberLength(isbn, option);
        if (isNumberValid)
        {
            checkDigit = generateCheckDigit(isbn);
            finalNumber = addCheckDigitToNumber(checkDigit, isbn);
            cout << "The final number is:" << finalNumber << "\n";
        }
        else
        {
            cout << "Number is differrent than 12 numbers, please enter a valid number \n";
        }
        break;
    default:
        cout << "Invalid option. Please select 1 or 2.\n";
        break;
    }
    return 0;
}

// Determine if the input is 12 or 13 numbers
bool checkNumberLength(long long number, int choice)
{
    bool isNumberValid = false;
    string numberString = to_string(number);
    int length = numberString.length();

    if (choice == 1 && length == 13)
    {
        isNumberValid = true;
    }
    if (choice == 2 && length == 12)
    {
        isNumberValid = true;
    }
    return isNumberValid;
}

// If 13 numbers are entered validte it and show a message on screen if either is validated or not
bool validateNumber(long long number)
{
    bool isNumberValid = false;
    string numberString = to_string(number);
    int finalSum = 0;
    int lastDigitToCheck = 12;
    int currentDigit;
    int checkDigit;

    // Iterate the numbers and sum them all
    for (int i = 0; i < numberString.length() - 1; i++)
    {
        currentDigit = numberString[i] - '0';
        // Multiply by 3 every odd digit
        if (i % 2 != 0)
        {
            currentDigit = currentDigit * 3;
        }
        finalSum = finalSum + currentDigit;
    }
    checkDigit = 10 - (finalSum % 10);
    if (checkDigit == 10)
    {
        checkDigit = 0;
    }
    if (checkDigit == numberString[lastDigitToCheck] - '0')
    {
        isNumberValid = true;
    }

    return isNumberValid;
}

// If 12 numbers are entered calculate the check digit and add it to the number
char generateCheckDigit(long long number)
{
    string numberString = to_string(number);
    int currentDigit, checkDigit;
    int finalSum = 0;
    // Iterate the numbers and sum them all
    for (int i = 0; i < numberString.length(); i++)
    {
        currentDigit = numberString[i] - '0';
        // Multiply by 3 every odd digit
        if (i % 2 != 0)
        {
            currentDigit = currentDigit * 3;
        }
        finalSum = finalSum + currentDigit;
    }
    checkDigit = 10 - (finalSum % 10);
    if (checkDigit == 10)
    {
        checkDigit = 0;
    }
    char checkDigitChar = '0' + checkDigit;
    return checkDigitChar;
}

string addCheckDigitToNumber(char checkDigit, long long number)
{
    string numberString = to_string(number);
    cout << "NumberString: " << numberString << endl;

    numberString += checkDigit;
    cout << "Number plus check Digit = " << numberString << endl;
    return numberString;
}