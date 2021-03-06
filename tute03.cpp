/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>
int main()
{
    int no;
    long fac;

    std::cout<<"Enter a Number : ";      //display "Enter a Number : "
    std::cin>>no;                    //read the number

    fac = 1;
    for (int r=no; r >= 1; r--) {
        fac = fac * r;              //calculate fac
    }

    std::cout<<"Factorial of "<<no <<" is "<<fac;  //display factorial of given number
    return 0;    //end of the main function
}
