#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int limit {15};
    int limitRow{1};
    for(int x{1}; x <= limit; x++){
        limitRow++;
        for(int spaces{x}; spaces < limit; spaces++){
            cout << "     ";
        }
        cout << setw(5);
        cout << x;

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

        for(int z = 2; z < limitRow; z++){
            cout << "    " << z;
        }

        cout << endl;
    }

    return 0;
}
