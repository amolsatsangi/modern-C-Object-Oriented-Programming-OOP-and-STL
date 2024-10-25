#include<stdlib.h>
#include<string>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    string original {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"};
    string cipher   {"KPXMQWNYRTBVDGUFEIHJOLCZSAmnpqrstuvwxyzabcdefghijklo7480923516"};
    string input_string{""};
    string output_string;
    cout<<"Enter your secret messgae."<<endl;
    getline(cin,input_string);
    cout<<"\nEncrypting message...."<<endl;
    cout<<endl;
    for(size_t i =0;i<input_string.length();i++){
        size_t index = original.find(input_string[i]);
        if(index!=string::npos)
            output_string+=cipher[index];
        else   
            output_string+=input_string[i];
    }
    cout<<endl;
    string real_message;
    cout<<"Encrypted Message : " << output_string<<endl;
    for(size_t i =0;i<output_string.length();i++){
        size_t index = cipher.find(output_string[i]);
        if(index!=string::npos)
            real_message+=original[index];
        else
            real_message+=output_string[i];
    }
    cout<<endl;
    cout<<"Decrypted Message : "<<real_message<<endl;
    return 0;
}
