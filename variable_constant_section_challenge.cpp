#include<iostream>
using namespace std;
int main(){
    cout << "Hello, Welcome to Amol's carpet cleaning services\n"<<endl;
    int small_rooms_number {0};
    cout << "How many small rooms would you like cleaned? ";
    cin >> small_rooms_number;
    int large_rooms_number {0};
    cout << "How many large rooms would you like cleaned? ";
    cin >> large_rooms_number;

    cout << "\nEstimate for carpet cleaning service" << endl;
    const double small_rooms_price {25};
    cout << "Price per small room: $"<< small_rooms_price << endl;
    const double large_room_price {35};
    cout << "Price per large room: $"<< large_room_price << endl;
    double cost = small_rooms_price * small_rooms_number + large_room_price * large_rooms_number;
    cout <<"Cost: "<< cost << endl;
    const double tax_rate {0.06};
    double tax = cost * tax_rate;
    cout <<"Tax: "<< tax << endl;
    cout<<"==============================================="<<endl;
    cout <<"Total Estimate: "<< tax+cost<< endl;
    const int expiry {30}; //days 
    cout <<"This estimate is valid for "<< expiry <<"days"<< endl;

    return 0;

}
