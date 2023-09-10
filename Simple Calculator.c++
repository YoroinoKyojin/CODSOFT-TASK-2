#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main()
{
    std::cout<<"-------------Welcome to my Calculator program---------------"<<endl;
    std::cout<<"-------------Here we will input two numbers and perform arithmetic operations---------------"<<endl;
    int operand1;
    std::cout<<"Enter the first operand 1"<<endl;
    std::cin>>operand1;
    int operand2;
    std::cout<<"Enter the second operand"<<endl;
    std::cin>>operand2;
    char s;
    std::cout<<"Enter the arithmetic operation"<<endl;
    std::cin>>s;
    int k;
    switch (s)
    {
    case '+':
        k = operand1 + operand2;
        break;
    case '-':
        k = operand1 - operand2;
        break;
    case '*':
        k = operand1 * operand2;
        break;
    case '/':
        if (operand2 != 0) {
                k = operand1 / operand2;
            } else {
                std::cout << "Error: Division by zero!" << std::endl;
                return 1;
            }
            break;
    case '%':
        k = operand1 % operand2;
        break;
    case '^':
        k = pow(operand1,operand2);
        break;
    default:
        break;
    }
    std::cout<<k;
}
