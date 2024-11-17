#include<iostream>
#include<vector>
using namespace std;
void Add(vector<int> & vec_input_nums);
void Print(vector<int> & vec_input_nums);
void Mean(vector<int> & vec_input_nums);
void Smallest(vector<int> & vec_input_nums);
void Largest(vector<int> & vec_input_nums);
void DisplayMenu();
int main(){
    char user_input;
    vector<int> vec_input_nums;
    do{
        DisplayMenu();
        cin>>user_input;
        switch(user_input){
            case 'a' :
            case 'A' :  Add(vec_input_nums);
                        break;
            case 'p' : 
            case 'P' :  Print(vec_input_nums);
                        break;
            case 'm' :
            case 'M' :  Mean(vec_input_nums);
                        break;
            case 'S' :
            case 's' :  Smallest(vec_input_nums);
                        break;
                        
            case 'L' :
            case 'l' :  Largest(vec_input_nums);
                        break;
            case 'q' :
            case 'Q' :  cout<<"Quiting..."<<endl;
                        break;
            default :
                        cout<<"Wrong input"<<endl;
                        cout<<endl;
            
        }
    }while(user_input !='q' && user_input != 'Q');
    return 0;
}

void Add(vector<int> & vec_input_nums){
    int integer_input;
    cout<<"Enter an integer to add to the list : ";
    cin>>integer_input;
    vec_input_nums.push_back(integer_input);
    cout<<"\n"<<integer_input<<" added"<<endl;
    cout<<endl;
}

void Print(vector<int> & vec_input_nums){
    if(vec_input_nums.size()==0)
        cout<<"[] - the list is empty"<<endl;
    else{
        cout<<"[ ";
        for(int i=0;i<vec_input_nums.size();i++){
            cout<<vec_input_nums[i]<<" ";
        }
        cout<<" ]";
    }
    cout<<endl;
}


void Mean(vector<int> & vec_input_nums){
    if(vec_input_nums.size()==0)
        cout<<"[] - the list is empty"<<endl;
    else{   
    double mean = 0;
    for  (int i=0;i<vec_input_nums.size();i++){
        mean = mean+vec_input_nums[i];
    }
    mean/=vec_input_nums.size();
    cout<<"The mean is : "<<mean<<endl;
    }
    cout<<endl;
}

void Smallest(vector<int> & vec_input_nums){
    if(vec_input_nums.size()==0)
        cout<<"[] - the list is empty"<<endl;
    else{
    int min = vec_input_nums[0];
    for(int i=1;i<vec_input_nums.size();i++){
        min>vec_input_nums[i]?min=vec_input_nums[i]:min;
    }

    cout<<"The smallest number is : "<<min<<endl;
    }
    cout<<endl;
}

void Largest(vector<int> & vec_input_nums){

    if(vec_input_nums.size()==0)
        cout<<"[] - the list is empty"<<endl;
    else{
    int max = vec_input_nums[0];
    for(int i=1;i<vec_input_nums.size();i++){
        max<vec_input_nums[i]?max=vec_input_nums[i]:max;
    }
    cout<<"The largest number is : "<< max <<endl;
    }
    cout<<endl;
}

void DisplayMenu(){
    cout<<"P - Print a number"<<endl;
    cout<<"A - Add a number"<<endl;
    cout<<"M - Display mean of the numbers"<<endl;
    cout<<"S - Display the smallest number"<<endl;
    cout<<"L - Display the largest number"<<endl;
    cout<<"Q - Quit"<<endl;
    cout<<"\nEnter you choice : ";
}
