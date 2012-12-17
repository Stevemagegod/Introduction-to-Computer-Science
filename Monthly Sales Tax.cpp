// Lab.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;
void main()

{
  //This program will help file and list monthly sales tax

	string month;
	int year;
	double collection;
	double sales;
	double totalTax;
	double SaleTaxState;
	double SaleCountyTax; //error
	double StateTax;
    double CountyTax;
	StateTax=0.04;
	CountyTax=0.02;
	
	cout<<fixed<<showpoint<<setprecision(1)<<endl;
	cout<<"This is a Monthly Sales Tax Program. Please enter the month.\n";
	cin>>month;
	cout<<"Enter the year. \n";
	cin>>year;
	cout<<"What is the total amount you have collected in your register? \n";
	cin>>collection;


	totalTax=SaleCountyTax+SaleTaxState;
	sales=collection-totalTax;
	SaleCountyTax=(sales*CountyTax)-sales;
	SaleTaxState=(sales*StateTax)-sales;
	
	
	cout<<"Month: "<<month<<setw(6)<<year<<endl;
	cout<<"---------------------- \n";
	cout<<"Total Collected: "<<setw(9)<<collection<<endl;
	cout<<"Sales: "<<setw(9)<<sales<<endl;
	cout<<"County Sales Tax: "<<setw(9)<<SaleCountyTax<<endl;
	cout<<"State Sales Tax: "<<setw(9)<<SaleTaxState<<endl;
	cout<<"Total Sales Tax"<<setw(9)<<totalTax<<endl;
}
