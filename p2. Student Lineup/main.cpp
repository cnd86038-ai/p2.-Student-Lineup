#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream inputFile("LineUp.txt");
	string name;
	string firstStudent;
	string LastStudent;
	int count = 0;

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

	//Read the rest of the names from the file
	while (inputFile >> name)
	{
		count++;
		//Update the first student if the current name is alphabetically smaller
		if (name < firstStudent)
		{
			firstStudent = name;
		}
		//Update the last student if the current name is alphabetically larger
		if (name > LastStudent)
		{
			LastStudent = name;
		}
	}
	//Display the results
	cout << "Total number of students: " << count << endl;
	cout << "First student in line: " << firstStudent << endl;
	cout << "Last student in line: " << LastStudent << endl;

	//Close the file
	inputFile.close();

	return 0; // Exit with success
}