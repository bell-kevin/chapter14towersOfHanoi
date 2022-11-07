// towersOfHanoi.cpp
//

#include <iostream>
using namespace std;

//prototype
void moveDisks(int, string, string, string);

int numMoves = 0;
int main()

{
	cout << "Chapter 14 Towers of Hanoi by Kevin Bell\n\n";
	int numDisks;
	cout << "Enter the number of disks: ";
	cin >> numDisks;
	cout << "Using " << numDisks << " disks\n\n";
	moveDisks(numDisks, "peg 1", "peg 2", "peg 3");
	cout << "All disks moved in " << numMoves << " moves.\n";
	system("pause");
	return 0;
}

void moveDisks(int n, string start, string temp, string end)
{
	if (n > 0)
	{
		moveDisks(n - 1, start, end, temp);
		//cout << "Move a disk from " << start << " to " << end << endl;
		numMoves++;
		moveDisks(n - 1, temp, start, end);
	}
}
  