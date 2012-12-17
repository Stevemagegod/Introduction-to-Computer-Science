// Lab.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std; 

class RestaurantBill {

int main() {
  double Tax=6.75;
    double Charge=44.50;
    double percent=15;

	percent = (Charge/Tax);
	cout << "!!!The Tip is....!!!" << endl;
	
	return 0;
}
}
