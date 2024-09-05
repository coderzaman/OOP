#include<iostream>
using namespace std;

class A{
int x;
public:
    int y;


 friend class B;
};

class B{
int p;
public:
    int q;
void print(){
 A obj;
obj.x=10;
obj.y=20;
cout<<obj.x<<endl <<obj.y<<endl;

}

friend class A;
};


int main(){
B obj2;
obj2.print();

}
