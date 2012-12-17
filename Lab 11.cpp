//==============================
//Name:        Steve Graser
//Project: Lab 11
//Class:    CS111
//Date:        12/4/12
//==============================

#include <iostream>
#include <fstream> // for file stream for input/output
using namespace std;

// Function Prototypes
void getValues(ifstream &inFile, double values[]);
double findBig(double &big, double values[]);
double findSmall(double &small, double values[]);
double findAverage(double &avg, double values[]);
double values[6], big, small, avg, total; // Global Arrays Defined

int main()
{
  // CTRL+F5
	char path[150];
	ifstream inFile; // Open the file
	int lines; // Reads in amount of lines
	char Name[150];
	char Grade[150];

	inFile.open("C:\\Users\\Stephen\\Desktop\\Lab11.txt"); //WORK'S DON'T TOUCH
	if(inFile) { //Checks to see if we are in the file 
		cout << "Were in file\n"; // Display Message indicating we can access the file
		cout << "____________________\n"<< endl;
	}

	else {
		if(! inFile) // Make sure the file opens
			cout<<"Error File not open"<<endl; // Display Message indicating we can not find the file
	}
	while(inFile>>Name) //While we are in the File Reading in Names
	{
		cout << Name; // Displays Names
		inFile >> Grade; //Reads in the Grades
		while(strcmp(Grade,"-1")) //compares the first character of each string
		{
			cout << "   " << Grade;
			inFile >> Grade; //Reads the Grades
		}
		cout << endl;
	}
	inFile.close(); // Closes the file
	return 0;
}


//==============================
//Name:       Output
//Were in file
//____________________

//Travis   78   83   46   90
//Parker   98   99   23   45   0   77
//RJ   34   36   57   89
//Jonathan   67   69   85   84   56   26   53   59
//Sarah   98   87   90   93   95   65
//Patrick   87   76   78   54   69   91   92
//Aliaa   74   56   69   92
//Press any key to continue . . .
//==============================
=================================================
