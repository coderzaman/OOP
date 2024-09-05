// #include <iostream>
// using namespace std;
// class testClass
// {
// public:
//     int Add(int x, double y)
//     {
//         return x + y;
//     }
//     int Add(double x, int y)
//     {
//         return x + y;
//     }

//     int Add(double x, double y)
//     {
//         return x + y;
//     }

//     int Add(int x, int y)
//     {
//         return x + y;
//     }

//     int Add(int x, int y, int z)
//     {
//         return x + y + z;
//     }

//     int Add(int x, double y, int z)
//     {
//         return x + y + z;
//     }

//     void Add(string x, int y, int z)
//     {

//     }
//     string Add(int x, int y, string z)
//     {
//         return z;
//     }
// };

// int main()
// {
// }
//Friend method and class
// #include<iostream>
// using namespace std;

// class one{
//     private: 
//        int z = 20;
//     public: 
//         int x = 10;
//         int y = 10;
//         one(int x_r, int y_r, int z_r):  x{x_r}, y{y_r}, z{z_r}{}
//         one(){};

//         friend int add(one ob);
// };
// int add(one ob){
//     //one ob(10,20,20);
//     return ob.x + ob.y + ob.z;
// }
// int main(){
//    one ob(10,20,20);
//    cout << add(ob);
// }


//Friend class:
#include<iostream>
using namespace std;
class two;
class one{
    //friend class two;
    two ob;
    private:
        int x;
    public: 
        int y;
        int z;
        void func(int x_r, int y_r){
            ob.x = x_r;
            ob.y = y_r;
            cout << ob.x + ob.y;
        }

};

class two{
    int x, y;
    //one ob;
    friend class one;
    public:
        int z;
        // void func(int x_r, int y_r, int z_r){
        //     ob.x = x_r;
        //     ob.y = y_r;
        //     ob.z = z_r;
        //     cout << ob.x + ob.y + ob.z;
        // }
};

int main(){
    //two ob;
    //ob.func(10,2,2);

    one ob1;
    ob1.func(1,22);
   
}

