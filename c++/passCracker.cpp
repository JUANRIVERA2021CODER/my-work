#include <iostream>
#include <string>
using namespace std;
int main() {
	// 22 -> 122 little letters
	string password = "juan";
	string solution = "0000";
	int x = 97;
	int b = 97;
	int c = 97;
	int d = 97;
	while (password.compare(solution) != 0)
	{
		solution[0] = static_cast<char>(x);
		solution[1] = static_cast<char>(b);
		solution[2] = static_cast<char>(c);
		solution[3] = static_cast<char>(d);
		cout << solution << endl;
		x++;
		if (x == 122) {
			b++;
			x = 97;
		}
		
		if (b == 122) {
			c++;
			b = 97;
		}
		if (c == 122)
		{
			d++;
			c = 97;
		}
		if (d == 122)
			break;
	}
}
