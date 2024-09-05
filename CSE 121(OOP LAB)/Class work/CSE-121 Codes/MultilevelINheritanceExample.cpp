#include<iostream>
using namespace std;
class Grandfather{
public:

    void show(){
    cout<<"I am from grandfather."<<endl;
    }

};

class Father:public Grandfather{
public:
    int x;
void print(){
cout<<"I am From Father Class"<<endl;
}};

class Son:public Father{
public:
        void display(){
    cout<<"I am From Son Class"<<endl;
    }};
int main(){
Son obj;
obj.x=80;
obj.display();
obj.print();
obj.show();
cout<<obj.x;

}
