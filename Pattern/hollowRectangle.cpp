#include <iostream>
using namespace std;

// Print Hollow Rectangle
//   Row0 ---    * * * * *
//   Row1 ---     *         *
//   Row2 ---    * * * * *

// rule
// break row and colom
//

int main()
{
    // outer loop for row
    for (int row = 0; row < 3; row= row + 1)
    {
        // inner loop for col
        if (row == 0 || row == 2)
        {
            for (int row = 0; row < 5; row = row + 1)
            {
                cout << "* ";
            }
        }else{
            cout << "* ";
            for (int col = 0; col < 4; col = col +1)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
}