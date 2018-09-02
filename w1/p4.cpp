// Matthew Martinez
// p4.cpp
// 09/02/2018 - 09/02/2018
//2) Write a program that asks for a character INPUT from the
// keyboard and then OUTPUTS a large block letter "C" composed of that character.


#include <iostream>
using namespace std;

int main() {
    char Abc;

    cout << "Please enter the magic letter: ";
    cin >> Abc;
    cout << "************************************************\n";
    cout << "            " << Abc << " " << Abc << " " << Abc <<"\n";
    cout << "          "<< Abc << "       "<< Abc <<"\n";
    cout << "         " << Abc <<"\n";
    cout << "        " << Abc <<"\n";
    cout << "        " << Abc <<"\n";
    cout << "        " << Abc <<"\n";
    cout << "         " << Abc <<"\n";
    cout << "          "<< Abc <<"       " << Abc <<"\n";
    cout << "            " << Abc << " " << Abc << " " << Abc <<"\n";
    cout << "\n";
    cout << "**************************************************\n";
    cout << "    Computer Science is Cool Stuff!!\n";



    return 0;
}

/*
/home/matthew/CLionProjects/CSIS45/cmake-build-debug/CSIS45
Please enter the magic letter: A
************************************************
            A A A
          A       A
         A
        A
        A
        A
         A
          A       A
            A A A

**************************************************
    Computer Science is Cool Stuff!!

Process finished with exit code 0
*/
