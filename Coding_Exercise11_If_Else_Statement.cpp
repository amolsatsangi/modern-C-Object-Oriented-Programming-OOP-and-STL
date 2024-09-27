/***************************************************************************************************************************************************************************************
If-Else Statement - Can you Drive?
In this exercise you will use an simple if/else  statement to decide if someone can drive. Let's assume that anyone 16 or older can legally drive.

If the person can legally drive, your program should display, "Yes - you can drive!" using a cout  statement. You do not have to provide a '\n' or endl .

If the person cannot legally drive, then your program should display, "Sorry, come back in n  years", where n is how many years until the person turns 16 year old.

The age  will be provided for you, you do NOT need to declare age . Our test cases will provide different values for age  to test your code.

You can find my solution by clicking on the solution.txt file on the left pane. But please make sure you give it a go yourself first, and only check the solution if you really get stuck
*****************************************************************************************************************************************************************************************/

void can_you_drive(int age) {
    //----WRITE YOUR CODE BELOW THIS LINE----
    if(age>=16){
        cout<<"Yes - you can drive!";
    }
    else{
        cout<<"Sorry, come back in "<<16-age<<" years";
    }
    
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
}
