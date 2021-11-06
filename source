#include <iostream>
#include <array>
#include <string>
#include <iomanip>
#include <random>

using namespace std;

//Constants
const size_t rows{ 8 };
const size_t columns{ 8 };
const size_t rowsMovement{ 8 };
const size_t columnsMovement{ 8 };
const array<int, rowsMovement> horizontal{ 2, 1, -1, -2, -2, -1, 1, 2 };
const array<int, columnsMovement> vertical{ -1, -2, -2, -1, 1, 2, 2, 1 };

//Functions prototype
void printBoard(const array<array<string, columns>, rows>&);
void initBoard(array<array<string, columns>, rows> &a);

int main() {
	//this will generate the new space to choose randomly to move the knight
	default_random_engine engine{ static_cast<unsigned int>(time(0)) };
	uniform_int_distribution<unsigned int> randomInt{ 0, 7 };

	array<array<string, columns>, rows> arrayBoard{};
	int currentRow = 3;
	int currentColumn = 4;
	initBoard(arrayBoard);
	arrayBoard[currentRow][currentColumn] = "K";

	//Need to come up a way to move the knight to a new space, everytime the knight move update the counter, 
	//However, before moving to a new space check if this space is already taken, if it is try next spot
	//when cant move anymore because all legal moves are already taken end the challenge.
	int counter{ 0 };
	int flag{ 0 };
	bool terminate{ false };
	int exit = 0;
	while (!terminate) 
	{
		int moveNumber = randomInt(engine);
		//std::cout << "MoveNumber: " << moveNumber << endl;
		if ((currentRow + horizontal[moveNumber] >= 0 && currentRow + horizontal[moveNumber] < 8) && (currentColumn + vertical[moveNumber] >= 0 && currentColumn + vertical[moveNumber] < 8) && flag < 11)
		{
			if (arrayBoard[currentRow + horizontal[moveNumber]][currentColumn + vertical[moveNumber]] == " ") 
			{
				currentRow = currentRow + horizontal[moveNumber];
				currentColumn = currentColumn + vertical[moveNumber];
				arrayBoard[currentRow][currentColumn] = to_string(counter);
				counter++;

			}
			else 
			{
				flag++;
				continue;
			}
		}
		if (flag > 10) 
		{	
			size_t x{ 0 };
			
			for (; x < 8; x++)
			{
				
				if ((currentRow + horizontal[x] >= 0 && currentRow + horizontal[x] < 8) && (currentColumn + vertical[x] >= 0 && currentColumn + vertical[x] < 8))
				{
					std::cout << "projected Row: " << currentRow + horizontal[x] << endl;
					std::cout << "projected column: " << currentColumn + vertical[x] << endl;

					if (arrayBoard[currentRow + horizontal[x]][currentColumn + vertical[x]] == " ")
					{
						currentRow = currentRow + horizontal[x];
						currentColumn = currentColumn + vertical[x];
						arrayBoard[currentRow][currentColumn] = to_string(counter);
						counter++;

					}
					else
					{
						exit++;
						if (exit == 8)
							terminate = true;
					}
				}
				std::cout << "exit: " << exit << endl;
			}

		}
		std::cout << "current row: " << currentRow << endl;
		std::cout << "current column: " << currentColumn << endl;
		std::cout << "flag: " << flag << endl;
		printBoard(arrayBoard);

	}


	printBoard(arrayBoard);
	std::cout << "Last count: " << counter - 1 << endl;
	return 0;
}
void initBoard(array<array<string, columns>, rows>& a) {
	int counter{ 0 };
	for (size_t row{ 0 }; row < a.size(); row++)
	{
		for (size_t column{ 0 }; column < a[row].size(); column++)
		{
			a[row][column] = " ";
			
		}

	}
}
void printBoard(const array<array<string, columns>, rows>& a) {
	std::cout << "-----------------------------------------" << endl;
	
	for (size_t row{ 0 }; row < a.size(); row++)
	{
		for (size_t column{ 0 }; column < a[row].size(); column++)
		{
			std::cout << "|";
			std::cout << setw(3);
			std::cout << a[row][column] << " ";
		}
		std::cout << "|" << endl;
		std::cout << "-----------------------------------------" << endl;
	}
}
