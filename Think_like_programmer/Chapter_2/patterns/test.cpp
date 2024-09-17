#include <iostream>
using namespace std;

int main()
{
    int rows, columns, symbols, spaces;
    int middle = 4; // Middle row for an 8-row diamond

    for (rows = 1; rows <= 8; rows++)
    {
        // Calculate spaces
        spaces = abs(middle - rows);

        // Calculate symbols
        if (rows <= middle)
        {
            symbols = rows * 2;
        }
        else
        {
            symbols = (8 - rows + 1) * 2;
        }

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