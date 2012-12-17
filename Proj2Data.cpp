//==============================
//Name:       Stephen Graser
//Project:    Project 2
//Class:    CS111
//Date:        12/3/12
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
    char path[150]; //Reads in the Numbers
    ifstream inFile; // Open the file
	int lines; // Reads in amount of lines

	//S:\\mackay\\CS111
    inFile.open("S:\\mackay\\CS111\\proj2data.txt"); //WORK'S DON'T TOUCH
	if(inFile) { //Checks to see if we are in the file 
			cout << "Were in file\n"; // Display Message indicating we can access the file
			cout << "____________________\n"<< endl;
		}

    else {
			if(! inFile) // Make sure the file opens
			cout<<"Error File not open"<<endl; // Display Message indicating we can not find the file
		}
    inFile >> lines; // Reads in amount of lines
    for (int i=1; i <= lines; i++) // Loop to call functions
    {
        getValues(inFile, values);    // Calls the getValues function
        findBig(big, values);            // Calls the findBig function
        findSmall(small, values);        // Calls the findSmall function
        findAverage(avg, values);        // Calls the findAverage function

        // Formatted results        
        cout << "The numbers on line " << i << " are: ";
        for (int count=0; count < 6; count++) //Simple For Loop
            cout << values[count] << " "; //Displays value count on Screen

        cout << "\nThe largest number on line " << i << " is: " << big << endl;
        cout << "The smallest number on line " << i << " is: " << small << endl;
        cout << "The average number on line " << i << " is: " << avg << endl;
        cout << "---------------------------------------------------" << endl;
    }
    cout << "\nFinished.\n";

    inFile.close(); // Closes the file
    return 0;
}

void getValues(ifstream &inFile, double values[])    // getValues function definition
{
    for(int i=0; i<6; i++) // Read in values one at a time
    {
        inFile >> values[i]; //if infile reading in value i and displaying it on Screen
    }
}

double findBig(double &max, double values[])    // findBig function definition
{
    max = 0;
    for (int i=0; i < 6; i++)
    {
        if(values[i] > max) //if Value i Greater then Maxs
            max = values[i];
    }
    return max;
}

double findSmall(double &min, double values[])    // findSmall function definition
{
    min = 100;
    for (int i=0; i < 6; i++)
    {
        if(values[i] < min)
            min = values[i];
    }
    return min;
}

double findAverage(double &average, double values[])    // findAverage function definition
{
    average=0, total=0;
    for(int i=0; i < 6; i++)
        total+=values[i];
    
    average = total/6;
    return average;
}
