// Matthew Martinez
// p3a.cpp
// 09/02/2018 - 09/02/2018
//Type up the Sample Program below (including all comments!).
//
//Submit your code, including how the program ran using multiline comment at the bottom /* */.


#include <iostream>
using namespace std;

int main() {
    // DECLARE variables
    double weight; // DOUBLE - 8 bytes, has a decimal, Ex: 3.14, 2.71
    float height;  // FLOAT  - 4 bytes, has a decimal, Ex: 3.14, 2.71
    int Age; // INTEGER      - 4 bytes, NO decimal   , Ex: 1.00, 3.00

    // INITIALIZE variables
    weight = 183.54; // Initialize variable wieght to 183.5
    height = 6.0; // Initialize variable height to 6.0

    // OUTPUT: Prompt the user to enter age
    cout << "Please enter a whole number for age: ";
    // INPUT: The user types something on the keyboard, and presses Enter
    cin >> Age; // INITIALIZE Age to whatever the user enters
    // OUTPUT: SHow the value of variables, and what user entered
    cout << "Weight = " << weight << "\n" << "Height = " << height << "\n";
    cout << "The entered age was: " << Age << "\n";
    cout.setf(ios::fixed); // To specify fixed point notations
    cout.setf(ios::showpoint); // To specify that the decimal point will always be shown
    cout.precision(1); // To specify that ONE decimal place will always be shown
    cout << "The Weight with 1 decimal is " << weight << endl;

    return 0;
}

/*
/home/matthew/CLionProjects/CSIS45/cmake-build-debug/CSIS45
Please enter a whole number for age: 34
Weight = 183.54
Height = 6
The entered age was: 34
The Weight with 1 decimal is 183.5

Process finished with exit code 0
*/
