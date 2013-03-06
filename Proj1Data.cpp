#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
 
using namespace std;
const double FED_TAX = .15, STATE_TAX = .035, SS_TAX = .0575, MED_TAX = .0275, PENSION = .05;
 
void main()
{
        string name = "";
        double gross = 0, net = 0;
        ifstream input("input.txt");
        fstream output("output.txt");
        getline(input, name, ':');
        input >> gross;
        input.close();
        net = (gross-((gross*FED_TAX)+(gross*STATE_TAX)+(gross*SS_TAX)+(gross*MED_TAX)+(gross*PENSION)));
        output << setprecision(2) << showpoint << fixed;
        output << name << endl;
        output << setw(28) << left << setfill('.') << "Gross Amount: " <<  "$" << setw(7) << setfill(' ') << right << gross << endl << endl;
        output << setw(28) << left << setfill('.') << "Federal Tax: " << "$" << setw(7) << setfill(' ') << right << gross*FED_TAX << endl;
        output << setw(28) << left << setfill('.') << "State Tax:  " << "$" << setw(7) << setfill(' ') << setfill(' ') << right << gross*STATE_TAX << endl;
        output << setw(28) << left << setfill('.') << "Social Security Tax: " << "$" << setw(7) << setfill(' ') << right << gross*SS_TAX << endl;
        output << setw(28) << left << setfill('.') << "Medicare/Medicaid Tax: " << "$" << setw(7) << setfill(' ') << right <<gross*MED_TAX << endl;
        output << setw(28) << left << setfill('.') << "Pension Plan: " << "$" << setw(7) << setfill(' ') << right << gross*PENSION << endl << endl;
        output << setw(28) << left << setfill('.') << "Net Pay: " << "$" << setw(7) << setfill(' ') << right << net << endl;
        output.close();
}
 
 
input.txt
Zach Labelle:3575.00
 
 
output.txt
 
Zach Labelle
Gross Amount: ..............$3575.00
 
Federal Tax: ...............$ 536.25
State Tax:  ................$ 125.13
Social Security Tax: .......$ 205.56
Medicare/Medicaid Tax: .....$  98.31
Pension Plan: ..............$ 178.75
 
Net Pay: ...................$2431.00
