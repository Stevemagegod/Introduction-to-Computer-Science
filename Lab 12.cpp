#include <iostream>
    using namespace std;
 
    int main() {
                const int QUESTIONS = 20;        //1    2    3    4    5    6    7    8    9    10   11   12   13  14  15     16   17   18  19   20
        char correctAnswers[QUESTIONS] = {'B', 'D', 'A', 'A', 'C', 'A', 'B', 'A', 'C', 'D', 'B', 'C', 'D', 'A', 'D', 'C', 'C', 'B', 'D', 'A'};//number of questions is 20 in the test, and then we store the answers in an array
        char studentAnswers[QUESTIONS];
        bool badEntry = false;
        int answeredCorrectly = 0;
                int * x;
                const char wrong = 'X', right = '.', A = 'A', B = 'B', C = 'C', D = 'D'; //we use char right & wrong to compare against since if we try to compare against 'A' it'll compare incorrectly
 
                cout << "Enter Answers:";
                cin>>studentAnswers;
                if(studentAnswers || right)
                        cout<<"Valid";
                else
                        if(studentAnswers[QUESTIONS]==wrong);
                        while(studentAnswers[QUESTIONS] && correctAnswers[QUESTIONS]);
                        cout<<"Invalid";
 
                        return 0;
 
        }
