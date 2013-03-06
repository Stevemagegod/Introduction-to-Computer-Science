//============================================================================
// Name        : Intro.cpp
// Author      : Stephen Graser
// Class       : Introduction to C++
// Copyright   : Your copyright notice
// Description : Class Project
//============================================================================

#include <iostream>
#include <iomanip> // for formatting manipulators
#include <fstream> // for file stream for input/output
#include<string>
using namespace std;

int main () {

ifstream infile;
string line;
const int size = 60;
char Rlastname [20], Rfirstname [20], Rpay [7], Rhour [3], Rinsurance [2], Runion [2];
double Rearned, Runionfee, Rinsurancefee, Rnetpay;

infile.open ("U:\\proj1data.txt");
cout << "reading data from the file....\n\n";

infile >> Rfirstname >> Rlastname >> Rpay >> Rhour >> Runion >> Rinsurance;
infile >> Rfirstname >> Rlastname >> Rpay >> Rhour >> Runion >> Rinsurance;
infile >> Rfirstname >> Rlastname >> Rpay >> Rhour >> Runion >> Rinsurance;

Rearned = Rpay[7] * Rhour[3]; // calulates earned pay by multiplying hourly pay by hours worked

if (Runion[2] == 'Y') {
Runionfee = -24;
cout << "Are you in a Union? Yes or No....\n\n";
}

else{
Runionfee = -0;
}

if (Rinsurance[2] == 'Y'){
Rinsurancefee = -53.24;
}

else {
Rinsurancefee = -0;
}

Rnetpay = Rearned - Runionfee - Rinsurancefee;

ofstream outputFile;
outputFile.open("U:\\ proj1ResultsStephenGraser.txt");

cout << " Writing new data to file proj1Result.txt now!\n";
outputFile << "Stephen Graser"<< 
outputFile <<"Net Pay"<< 
outputFile << "Total Earned"<< 
outputFile << "Insurance Fee"<<
outputFile << "Union Fee"<<
outputFile <<"_____"<<
outputFile << Rlastname << Rfirstname << Rearned << Runionfee << Rinsurancefee << Rnetpay <<endl;
outputFile << Rlastname << Rfirstname << Rearned << Runionfee << Rinsurancefee << Rnetpay <<endl;
outputFile << Rlastname << Rfirstname << Rearned << Runionfee << Rinsurancefee << Rnetpay <<endl;

outputFile.close();
cout << " Writing finished....";

return 0;

}
========================================================================================================
CS111 – Introduction to Computer Science
Fall 2012
Mr. MacKay
Project 1 – due Monday, November 5th  at the beginning of class

General Description:  The Company you work for has asked you to write a program that reads some hourly employee pay information from a file, calculates their Net Pay, and saves a formatted report to a file.

Details:
1.  The input file is called proj1data.txt, and is in the folder S:\mackay\CS111
2.	There are only 3 hourly employees in the company, so there are only 3 lines of information in the input file
3.	Each line of input contains the following information for each employee, separated by spaces:
a.	First name (up to 20 characters)
b.	Last name (up to 20 characters)
c.	Hourly pay rate
d.	Number of hours worked
e.	Whether or not they are in the union (‘Y’ or ‘N’)
f.	Whether or not they have health insurance (‘Y’ or ‘N’)
•	If they do have health insurance, there will be another integer
indicating how many dependents they have
For Example:
	Joe Smith 12.75 48 Y N
	Susan Storm 18.64 39.5 N Y 3
4.	You must calculate the employees net pay based on the following:
a.	Their total earned is the rate times the hours
b.	If they are in the union, the union dues, $24, must be deducted from their pay
c.	If they have health insurance, their insurance premium of $10.34 per dependent must be deducted from their pay

5.	The output will be stored in a file called proj1ResultsFirstLast.txt, where First and Last are YOUR first name and last name.
6.	The output will have this format: (using the example input from above)
Last Name         First Name        Total Earned  Union Dues  Insurance  Net Pay
Smith                 Joe                              612.00            24.00           0.00     588.00
Storm                 Susan                          736.28              0.00         31.02     705.26

a.	The employees Last Name and First Name should be left justified
b.	All the other information will be right justified, with 2 decimal places
c.	There should only be 1 header row, and underlining will be done as in the labs
d.	getting the output to format exactly will be difficult, because Wordpad, even though called a ‘plain’ text editor, uses fonts in which different characters have different widths

7.	I do NOT want you to use a loop in this program (for those that know how.)  There are only three employees, so the code for input and output will be repeated 3 times.

8.	Your code should be commented throughout, including your name, class and project number at the top

9.	You will hand in your .cpp file and your output file
