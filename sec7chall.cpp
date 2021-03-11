#include <iostream>
#include <vector>

using namespace std;

int sec7chall() {
    //Declare 2 empty vectors of ints named vector1 and vector2
    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << vector1.size() << endl;

    vector2.push_back(100);
    vector2.push_back(200);
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << vector2.size() << endl;

    vector <vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;

    vector1.at(0) = 1000;

    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1)<< endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1)<< endl;

    cout << vector1.at(0) << endl;

    //The data in the vector didn't change after changing the data in vector1 because the vector is still referencing the data in the old vector for vector 1 (the copy that was made)

    return 0;
}

