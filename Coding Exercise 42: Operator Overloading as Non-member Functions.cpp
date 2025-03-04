#include "Money.h"

Money::Money(int dollars, int cents) : dollars{dollars}, cents{cents} {}

Money::Money(int total) : dollars {total/100}, cents{total%100}  {}
   

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR METHOD DEFINITIONS BELOW THIS LINE----
Money operator+(const Money &rhs, const Money &lhs){
    int dollar_sum = rhs.dollars+lhs.dollars;
    int cents_sum = rhs.cents+lhs.cents;
    if(cents_sum>100){
        (dollar_sum)++;
        (cents_sum)-=100;
    }
    Money temp{dollar_sum,cents_sum};
    return temp;
}


//----WRITE YOUR METHOD DEFINITIONS ABOVE THIS LINE----

