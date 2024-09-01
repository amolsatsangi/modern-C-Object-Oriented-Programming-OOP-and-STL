/**************************************
Declaring and Initializing Variables
In this exercise you will write code that creates a profile for a new employee at a company. 

You must declare a total of THREE variables, each of a different type, to represent the employee's name, age, and hourly_wage. 

age  should be an int 
hourly_wage  should be a double , and
name  should be a string 

You must initialize the hourly_wage to 23.50. In order to set the values for name and age you must use cin and the extraction operator >> to allow the employee to enter their name and age in that order separated by a single space. 

You do not have to provide any output statements. Our testing code will automatically supply the name  and age values to test your code.

You can find my solution by clicking on the solution.txt file on the left pane. But please make sure you give it a go yourself first, and only check the solution if you really get stuck.

***************************/

#include <iostream>
#include <string>
using namespace std;

void employee_profile() {
    
    //----WRITE YOUR CODE BELOW THIS LINE----
    double hourly_wage {23.50};
    int age;
    string name;
    cin >> name >> age; 
    
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << name << " " << age << " " << hourly_wage;
}
