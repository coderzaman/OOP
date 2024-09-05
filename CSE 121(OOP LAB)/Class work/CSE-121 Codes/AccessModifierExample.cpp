#include<iostream>
using namespace std;
class Grandfather{

public:
    int a;
string na;
    Grandfather(int age,string name){
   a=age;
    na=name;
    cout<<age<<" "<<name<<endl;
    }

    void show(){
    cout<<"I am from grandfather."<<endl;
    }

};

class Father:private Grandfather{
public:
    int age2;
string name2;
  Father(int age2,string name2):Grandfather(90,"Md.Rahman Rahman"){
   this->age2=age2;
    this->name2=name2;
    cout<<age2<<" "<<name2<<endl;
    }
    int x;
void print(){
    show();
cout<<"I am From Father Class"<<endl;
}};

class Son:public Father{
        int age1;
string name1;
public:
    Son(int age): Father(age,"Md. Rahman"){
    age1=age;
    cout<<age<<endl;
    }
        void display(){
    cout<<"I am From Son Class"<<endl;
    }};
int main(){
Son obj(20);

//obj.x=80;
obj.display();
obj.print();
//obj.show();
//cout<<obj.x;

}
