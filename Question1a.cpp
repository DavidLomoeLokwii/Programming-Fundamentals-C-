#include <iostream>

bool is_leap_year(unsigned int Y) {
    // If the year is a century year (i.e., divisible by 100)
    if (Y % 100 == 0) {
        // It's a leap year only if it's also divisible by 400
        return Y % 400 == 0;
    } else {
        // If it's not a century year, it's a leap year if it's divisible by 4
        return Y % 4 == 0;
    }
}

int main() {
    int year;
    std::cout << "Enter a year: ";
    std::cin >> year;

    if (is_leap_year(year)) {
        std::cout << year << " is a leap year." << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }

    return 0;
}
