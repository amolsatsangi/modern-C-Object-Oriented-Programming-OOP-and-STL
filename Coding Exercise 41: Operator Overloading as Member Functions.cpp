#include "Money.h"

Money::Money(int dollars, int cents) : dollars{dollars}, cents{cents} {}

Money::Money(int total) : dollars {total/100}, cents{total%100}  {}
   

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR METHOD DEFINITIONS BELOW THIS LINE----

bool Money::operator==( Money &rhs) {
    if(rhs.dollars == this->dollars && rhs.cents == this->cents)
        return true;
    return false;
}
bool Money::operator!=( Money &rhs)  {
    if(rhs.dollars != this->dollars || rhs.cents != this->cents)
        return true;
    return false;
}

//----WRITE YOUR METHOD DEFINITIONS ABOVE THIS LINE----


