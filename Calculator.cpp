#include <iostream>
#include <cmath>

int main(){

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "*************CALCULATOR*************" << '\n';

    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std:: cout << "Enter what you want: (+,-,*,/): ";
    std::cin >> op;

    switch(op){
        case '+':
            result = num1+num2;
            std::cout << result;
            break;
        case '-':
            result = num1 - num2;
            std::cout << result;
            break;
        case '*':
            result = num1 * num2;
            std::cout << result;
            break;
        case '/':
            result = num1/num2;
            std::cout << result;
            break;
        default:
        std::cout << "This was not a valid response, Please try again.";
    }

    std::cout << '\n' <<"*************CALCULATOR*************";

    return 0;
}