#include<iostream>
using namespace std;

class A{

public:
    int y=90;
   void display(){
   cout<<"Hello World";
   }

};

class B{
public:
    int y=60;
   void display(){
   cout<<"Hello World";
   }
};

int print(A obj,B obj1){

return obj.y-obj1.y;
}


int main(){
A obj1;
B obj2;
cout<<print(obj1,obj2);

}
