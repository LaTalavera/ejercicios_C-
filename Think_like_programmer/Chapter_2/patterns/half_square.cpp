/*
!Pattern
#####
####
###
##
#
*/

#include <iostream>
using namespace std;

int main()
{
    int lines, columns;
    for (lines = 5; lines > 0; lines--)
    {
        for (columns = 0;  columns < lines; columns++)
        {
            cout << "#";
        }
        cout << "\n";
    }

    return 0;
}