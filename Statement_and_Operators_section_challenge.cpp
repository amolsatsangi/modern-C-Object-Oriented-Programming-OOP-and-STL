#include<iostream>
using namespace std;
/**********************
 * 1 dollar - 100 cents
 * 1 quater - 25 cents
 * 1 dime -  10 cents
 * 1 nickel - 5 cents
 * 1 penny - 1 cent
*********************/
int main(){
    int dollar{0}, quater{0}, dime{0}, nickel{0}, penny{0}, left{0}, cents{0};
    cout<<"Enter an amount in cents : ";
    cin>>cents;
    
    dollar = cents/100;
    left = cents%100;
    
    quater =  left/25;
    left = left%25;

    dime = left/10;
    left =  left % 10;

    nickel = left/5;
    left =  left % 5;

    penny =  left;
    
    cout<<"\nYou can provide change for this as follows:"<<endl;
    cout<<"Dollars  :  "<<dollar<<endl;
    cout<<"Quarters :  "<<quater<<endl;
    cout<<"Dimes    :  "<<dime<<endl;
    cout<<"Nickels  :  "<<nickel<<endl;
    cout<<"Pennies  :  "<<penny<<endl;
    return 0;
}
