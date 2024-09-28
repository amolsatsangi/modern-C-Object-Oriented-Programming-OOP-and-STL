/********************************************************************************************************************************************************************************************
For loop - Sum of Odd Integers
Write code that uses a for loop to calculate the sum of the odd integers from 1 to 15, inclusive. The final result should be stored in an integer variable named sum .

You can find my solution by clicking on the solution.txt file on the left pane. But please make sure you give it a go yourself first, and only check the solution if you really get stuck
*********************************************************************************************************************************************************************************************/
int calculate_sum() {
    int sum{0};
    for(int i=1;i<16;i++){
        i%2!=0?sum+=i:sum;
    }   
    return sum;
}
