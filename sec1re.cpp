#include <iostream>

using namespace std; //Use the entire std namespace

int main() {

    int favNum;
    int favNums;

    cout << "Enter your favorite numbers between 1 and 100: "; // << insertion operator

    cin >> favNum >> favNums;

    cout << "Amazing!! That's my favorite number too!";

    cout << "\n No really!!, " << favNum << " & " << favNums << " are my favorite numbers!" << endl;

    return 0;

}
//This is rewrite of sec1.cpp that uses the entire namespace directive

