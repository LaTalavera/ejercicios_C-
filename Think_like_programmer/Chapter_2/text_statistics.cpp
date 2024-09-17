/*
Write a program that reads a line of text, counting the number of words,
identifying the length of the longest word, the greatest number of vowels
in a word, and/or any other statistics you can think of
*/

#include <iostream>
#include <string>
using namespace std;

int countNumberOfWords(string sentence);
string getLongestWord(string sentence);
int greatestNumberOfWovels(string sentence);

int main()
{
    // Read a input from the user and save it into a string
    int numberOfWords = 0;
    int numberOfWovels = 0;
    string longestWord;
    string lineOfText;

    cout << "Enter a sentence: " << endl;
    getline(cin, lineOfText);

    numberOfWords = countNumberOfWords(lineOfText);
    longestWord = getLongestWord(lineOfText);
    numberOfWovels = greatestNumberOfWovels(lineOfText);
    cout << "Number of words: " << numberOfWords << endl;
    cout << "Longest word: " << longestWord << endl;
    cout << "Greatest number of wovels: " << numberOfWovels << endl;

    return 0;
}

// Count numberof words within the enterede sentence
int countNumberOfWords(string sentence)
{
    int wourdCounter = 1;

    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] == ' ')
        {
            wourdCounter++;
        }
    }

    return wourdCounter;
}

// Check which word has the longest Length
string getLongestWord(string sentence)
{
    string auxString = "";
    int auxCounter = 0;
    int start = 0;

    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] == ' ')
        {
            // Compare the current word with the longest word found so far
            if (auxCounter > auxString.length())
            {
                auxString = sentence.substr(start, auxCounter);
            }
            // Reset counter and update start position for the next word
            auxCounter = 0;
            start = i + 1;
        }
        else
        {
            // Increment counter for the current word
            auxCounter++;
        }
    }
    // Final comparison to handle the last word
    if (auxCounter > auxString.length())
    {
        auxString = sentence.substr(start, auxCounter);
    }

    return auxString;
}

// TODO: Make this function return the word with more wovels or do it in a separate function 
// Check which word has the greatest number of wovels
int greatestNumberOfWovels(string sentence)
{
    int auxGreatestNumberOfWOvels = 0;
    int currentWordWovels = 0;

    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u')
        {
            currentWordWovels++;
        }

        if (sentence[i] == ' ')
        {
            if (auxGreatestNumberOfWOvels < currentWordWovels)
            {
                auxGreatestNumberOfWOvels = currentWordWovels;
            }
            currentWordWovels = 0;
        }
    }

    // Final comparison to handle the last word
    if (currentWordWovels > auxGreatestNumberOfWOvels)
    {
        auxGreatestNumberOfWOvels = currentWordWovels;
    }

    return auxGreatestNumberOfWOvels;
}