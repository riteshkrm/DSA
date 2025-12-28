#include <iostream>
using namespace std;

// Print Solid Rectangle
//  * * * * *  --- Row0
//  * * * * *  --- Row1
//  * * * * *  --- Row2

int main(){

    // Outer loop For Row Printing
    for(int row = 0 ; row < 3; row = row + 1){
        // Inter loop For Col Printing
        for(int col = 0 ; col < 5; col = col +1){
            cout << "* ";
        }
        cout << endl;
    }
}