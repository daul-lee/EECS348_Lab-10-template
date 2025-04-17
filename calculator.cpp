#include "calculator.hpp"
#include <string>
#include <iostream>
#include <cmath>

double parse_number(const std::string &expression) {
    int length = expression.size();
    std::string short_number;
    double number = 0;
    int position = 0;
    int pre_decimal_digits;
    int decimal_counter = 0;
    int j = 0;
    if ((expression[0] == '+') || (expression[0] == '-') || (expression[0] == '0')) {
        for (int i = 0; i < length; i++) {
            if ((expression[i] == '+') || (expression[i] == '-') || (expression[i] == '0')) {
                position++; 
            } else {
                break;
            }
        }
        short_number = expression.substr(position, length);
        int short_length = short_number.size();
        for (int i = 0; i < short_length; i++) {
            if (expression[i] == '.') {
                pre_decimal_digits = i-1;
                break;
            }
        }
        for (int i = 0; i < short_length; i++) {
            if (expression[i] == '1') {
                number = number + 1 * pow(10, pre_decimal_digits-j);
                j++;
            } else if (expression[i] == '2') {
                number = number + 2 * pow(10, pre_decimal_digits-j);
                j++;
            } else if (expression[i] == '3') {
                number = number + 3 * pow(10, pre_decimal_digits-j);
                j++;
            } else if (expression[i] == '4') {
                number = number + 4 * pow(10, pre_decimal_digits-j);
                j++;
            } else if (expression[i] == '5') {
                number = number + 5 * pow(10, pre_decimal_digits-j);
                j++;
            } else if (expression[i] == '6') {
                number = number + 6 * pow(10, pre_decimal_digits-j);
                j++;
            } else if (expression[i] == '7') {
                number = number + 7 * pow(10, pre_decimal_digits-j);
                j++;
            } else if (expression[i] == '8') {
                number = number + 8 * pow(10, pre_decimal_digits-j);
                j++;
            } else if (expression[i] == '9') {
                number = number + 9 * pow(10, pre_decimal_digits-j);
                j++;
            } else if (expression[i] == '0') {
                number = number + 0 * pow(10, pre_decimal_digits-j);
                j++;
            } else if (expression[i] == '.') {
                if ((decimal_counter == 0) && (i != (length-1))) {
                    decimal_counter++;
                    continue;
                } else {std::cout << "Invalid input" << "\n";
                return 0;
                }
            } else {
                std::cout << "Invalid input" << "\n";
                return 0;
            }
        }
        if (expression[0] == '-') {
            number = number * -1;
        }
    } else {
        for (int i = 0; i < length; i++) {
            if (expression[i] == '.') {
                pre_decimal_digits = i-1;
                break;
            }
        }
        for (int i = 0; i < length; i++) {
            if (expression[i] == '1') {
                number = number + 1 * pow(10, pre_decimal_digits-j);
                j++;
            } else if (expression[i] == '2') {
                number = number + 2 * pow(10, pre_decimal_digits-j);
                j++;
            } else if (expression[i] == '3') {
                number = number + 3 * pow(10, pre_decimal_digits-j);
                j++;
            } else if (expression[i] == '4') {
                number = number + 4 * pow(10, pre_decimal_digits-j);
                j++;
            } else if (expression[i] == '5') {
                number = number + 5 * pow(10, pre_decimal_digits-j);
                j++;
            } else if (expression[i] == '6') {
                number = number + 6 * pow(10, pre_decimal_digits-j);
                j++;
            } else if (expression[i] == '7') {
                number = number + 7 * pow(10, pre_decimal_digits-j);
                j++;
            } else if (expression[i] == '8') {
                number = number + 8 * pow(10, pre_decimal_digits-j);
                j++;
            } else if (expression[i] == '9') {
                number = number + 9 * pow(10, pre_decimal_digits-j);
                j++;
            } else if (expression[i] == '0') {
                number = number + 0 * pow(10, pre_decimal_digits-j);
                j++;
            } else if (expression[i] == '.') {
                if ((decimal_counter == 0) && (i != (length-1))) {
                    decimal_counter++;
                    continue;
                } else {
                    std::cout << "Invalid input" << "\t";
                    return 0;
                }
            } else {
                std::cout << "Invalid input" << "\t";
                return 0;
            }
        }
    }
    return number;

}