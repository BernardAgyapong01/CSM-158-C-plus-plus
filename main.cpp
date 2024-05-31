#include <iostream>

using namespace std;

int main()
{
    int examscore = 0;

    cout << "what is your exam score?" << endl;
    cin >> examscore;

    if (examscore>= 70){
        cout <<"Your grade is A" << endl;
    }

      else if (examscore>= 60){
        cout <<"Your grade is B" <<endl;
    }

        else if (examscore>= 50){
            cout<<"Your grade is C" <<endl;
        }

            else if (examscore>= 40){
                cout<<"Your grade is D" <<endl;
            }

                else{
                    cout<< "Your grade is F" <<endl;
                }
    return 0;
}
