// Matthew Martinez
// p2.cpp
// 08/28/2018 - 08/28/2018
//2) Write a program that prints out "CS!" in large block letters inside a border of *** followed by two blank lines
// then the mesage "Computer Science is Cool Stuf" as shown below:


#include <iostream>
using namespace std;

int main() {
    cout << "************************************************\n";
    cout << "            C C C                 S S S\n";
    cout << "          C       C              S     S\n";
    cout << "         C                      S\n";
    cout << "        C                        S\n";
    cout << "        C                         S S S\n";
    cout << "        C                              S\n";
    cout << "         C                              S\n";
    cout << "          C       C            S       S\n";
    cout << "            C C C                S S S\n";
    cout << "\n";
    cout << "**************************************************\n";
    cout << "    Computer Science is Cool Stuff!!\n";

    return 0;
}

/*
/home/matthew/CLionProjects/CSIS45/cmake-build-debug/CSIS45
************************************************
            C C C                 S S S
          C       C              S     S
         C                      S
        C                        S
        C                         S S S
        C                              S
         C                              S
          C       C            S       S
            C C C                S S S

**************************************************
    Computer Science is Cool Stuff!!

Process finished with exit code 0

 */
