#include <iostream>
#include <iomanip> // for formatting manipulators
#include <fstream> // for file stream for input/output
#include<string>
     
    using namespace std;
     
    int main() {
  	int lines;
		int i=0;
		int highestGrade=0;
		int currentGrade=0;
		string studentName;
		ifstream infile,inputfile;
		
		infile.open ("lab10data.txt");
		if(infile) 
		{
			cout << "Were in file";
			infile>>lines;							// Were reading in the number of students. 

			for(i=0; i < lines; i++)				// Do everything in here for the number of students in file
			{
				infile.ignore(1);
				getline(infile,studentName, ' ');		// Getting the students name up until the space
				infile >>currentGrade;					// Reading the current grade
				while(currentGrade != -1)				// While Current Grade is not -1
				{
					if(currentGrade>highestGrade)			// If the current grade is greater than highest grade
						highestGrade=currentGrade;				// We want the highest grade to be the current grade
					infile >>currentGrade;					// We are reading a new current grade
				}
				cout<<"The highest grade for "<<studentName << " is " <<highestGrade<<endl;
			}
		}
		else {
			cout<<"Error File not open"<<endl;
		}
         return 0;
    }

//Were in fileThe highest grade for Brad is 85
//The highest grade for Dave is 93
//The highest grade for Steve is 93
//The highest grade for Corey is 93
//The highest grade for Tamara is 93
// Press any key to continue . . .
