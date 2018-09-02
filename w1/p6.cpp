// Matthew Martinez
// p6.cpp
// 09/02/2018 - 09/02/2018
//Complete at least 2 of the 3 programs.
//
//Write a program that shows as many different words as you can think of that
// can be formed using only the letters in "crate." Each word should appear
// on a separate line. Letters may be used only as many times as they appear in "crate."
//Example: If the letters had been "mat," I could form the words a, am, at, mat and tam.
// Each of those words would appear on a separate line.
//
//Write a program that draws a picture of a spaceship, using only cout << statements.

//Write a program that shows the longest palindrome you know.
// A palindrome is a word that is spelled the same forward and backward.
// For example, "tot" is a palindrome, "tote" is not; "noon" is, "none" is not.


#include <iostream>
using namespace std;

int main() {

    cout << "Program 1) permutations of 'crate':\n";
    cout << "Scrabble 7 Points Word(s):\ncaret\ncarte\ncater\nreact\nrecta\ntrace\n";
    cout << "Scrabble 6 Points Word(s)\nacre\ncare\ncart\ncate\nrace\ntace\n";
    cout << "Scrabble 5 Points Word(s)\nace\nact\narc\ncar\ncat\nrec\n";
    cout << "Scrabble 4 Points Word(s)\nrate\ntare\ntear\n";
    cout << "Scrabble 3 Points Word(s)\nare\nart\nate\near\neat\nera\neta\nrat\nret\ntae\ntar\ntea\n";
    cout << "Scrabble 2 Points Word(s)\nae\nar\nat\ner\net\nre\nta\n";
    cout << "\n\nProgram 2) picture of a spaceship:\n";
    cout << "    ___________________          _-_\n";
    cout << "    \\==============_=_/ ____.---'---`---.____\n";
    cout << "               \\_ \\    \\----._________.----/\n";
    cout << "                 \\ \\   /  /    `-_-'\n";
    cout << "              __,--`.`-'..'-_\n";
    cout << "             /____          ||\n";
    cout << "                  `--.____,-'\n";

    cout << "\n\n\nProgram 3) longest palindrome I know:\n";
    cout << "racecar";
    cout << "I looked palindromes up on wikipedia and I'm not sure if some of the higher letter words should count.";
    return 0;
}

/*
/home/matthew/CLionProjects/CSIS45/cmake-build-debug/CSIS45
Program 1) permutations of 'crate':
Scrabble 7 Points Word(s):
caret
carte
cater
react
recta
trace
Scrabble 6 Points Word(s)
acre
care
cart
cate
race
tace
Scrabble 5 Points Word(s)
ace
act
arc
car
cat
rec
Scrabble 4 Points Word(s)
rate
tare
tear
Scrabble 3 Points Word(s)
are
art
ate
ear
eat
era
eta
rat
ret
tae
tar
tea
Scrabble 2 Points Word(s)
ae
ar
at
er
et
re
ta


Program 2) picture of a spaceship:
    ___________________          _-_
    \==============_=_/ ____.---'---`---.____
               \_ \    \----._________.----/
                 \ \   /  /    `-_-'
              __,--`.`-'..'-_
             /____          ||
                  `--.____,-'



Program 3) longest palindrome I know:
racecarI looked palindromes up on wikipedia and I'm not sure if some of the higher letter words should count.
Process finished with exit code 0
*/
