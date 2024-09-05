#include<iostream>
using namespace std;

class CSE41{
int x;

int Add(int x,int y){
return x+y;
}
public:
int y;
friend void print();
};

void print(){
CSE41 obj;
obj.x=10;
obj.y=90;
cout<<obj.x<<endl<<obj.y<<endl;
cout<<obj.Add(20,30);
}

int main(){
CSE41 obj2;
//obj2.x=100;
//cout<<obj2.x;

print();
}
