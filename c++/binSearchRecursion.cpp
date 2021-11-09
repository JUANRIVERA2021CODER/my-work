#include <iostream>

using namespace std;

int binarySearch(int array[], int first, int last, int value);

int main()
{
	int tests[20] = { 101, 142, 147, 189, 199, 207, 222,
					  234, 289, 296, 310, 319, 388, 394,
					  417, 429, 447, 521, 536, 600 };

	int result = binarySearch(tests, 0, 19, 536);

	cout << result << endl;
	return 0;
}

int binarySearch(int array[], int first, int last, int value)
{
	int middle;

	if (first > last)
		return -1;
	middle = (first + last) / 2;
	if (array[middle] == value)
		return middle;
	if (array[middle] < value)
		return binarySearch(array, middle + 1, last, value);
	else
		return binarySearch(array, first, middle - 1, value);
}
