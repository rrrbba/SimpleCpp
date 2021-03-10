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
    vector <int> test (3, 100);

    cout << vowels2[0] << endl;
    //Accessing vector elements using vector syntax
    cout << vowels2.at(0) << endl;
    //Changing elements
//    cin >> vowels2.at(4);

    //When do vectors grow as needed? Using push_back where vector automatically allocate the required space
    vector <int> test_scores3 {100, 95, 99};
    cout << "Test_scores3: " << test_scores3[2] << endl;
    test_scores3.push_back(80); // 100, 95, 99, 80
    test_scores3.push_back(89); // 100, 95, 99, 80, 89
    cout << "Test_scores3: " << test_scores3[3] << endl;

    int score_to_add {0};

    cin >> score_to_add;
    test_scores3.push_back(score_to_add);


    cout << test_scores3.at(0) << endl;
    cout << test_scores3.at(1) << endl;
    cout << test_scores3.at(2) << endl;
    cout << test_scores3.at(3) << endl;
    cout << test_scores3.at(4) << endl;
    cout << test_scores3.at(5) << endl;

    //Example of 2D-vector (a vector of vectors)
    vector <vector<int>> movies //vector of integers
            {
                    {1, 2, 3, 4},
                    {1, 2, 4, 4},
                    {1, 3, 4, 5}
            };
    //accessing using vector syntax
    cout << movies.at(0).at(0);

    return 0;
}