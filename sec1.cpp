#include <iostream>

int main() {

    int favNum;

    std::cout << "Enter your favorite number between 1 and 100: "; // << insertion operator

    std::cin >> favNum;

    std::cout << "Amazing!! That's my favorite number too!";

    std::cout << "\n No really!!, " << favNum << " is my favorite number!" << std::endl;

    return 0;

}
//change name to main in order test it