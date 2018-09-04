// Matthew Martinez
// p7.cpp
// 09/03/2018 - 09/03/2018
// Type up the below Sample Program (including all comments!).

#include <iostream>
using namespace std;

int main() {

    int Age;
    cout << "Please enter your age: ";
    cin >> Age;

    // IF, ELSE IF, ELSE chain
    if (Age < 0) {      // an IF gets checked ALWAYS to see it it is TRUE/FALSE
        cout << "Age is LESS than zero, invalid age";
    }
    else if (Age < 18) { // else if gets checked only when previous IF is FALSE
        cout << "Age is LESS than 18";
    }
    else if (Age == 20) { // this gets checked only when previous ELSE IF is FALSE
        cout << "Age is EQUAL TO 20";
    }
    else if (Age != 21) { // this gets checked only when previous ELSE IF is FALSE
        cout << "Age is NOT EQUAL TO 21";
    }
    else {    // Happens automatically when previous ELSE IF is FALSE
        cout << "Age must be (not < 0), not (not < 18), (not == 18) and (not != 21)";
    }

    // OR (||): One of the conditions must be true for IF to happen
    // if (condtion1) || (condition2)
    if ( (Age < 0) || (Age > 123) ) {
        cout << "Age is either less than 0 or greater than 123";
    }

    // AND (&&): BOTH of the conditions must be true for IF to happen
    // if (condtion1) && (condition2)
    if ( (Age > 18) && (Age < 21) ) {
        cout << "Age is BOTH (greater than 18) AND (less than 21)" << endl;
    }

    // NESTED IF's, an IF inside another IF
    if (Age > 18) {
        if (Age < 21) {
            cout << "Age is BOTH (greater than 18) AND (less than 21)" << endl;
        }
    }
}

/*
/home/matthew/CLionProjects/CSIS45/cmake-build-debug/CSIS45
Please enter your age: 20
Age is EQUAL TO 20Age is BOTH (greater than 18) AND (less than 21)
Age is BOTH (greater than 18) AND (less than 21)

Process finished with exit code 0
-----------
/home/matthew/CLionProjects/CSIS45/cmake-build-debug/CSIS45
Please enter your age: 28
Age is NOT EQUAL TO 21
Process finished with exit code 0

 */
