/*The Towers of hanoi is a mathematical game that is often used in computer science test-
  books to illustrate the power of recursion. The game uses three pegs and a set of discs with holes
  through their centers. The discs are stacked on one of the pegs.*/

// If you only have one disc, the solution is simple: move the disc from peg 1 to peg 3
// Base Case: if only 1 disk move from peg 1 to peg 3

// if 2 disc:
// move disc 1 to peg 2
// move disk 2 to peg 3
// move disk 1 to peg 3
// 1 - 3 - 7 (+2, +4, +8?) - 15

// technically the overall solution to to the problem is to move
// Move n discs from peg 1 to peg 3 using peg 2 as a temporary peg
// Therefore:
/*
	To move n discs from peg A to peg C, using peg B as a temporary peg:
	if n > 0 then
		move n - 1 discs from peg A to peg B using C as a temporary peg
		move n disc to peg C
		move n - 1 discs from peg B to peg C  using A as a temporary peg
	End if

 The base case for the algorithm is reach when there are no more discs to move. The following
 code is a for a function that implements this algorithm
 NOTE: the function doesnt actually MOVE ANYTHING, but displays instruction indicating all the discs
 moves to make.

 */

#include <iostream>
using namespace std;

void moveDiscs(int discQty, char fromPeg, char toPeg, char tempPeg);

int main()
{
	moveDiscs(5, 'A', 'C', 'B');
	return 0;
}

void moveDiscs(int discQty, char fromPeg, char toPeg, char tempPeg)
{
	if (discQty > 0)
	{
		moveDiscs(discQty - 1, fromPeg, tempPeg, toPeg);
		cout << "Move disc " << discQty << " from peg " << fromPeg << " to peg " << toPeg << endl;
		moveDiscs(discQty - 1, tempPeg, toPeg, fromPeg);
	}
}
