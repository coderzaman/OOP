#include<iostream>
using namespace std;

class sum{

public:
     int Add(int x,int y){
    int p=x+y;
     return p;
     }


};


int main(){
sum obj;
int x =  obj.Add(20,30);
cout<<x;
}
