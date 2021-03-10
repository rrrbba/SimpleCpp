#include <iostream>


using namespace std;

int arrays() {

    char vowels[] {'a','e','i','o','u'};
    cout << "The first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;

    double hi_temps [] {90.1, 89.8, 77.5, 81.6};
    cout << "This first high temp is: " << hi_temps[0] << endl;
    hi_temps[0] = 100.7;
    cout << "This first high temp is now: " << hi_temps[0] << endl;

    int test_scores[5] {};
    cout << "Enter first test score: " << endl;
    cin >> test_scores[0];
    cout << "First score at index 0: " << test_scores[0] << endl;

    cout << "Memory address of array: " << test_scores << endl;
    return 0;
};
