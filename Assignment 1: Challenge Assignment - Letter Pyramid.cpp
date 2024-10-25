#include<iostream>
#include<string>
using namespace std;
int main(){
    string str_input;
    cout<<"Please enter the string"<<endl;
    getline(cin,str_input);
    for(int i=0;i<str_input.length();i++){
        for(int j=0;j<str_input.length()-i-1;j++)
            cout<<" ";
        for(int j=0;j<=i;j++)
            cout<<str_input[j];
        for(int j=i-1;j>=0;j--)
            cout<<str_input[j];
        for(int j=0;j<str_input.length()-i-1;j++)
            cout<<" ";
        cout<<endl;
    }
    return 0;
}
