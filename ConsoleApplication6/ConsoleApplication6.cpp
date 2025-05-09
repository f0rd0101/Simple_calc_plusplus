#include <iostream>

int main()
{
    double a, b;
    char op;
    while (true) {


        std::cout << "Enter first value" << std::endl;
        std::cin >> a;
        std::cout << "Enter second value" << std::endl;
        std::cin >> b;
        std::cout << "Enter operation. +, -, /, *" << std::endl;
        std::cin >> op;
        switch (op) {
        case '+':
            std::cout << "Result: " << a + b << std::endl;
            break;
        case '-':
            std::cout << "Result: " << a - b << std::endl;
            break;
        case '*':
            std::cout << "Result: " << a * b << std::endl;
            break;
        case '/':
            if (b != 0) {
                std::cout << "Result: " << a / b << std::endl;
                break;
            }
            else {
                std::cout << "Division by zero is impossible." << std::endl;
                break;
            }
        default:
            std::cout << "Unknown operation" << std::endl;
            break;



        }
        char continue_op;
        std::cout << "Do you want to calculate something again? Enter (y/n) (yes/no)" << std::endl;
        std::cin >> continue_op;
        if (continue_op != 'y' && continue_op != 'Y') {
            break;
        }
    }
    return 0;
}