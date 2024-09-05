#include<iostream>
using namespace std;
(){
class Square{
public:
    int length;

    int calculateArea(){
    cout<<"Enter Length of a Square:";
    cin>>length;

    int result= length * length;
    return result;

    }

    void display(){
    int output= calculateArea();
    cout<< "Area of Square: "<< output;
    }

} ;


int main(){

Square obj;
obj.display();
}
