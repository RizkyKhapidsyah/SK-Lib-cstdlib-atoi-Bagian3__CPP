#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
    Source by Programiz (https://www.programiz.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {

    char str[] = "123.4567";
    double num_double = std::atof(str);

    std::cout << "num_double = " << num_double << std::endl;

    _getch();
    return 0;
}