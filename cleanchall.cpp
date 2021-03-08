#include <iostream>

using namespace std;

int main(){
    //Make program for cleaning service
    int small_rooms {0};
    int large_rooms {0};
    const double price_per_sroom {25.0};
    const double price_per_lroom {35.0};
    const double sales_tax {0.06};
    const int estimate_expiry {30}; //days

    cout << "Welcome to Rayven's Carpet Cleaning Service" << endl;
    cout << "\nHow many small rooms would you like cleaned?";

    cin >> small_rooms;

    cout << "\nHow many small rooms would you like cleaned?";

    cin >> large_rooms;

    cout <<"\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;

    cout << "Price per small room: $" << price_per_sroom << endl;
    cout << "Price per large room: $" << price_per_lroom << endl;

    cout << "Cost: $" << (price_per_sroom * small_rooms) + (price_per_lroom * large_rooms) << endl;
    cout << "Tax: $" << sales_tax * ((price_per_sroom * small_rooms) + (price_per_lroom * large_rooms)) << endl;
    cout << "========================" << endl;

    cout << "Total estimate: $" << ((price_per_sroom * small_rooms) + (price_per_lroom * large_rooms)) + sales_tax * ((price_per_sroom * small_rooms) + (price_per_lroom * large_rooms)) << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;




    return 0;
}

