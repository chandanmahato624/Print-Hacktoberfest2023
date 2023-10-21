#include <iostream>

int main() {
    int numRows;
    std::cout << "Enter the number of rows for the pyramid: ";
    std::cin >> numRows;

    for (int i = 1; i <= numRows; i++) {
        // Print spaces to center-align the stars
        for (int j = 1; j <= numRows - i; j++) {
            std::cout << " ";
        }

        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            std::cout << "*";
        }

        // Move to the next line
        std::cout << std::endl;
    }

    return 0;
}
