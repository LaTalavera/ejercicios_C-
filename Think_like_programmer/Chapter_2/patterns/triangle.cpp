/*
!Patern to draw
#
##
###
####
###
##
#
*/

#include <iostream>
using namespace std;

int main()
{
    for (int rows = 1; rows <= 7; rows++)
    {
        int diff = abs(rows - 4);
        for (int columns = 0; columns < 4 - diff; columns++)
        {
            cout << "#";
        }
        cout << "\n";
    }
    return 0;
}