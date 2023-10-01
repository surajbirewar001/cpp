#include <iostream>
#include <string>

// Arrays to store words for numbers 0 to 9 and tens multiples
const std::string ones[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
const std::string teens[] = {"", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
const std::string tens[] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

std::string NumberToWords(int num) {
    if (num == 0) {
        return "Zero";
    }

    std::string result = "";

    // Handle thousands
    if (num >= 1000) {
        result += ones[num / 1000] + " Thousand ";
        num %= 1000;
    }

    // Handle hundreds
    if (num >= 100) {
        result += ones[num / 100] + " Hundred ";
        num %= 100;
    }

    // Handle tens and ones
    if (num >= 10 && num <= 19) {
        result += teens[num - 10];
    } else {
        result += tens[num / 10];
        if (num % 10 != 0) {
            result += " " + ones[num % 10];
        }
    }

    return result;
}

int main() {
    int N;
    std::cout << "Enter a positive integer: ";
    std::cin >> N;

    if (N < 0 || N > 9999) {
        std::cout << "Number out of range. Please enter a positive integer between 0 and 9999." << std::endl;
        return 1; // Return an error code
    }

    std::string words = NumberToWords(N);
    std::cout << "Result: " << words << std::endl;

    return 0;
}

