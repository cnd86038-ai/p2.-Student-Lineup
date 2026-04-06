#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream inputFile("lineup.txt");
	string name;
	string firstStudent;
	string LastStudent;
	int count = 0;

	//Open the file
	inputFile.open("lineup.txt");

	//Check if the file opened successfully
	if (!inputFile)
	{
		cout << "Error opening file!" << endl;
		return 1; // Exit with an error code
	}
}