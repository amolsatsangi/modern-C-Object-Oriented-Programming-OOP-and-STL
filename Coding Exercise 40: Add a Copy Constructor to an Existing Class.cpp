/******************************************************************************************************************************************************************************************
Add a Copy Constructor to an Existing Class
Given the Dog class defined in Dog.h, add a Copy constructor.

The copy constructor should copy the attributes from one object to another.
Also, please display, "Copy Constructor" to cout in the body of your copy constructor. Do not follow the output statement with '\n' or endl

The copy constructor should allow us to create  Dog objects as follows:

Dog spot {"Spot", 5};   // Overloaded constuctor
Dog twin {spot};        // Copy constructor, twin will be a copy of spot


Please add your code to the Dog.h file.

You can find my solution by clicking on the solution.txt file on the left pane. But please make sure you give it a go yourself first, and only check the solution if you really get stuck.
******************************************************************************************************************************************************************************************/


#ifndef __DOG_H__
#define __DOG_H__
#include <string>
using namespace std;

class Dog {
private:
    string name;
    int age;
public:
        Dog(string name, int age) : name{name}, age{age} { }

//---- WRITE YOUR COPY CONSTRUCTOR BELOW THIS LINE
        Dog(const Dog &source)
            :name{source.name},age{source.age}{
                cout<<"Copy Constructor";
            }


//---- WRITE YOUR COPY CONSTRUCTOR ABOVE THIS LINE
    string get_name() {return name; }
    void set_name(string n) {name = n; }
    int get_age() {return age; }
    void set_age(int a) { age = a;}
    int get_dog_years() { return age * 7; }
    string speak() { return "Woof";}
};
#endif
