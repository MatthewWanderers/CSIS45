// Matthew Martinez
// p3b.cpp
// 09/02/2018 - 09/02/2018
//Write a C++ program that reads in two decimal numbers and then outputs their sum and product.
//Sum is rounded to 1 decimal digit.
//Product is rounded to 2 decimal digits.
//
//Sample Test Run:
//
//Please enter number 1: 1.1
//Please enter number 2: 2.2
//Sum = 3.3
//Product = 2.42* */.


#include <iostream>
using namespace std;

int main() {
    float num1;
    float num2;

    cout << "Please enter number 1: ";
    cin >> num1;
    cout << "Please enter number 2: ";
    cin >> num2;
    cout.setf(ios::fixed); // To specify fixed point notations
    cout.precision(1);
    cout << "Sum = " << num1 + num2 << "\n";
    cout.precision(2);
    cout << "Product = " << num1 * num2 << "\n";


    return 0;
}

/*
/home/matthew/CLionProjects/CSIS45/cmake-build-debug/CSIS45
Please enter number 1: 1.1
Please enter number 2: 2.2
Sum = 3.3
Product = 2.42

Process finished with exit code 0
*/
