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

	//Read the first name from the file
	inputFile >> name;

	//Initialize the first student and last student (first names)
	firstStudent = name;
	LastStudent = name;
	count = 1;
}