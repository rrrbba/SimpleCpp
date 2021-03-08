#include <iostream>

using namespace std;

int main(){
    //Calculate the area of a room in square feet
    int roomLength {0};
    int roomWidth {0};

    cout << "Enter the width of the room: ";
    cin >> roomWidth;

    cout << "Enter the length of the room: ";
    cin >> roomLength;

    cout << "The area of the room is " << roomWidth * roomLength << " square feet" << endl;

    return 0;
}

//3 types of initialization
//int age = 21; C-like initialization
//int age (21); Constructor initialization
//int age {21}; C++11 list initialization syntax