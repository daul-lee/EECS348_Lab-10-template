#include "calculator.hpp"
#include <string>
#include <iostream>
#include <cmath>
bool is_number(const std::string &expression) {
    int length = expression.size();
    int decimalcounter = 0;
    int n = 0;
    /*while (n <= length) {
        if (n == 0) {
            if ((expression[n] != '+') || (expression[n] != '-') || (expression[n] != '0') || (expression[n] != '1') ||(expression[n] != '2') || (expression[n] != '3') || (expression[n] != '4') || (expression[n] != '5') || (expression[n] != '6') ||(expression[n] != '7') || (expression[n] != '8') || (expression[n] != '9') ) {
                if (expression[n] == '.') {
                    decimalcounter++;
                } else {
                std::cout << (expression[n] == '1') << "\t what"<< "\n";
                return false;
                }
            }
        } else if (n == (length-1)){
            if ((expression[n] != '0') || (expression[n] != '1') ||(expression[n] != '2') || (expression[n] != '3') || (expression[n] != '4') || (expression[n] != '5') || (expression[n] != '6') ||(expression[n] != '7') || (expression[n] != '8') || (expression[n] != '9') ) {
                return false;
            }
        } else {
            if ((expression[n] != '0') || (expression[n] != '1') ||(expression[n] != '2') || (expression[n] != '3') || (expression[n] != '4') || (expression[n] != '5') || (expression[n] != '6') ||(expression[n] != '7') || (expression[n] != '8') || (expression[n] != '9') ) {
                if (expression[n] == '.') {
                    decimalcounter++;
                } else {
                    return false;
                }
            }
        n++;
        }
    }*/
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
    int j = 0;
    if (is_number(expression)) {
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
                std::cout << pre_decimal_digits-i;
                if (expression[i] == '1') {
                    number = number + 1 * pow(10, pre_decimal_digits-1-i);
                } else if (expression[i] == '2') {
                    number = number + 2 * pow(10, pre_decimal_digits-1-i);
                } else if (expression[i] == '3') {
                    number = number + 3 * pow(10, pre_decimal_digits-1-i);
                } else if (expression[i] == '4') {
                    number = number + 4 * pow(10, pre_decimal_digits-1-i);
                } else if (expression[i] == '5') {
                    number = number + 5 * pow(10, pre_decimal_digits-1-i);
                } else if (expression[i] == '6') {
                    number = number + 6 * pow(10, pre_decimal_digits-1-i);
                } else if (expression[i] == '7') {
                    number = number + 7 * pow(10, pre_decimal_digits-1-i);
                } else if (expression[i] == '8') {
                    number = number + 8 * pow(10, pre_decimal_digits-1-i);
                } else if (expression[i] == '9') {
                    number = number + 9 * pow(10, pre_decimal_digits-1-i);
                } else if (expression[i] == '0') {
                    number = number + 0 * pow(10, pre_decimal_digits-1-i);
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
                    continue;
                }
            }
        }
        return number;
    } else {
        std::cout << "Invalid input, big sad" << "\n";
        return 0;
    }
}