// Matthew Martinez
// p9.cpp
// 09/04/2018 - 09/0/2018
// Type up the below Sample Program (including all comments!).

#include <iostream>
#include <string>
using namespace std;

int main() {
    int percent;
    string grade;

    cout << "Please enter a grade in percent: ";
    cin >> percent;

    if (percent > 90) {
        grade = "A";
    } else if (percent > 80) {
        grade = "B";
    } else if (percent > 70) {
        grade = "C";
    } else if (percent > 60) {
        grade = "D";
    } else {
        grade = "F";
    }

    cout << "You have a \"" << grade << "\"";
}

/*
/home/matthew/CLionProjects/CSIS45/cmake-build-debug/CSIS45
Please enter a grade in percent: 95
You have a "A"
Process finished with exit code 0

-----------

/home/matthew/CLionProjects/CSIS45/cmake-build-debug/CSIS45
Please enter a grade in percent: 85
You have a "B"
Process finished with exit code 0

-----------

/home/matthew/CLionProjects/CSIS45/cmake-build-debug/CSIS45
Please enter a grade in percent: 75
You have a "C"
Process finished with exit code 0

-----------

/home/matthew/CLionProjects/CSIS45/cmake-build-debug/CSIS45
Please enter a grade in percent: 65
You have a "D"
Process finished with exit code 0

-----------

/home/matthew/CLionProjects/CSIS45/cmake-build-debug/CSIS45
Please enter a grade in percent: 55
You have a "F"
Process finished with exit code 0


 */
