#include <iostream>


using namespace std;

int main() {
    //Declaring arrays (fixed sized)
    //type name [number of elements]
    int test_scores [5] {100, 95, 99, 87, 88};

    cout << "First score at index 0: " << test_scores[0] << endl;

    int high_score_per_level [10] {3, 5}; //init to 3,5 and remaining to 0

    const long days_in_year {365};
    double hi_temps [days_in_year] {0}; //init all to zero

    int another_array [] {1, 2, 3, 4, 5}; // size automatically calculated

    return 0;
}