/*
!Pattern to draw
########
 ######
  ####
   ##
*/

#include <iostream>
using namespace std;

int main()
{
    const int total_rows = 4;
    const int max_symbols = total_rows * 2;

    for (int rows = total_rows; rows > 0; rows--)
    {
        int spaces = total_rows - rows; // The number of spaces needed on each line
        int symbols = rows * 2;         // The number of # is twice the line number

        // Print spaces
        for (int i = 0; i < spaces; i++)
        {
            cout << " ";
        }

        // Print # characters
        for (int columns = 0; columns < symbols; columns++)
        {
            cout << "#";
        }

        cout << "\n";
    }

    return 0;
}