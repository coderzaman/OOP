#include<iostream>
using namespace std;

class Sagor{

public:
    int x=10;
    int y=30;
    double z=10.5;
    };
class Arshi{
public:
    int p= 70;
void print(){
cout<<"Hey!!! I am arshi";
}
};
int main(){
int r=100;
Sagor obj1;
Arshi obj2;
obj2.p=1000;
cout<< obj1.x<<endl<<obj1.y<<endl<<obj1.z<<endl;
cout<<obj2.p<<endl;
obj2.print();
}
