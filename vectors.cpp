#include <iostream>
#include <vector> // object oriented template class
using namespace std; //vector is apart of the standard namespace

int main() {
    //Dynamic array = vector. An array that can grow and shrink in size at exec. time
    //can use sort, reverse, find and more

    //Declaring a vector
    //vector <type> name
    vector <char> vowels;
    vector <int> test_scores;

    vector <char> vowels1 (5); //tells we want 5 characters
    //Initializing
    vector <char> vowels2 {'a','e','i','o','u'};
    vector <int> test_scores2 (10); //Parenthesis is constructor initial. syntax

    vector <double> hi_temps (365, 80.0); //(initial size of vector, what all 365 doubles are initialized to)

    cout << vowels2[0] << endl;
    //Accessing vector elements using vector syntax
    cout << vowels2.at(0) << endl;
    //Changing elements
    cin >> vowels2.at(4);

    //When do vectors grow as needed? Using push_back where vector automatically allocate the required space
    vector <int> test_scores3 {100, 95, 99};
    cout << "Test_scores3: " << test_scores3[2] << endl;
    test_scores3.push_back(80); // 100, 95, 99, 80
    test_scores3.push_back(89); // 100, 95, 99, 80, 89
    cout << "Test_scores3: " << test_scores3[3] << endl;

    return 0;
}