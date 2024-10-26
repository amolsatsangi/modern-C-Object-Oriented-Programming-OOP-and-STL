/*****************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************
Using Functions from the cmath Library
In this exercise you will create a program that will be used as a POS (Point of Sale) system in a restaurant. The bill_total is given as well as the number_of_guests. The 5 guests will be splitting the bill evenly and so the individual_bill will be bill_total / number_of_guests. The POS will be used in three different locations, each with different guidelines for printing bills.

At location 1, individual_bill_1 always rounds down to the nearest dollar.

At location 2, individual_bill_2 always rounds to the nearest dollar.

At location 3, individual_bill_3 always rounds up to the nearest cent.

Determine what the individual_bill will be at each of the locations.

Begin by declaring and initializing individual_bill.

Now, declare and initialize individual_bill_1 by using the <cmath> function floor with individual_bill as the argument.

Next, declare and initialize individual_bill_2 by using the <cmath> function round with individual_bill as the argument.

Finally, declare and initialize individual_bill_3 by using the <cmath> function ceil with individual_bill as the argument. In order to round individual_bill_3 to the nearest cent, you must multiply the argument of the function ceil by 100 and then divide the result of the function by 100.

You can find my solution by clicking on the solution.txt file on the left pane. But please make sure you give it a go yourself first, and only check the solution if you really get stuck.
*******************************************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

void c_math_functions() {
    
    double bill_total {102.78};
    int number_of_guests {5};
    
    //DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----
    double individual_bill{bill_total/number_of_guests};
    double individual_bill_1 = floor(individual_bill);
    double individual_bill_2 = round(individual_bill);
    double individual_bill_3 = ceil(individual_bill*100)/100;
    
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    cout << "The individual bill at location 1 will be $" << individual_bill_1 << "\n" << "The individual bill at location 2 will be $" << individual_bill_2 << "\n" << "The individual bill at location 3 will be $" << individual_bill_3;
}
