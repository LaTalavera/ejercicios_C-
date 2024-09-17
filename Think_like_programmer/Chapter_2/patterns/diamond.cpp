/*
!Pattern to draw
   ##
  ####
 ######
########
########
 ######
  ####
   ##
*/

#include <iostream>
using namespace std;

//<-- REFACTORED WAY --->
int main()
{
    const int total_rows = 8;
    int rows, columns, symbols, spaces;
    int middle_row = total_rows / 2;

    for (rows = 1; rows <= total_rows; rows++)
    {
        // Calculate spaces and symbols
        spaces = abs(middle_row - rows);
        symbols = total_rows - 2 * spaces;

        // Loop to print spaces
        for (int i = 0; i < spaces; i++)
        {
            cout << " ";
        }
        // Loop to print symbols
        for (columns = 0; columns < symbols; columns++)
        {
            cout << "#";
        }
        cout << endl;
    }
    return 0;
}

// <-- NO REFACTORED WAY --->

// int main()
// {
//     int rows, columns, symbols, spaces;
//     int middle_row = 4;

//     for (rows = 1; rows <= 8; rows++)
//     {
//         if (rows <= middle_row)
//         {
//             symbols = rows * 2;
//             spaces = abs(middle_row - rows);
//         }
//         else
//         {
//             symbols = (8 - rows + 1) * 2;
//             spaces = (rows - middle_row) - 1;
//         }

//         // Loop to print spaces
//         for (int i = 0; i < spaces; i++)
//         {
//             cout << " ";
//         }
//         // Loop to print symbols
//         for (columns = 0; columns < symbols; columns++)
//         {
//             cout << "#";
//         }
//         cout << endl;
//     }
//     return 0;
// }