#include <iostream>

int binaryToDecimal(std::string binary) {
    int decimal = 0;

    for (int i = 0; i < binary.length(); ++i) {
        decimal = decimal * 2 + (binary[i] - '0');
    }

    return decimal;
}

int main() {
    std::string binaryNumber = "110111011";
    int decimalResult = binaryToDecimal(binaryNumber);
    std::cout << "Decimal representation of " << binaryNumber << " is: " << decimalResult << std::endl;

    return 0;
}
