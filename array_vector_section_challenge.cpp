#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;
int main(){
    vector <int> vector1,vector2;
    vector1.push_back(10);
    vector1.push_back(20);
    cout<<"vector_1"<<endl;
    cout<<"Size of vector1: "<<vector1.size()<<endl;
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;

    vector2.push_back(100);
    vector2.push_back(200);
    cout<<"\nvector_2"<<endl;
    cout<<"Size of vector2: "<<vector2.size()<<endl;
    cout<<vector2.at(0)<<endl;
    cout<<vector2.at(1)<<endl;
    vector<vector <int>> vector_2d{0};
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout<<endl;
    cout<<"vector_2d"<<endl;
    for(int i=0;i<vector1.size();i++){
        for(int j=0;j<vector2.size();j++){
            cout << vector_2d.at(i).at(j)<<" ";
        }
        cout<<endl;
    }
    vector1.at(0) = 1000;
    cout<<endl;
    cout<<"vector_2d"<<endl;
    for(int i=0;i<vector1.size();i++){
        for(int j=0;j<vector2.size();j++){
            cout <<vector_2d.at(i).at(j)<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"vector_21"<<endl;
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;
    return 0;
}
