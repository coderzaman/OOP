#include<iostream>
using namespace std;

class one{
    private:
       int z;
    public:
        int x;
        int y;
        one(int x_r, int y_r, int z_r):  x{x_r}, y{y_r}, z{z_r}{}
        one();

        friend int Add();
};
int Add(){
    one ob;
    return ob.x + ob.y + ob.z;
}
int main(){
   one ob(10,20,20);
}
