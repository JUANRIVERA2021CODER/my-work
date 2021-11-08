// This program demonstrates the searchList function, which
// performs a linear search on an integer array.
#include <iostream>

using namespace std;

// Function prototype
int searchList(const int[], int, int);
int binarySearch(const int array[], int size, int value);
const int SIZE = 10000;

int main()
{
    int tests[SIZE] = {};
    int results;

    for (int i = 1; i < 10000; i++)
    {
        tests[i] = i;
    }

    // search the array for 100
    results = binarySearch(tests, SIZE, 9999);

    // If  returned -1, then value was not found.
    if (results == -1)
        cout << "You did not earn 100 points on any test\n";
    else
    {
        cout << "You searched 52 points on test ";
        cout << (results + 1) << endl;
    }
    return 0;
}

//*****************************************************************
// The searchList function performs a linear search on an         *
// integer array. The array list, which has a maximum of numElems *
// elements, is searched for the number stored in value. If the   *
// number is found, its array subscript is returned. Otherwise,   *
// −1 is returned indicating the value was not in the array.      *
//*****************************************************************

int searchList(const int list[], int numElems, int value)
{
    int index = 0;
    int position = -1;
    bool found = false;
    int counter = 0;

    while (index < numElems && !found)
    {
        if (list[index] == value)
        {
            found = true;
            position = index;
        }
        index++;
        cout << "counter: " << ++counter << endl;
    }
    return position;
}

//***************************************************************
// The binarySearch function performs a binary search on an     *
// integer array. array, which has a maximum of size elements,  *
// is searched for the number stored in value. If the number is *
// found, its array subscript is returned. Otherwise, −1 is     *
// returned indicating the value was not in the array.          *
//***************************************************************

int binarySearch(const int arr[], int sizeNum, int value)
{
    int counter = 0;
    int first = 0,
        last = sizeNum - 1,
        middle,
        position = -1;
    bool found = false;

    while (!found && first <= last)
    {
        cout << "Counter: " << ++counter << endl;
        middle = (first + last) / 2;
        if (arr[middle] == value)
        {
            found = true;

            position = middle;
        }
        else if (arr[middle] > value)
            last = middle - 1;
        else
            first = middle + 1;
    }
    return position;

}
