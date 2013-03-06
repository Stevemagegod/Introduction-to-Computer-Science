#include <iostream>
    using namespace std;
 
        //http://www.daniweb.com/software-development/cpp/threads/236072/internet-provider-switch-program-help
     
    int main(){
                double A=9.95;
                double B=14.95;
                double C=19.95;
                double D = 2.00;
                double E = 1.00;
                double MonthlyPay;
                double Hours;
                int choice;
                int total;
 
                        cout << " \t\tThe Internet Service Provider Subscription\n";
                        cout << "1. A.$9.95 per month. 10 hours access. Additional Hours are $2.00\n";
                        cout << "2. B.$14.95 per month. 20 hours access. Additional hours are $1.00\n";
                        cout << "3. C.$19.95 per month. Unlimited access.\n";
                        cout << "Enter your choice: ";
                        cin >> choice;
 
                        if (choice >=1 && choice <=3) {
                        cout << "How many hours would you access: ";
                        cin >> Hours;
 
                        switch (choice) {
                        case 1: {
                        total = A + (Hours - 11)*D;
                        break;
}
                        case 2: {
                        total = B + (Hours - 22)*E;
                        break;
}
 
                        case 3: {
                        total = C;
                        break;
}
 
                        default:
                        cout<<"You enter a wrong value!"<<endl;
                        cout << "The valid choices are 1 through 3. \n Run the program again.";
 
}
 
                        cout << "The total charges is equal to:$ "<<total<<endl;
}
 
                        else if (choice !=3) {
                        cout << "The valid choices are 1 through 3. \n Run the program again.";
}
 
            return 0;
    }
