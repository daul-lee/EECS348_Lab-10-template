#include "calculator.hpp"
#include <string>
#include <iostream>
#include <cmath>

bool is_number(const std::string &expression) {
    int length = expression.size();
    int decimalcounter = 0;
    int n = 0;
    while (n <= length) {
        if (n == 0) {
            if ((expression[n] != '+') or (expression[n] != '-') or (expression[n] != '0') or (expression[n] != '1') or(expression[n] != '2') or (expression[n] != '3') or (expression[n] != '4') or (expression[n] != '5') or (expression[n] != '6') or(expression[n] != '7') or (expression[n] != '8') or (expression[n] != '9') ) {
                if (expression[n] == '.') {
                    decimalcounter++;
                } else {
                return false;
                }
            }
        } else if (n == (length-1)){
            if ((expression[n] != '0') or (expression[n] != '1') or(expression[n] != '2') or (expression[n] != '3') or (expression[n] != '4') or (expression[n] != '5') or (expression[n] != '6') or(expression[n] != '7') or (expression[n] != '8') or (expression[n] != '9') ) {
                return false;
            }
        } else {
            if ((expression[n] != '0') or (expression[n] != '1') or(expression[n] != '2') or (expression[n] != '3') or (expression[n] != '4') or (expression[n] != '5') or (expression[n] != '6') or(expression[n] != '7') or (expression[n] != '8') or (expression[n] != '9') ) {
                if (expression[n] == '.') {
                    decimalcounter++;
                } else {
                    return false;
                }
            }
        }
    }
    if (decimalcounter > 1) {
        return false;
    } else {
        return true;
    }
}

double parse_number(const std::string &expression) {
    int length = expression.size();
    std::string short_number;
    double number = 0;
    int position = 0;
    int pre_decimal_digits;
    if (is_number(expression)) {
        if ((expression[0] == '+') or (expression[0] == '-') or (expression[0] == '0')) {
            for (int i = 0; i < length; i++) {
                if ((expression[i] == '+') or (expression[i] == '-') or (expression[i] == '0')) {
                    position++; 
                } else {
                    break;
                }
            }
            short_number = expression.substr(position, length);
            int short_length = short_number.size();
            for (int i = 0; i < short_length; i++) {
                if (expression[i] == '.') {
                    pre_decimal_digits = i;
                    break;
                }
            }
            for (int i = 0; i < short_length; i++) {
                if (expression[i] == '1') {
                    number = number + 1 * pow(10, pre_decimal_digits-i);
                } else if (expression[i] == '2') {
                    number = number + 2 * pow(10, pre_decimal_digits-i);
                } else if (expression[i] == '3') {
                    number = number + 3 * pow(10, pre_decimal_digits-i);
                } else if (expression[i] == '4') {
                    number = number + 4 * pow(10, pre_decimal_digits-i);
                } else if (expression[i] == '5') {
                    number = number + 5 * pow(10, pre_decimal_digits-i);
                } else if (expression[i] == '6') {
                    number = number + 6 * pow(10, pre_decimal_digits-i);
                } else if (expression[i] == '7') {
                    number = number + 7 * pow(10, pre_decimal_digits-i);
                } else if (expression[i] == '8') {
                    number = number + 8 * pow(10, pre_decimal_digits-i);
                } else if (expression[i] == '8') {
                    number = number + 9 * pow(10, pre_decimal_digits-i);
                } else if (expression[i] == '0') {
                    number = number + 0 * pow(10, pre_decimal_digits-i);
                } 
            }
            if (expression[0] == '-') {
                number = number * -1;
            }
        } else {
            for (int i = 0; i < length; i++) {
                if (expression[i] == '.') {
                    pre_decimal_digits = i;
                    break;
                }
            }
            for (int i = 0; i < length; i++) {
                if (expression[i] == '1') {
                    number = number + 1 * pow(10, pre_decimal_digits-i);
                } else if (expression[i] == '2') {
                    number = number + 2 * pow(10, pre_decimal_digits-i);
                } else if (expression[i] == '3') {
                    number = number + 3 * pow(10, pre_decimal_digits-i);
                } else if (expression[i] == '4') {
                    number = number + 4 * pow(10, pre_decimal_digits-i);
                } else if (expression[i] == '5') {
                    number = number + 5 * pow(10, pre_decimal_digits-i);
                } else if (expression[i] == '6') {
                    number = number + 6 * pow(10, pre_decimal_digits-i);
                } else if (expression[i] == '7') {
                    number = number + 7 * pow(10, pre_decimal_digits-i);
                } else if (expression[i] == '8') {
                    number = number + 8 * pow(10, pre_decimal_digits-i);
                } else if (expression[i] == '8') {
                    number = number + 9 * pow(10, pre_decimal_digits-i);
                } else if (expression[i] == '0') {
                    number = number + 0 * pow(10, pre_decimal_digits-i);
                } 
            }
        }
        return number;
    } else {
        std::cout << "Invalid input, big sad" << "\n";
        return 0;
    }
}