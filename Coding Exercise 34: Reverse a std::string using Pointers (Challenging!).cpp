/***********************************************************************************************************************************************************************************
Reverse a std::string using Pointers (Challenging!)
Exercise: Reverse a std::string using Pointers

Specification:

Write a C++ function reverse_string that takes a std::string as input and returns a new std::string with the characters in reverse order. The function should use pointers to perform the reversal.

Function Signature:

std::string reverse_string(const std::string& str);
Input:

str: The input string.

Output:

The function should return a new string with the characters of str reversed.

Example:

std::string input = "Hello, World!";
std::string reversed = reverse_string(input);
 
// reversed should be "!dlroW ,olleH"

*************************************************************************************************************************************************************************************/

// You do NOT have to write a main() function. The main() function is written by me
// behind the scenes to call your function and test your code.
#include <string>

std::string reverse_string(const std::string &str) {
    std::string reversed;
    // Write your code below this line 
    for(int i=str.size()-1;i>=0;i--){
        reversed.push_back(str[i]);
    }
    // Write your code abocve this line
    return reversed;
}
