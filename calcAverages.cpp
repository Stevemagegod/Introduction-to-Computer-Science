// calcAverages.cpp :.
// This program will ask the user if they want to calculate an average, and if so,
// will prompt for the number of scores, and then the scores themselves,
// and then show the average of the scores.
// It will then ask if the user if they want to calculate another average
 
/****************************************************************************/
/* THIS VERSION DOES NOT WORK.  IT IS ACTUALLY MISSING THREE LINES OF CODE  */
/* THAT WILL MAKE IT WORK.  YOUR JOB IS TO FIGURE OUT WHAT AND WHERE THOSE  */
/* LINES OF CODE SHOULD BE                                                  */
/*                                                                          */
/* Hint: You may get a hint about the first one if you compile the code     */
/****************************************************************************/
 
#include <iostream>
 
using namespace std;
 
 
int main()
{
        char answer;
        int numscores=1;
        int counter=1;
        double score=1;
        double total=1;
        double average=1;
 
        cout << "Do you want to calculate an average (Y or N)?";
        cin >> answer;
        cin.ignore(100,'\n');
 
        while( answer == 'Y' || answer == 'y') 
        {
                cout << "How many scores are there to add together?";
 
                cin >> numscores;              
               
                total = 0;                             
                while (counter <= numscores)
                {
                        cout << "Score number " << counter << ":";
                        cin  >> score;
                        total += score;        
                       
                }
 
                average = total/numscores;     
 
                cout << "The average is: " << average << "\n";
 
                cout << "Do you want to calculate another average (Y or N)?";
               
        }
 
        cout << "See you  later!\n";
        return 0;
}
