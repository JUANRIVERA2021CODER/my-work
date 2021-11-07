#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Limit variable is used to set the limit of the triangle
    int limit {15};
    // LimitRow variable is used to start the right half of the triangle
    int limitRow{1};
    
    // the outer loop is used to iterate the rows 1 thru limit
    for(int x{1}; x <= limit; x++){
        // As the loop goes thru each iteration it will store the current row in limitRow
        limitRow++;
        // This loop will add the spaces to the left of each row depending the value of each it will assign this amount of spaces to variable spaces
        for(int spaces{x}; spaces < limit; spaces++){
            cout << "     ";
        }
        cout << setw(5);
        cout << x;
        // This part is because after 10 some formatting was causing some numbers not to be aligned
        if(x > 9)
            cout << "";


        for(int y = x - 1; y > 0; y--){
            cout << setw(3);
            if (y < 10 && x > 10)
                cout << "    " << y;

            else if(y <= 15 && x > 10)
                cout << "   " << y << "";
            else
            {
                cout << "    " << y;
            }

        }
        // this last loop will activate as soon as each row finishes to add the right side of the triangle
        for(int z = 2; z < limitRow; z++){
            cout << "    " << z;
        }

        cout << endl;
    }

    return 0;
}
