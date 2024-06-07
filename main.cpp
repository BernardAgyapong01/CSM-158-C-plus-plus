#include <iostream>

using namespace std;

int main()
{
    char grade;
    cout<< "Welcome to the interview room "<<endl;
    cout<< "Enter your grade: ";
    cin>> grade;

    switch (grade)
    {
    case'A':
    case'a':
        cout<< "Your grade is within the range 100-70. \nYou are welcome to the interview.";
        break;

    case'B':
    case'b':
        cout<< "Your grade is within the range 69-60. \nYou are welcome to the interview.";
        break;

    case'C':
    case'c':
        cout<< "Your grade is within the range 59-50. \nYou are welcome to the interview.";
        break;

    case'D':
    case'd':
        cout<< "Your grade is within the range 49-40. \nYou are welcome to the interview.";
        break;

    case'F':
    case'f':
        cout<< "Your grade is within the range 39-0. \nYou are welcome to the interview.";
        break;


    default:
        cout<< "Please enter your grace again";

    }

    return 0;
}
