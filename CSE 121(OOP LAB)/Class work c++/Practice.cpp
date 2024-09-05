// One
// #include<iostream>
// using namespace std;
// void AllinOne(int x, int y){
//     cout << "Sum of Numbers is: " << x + y;
//     cout << "\nSub of Numbers is: " << x - y;
//     cout << "\nMulti of Numbers is: " << x * y;
//     cout << "\nDiv of Numbers is: " << x / y;
// }
// int main(){
//     //Two Numbers sum, sub, mul, div
//     // with one function
//     int a,b;
//     cin >> a >> b;
//     AllinOne(a,b);
// }


//////////////////Two//////////////////////
//Two Fractional Numbers sum, sub, mul, div
//  with one function 
// #include<iostream>
// using namespace std;
// void AllinOne(double x, double y){
//     cout << "Sum of Numbers is: " << x + y;
//     cout << "\nSub of Numbers is: " << x - y;
//     cout << "\nMulti of Numbers is: " << x * y;
//     cout << "\nDiv of Numbers is: " << x / y;
// }
// int main(){
//     double a,b;
//     cin >> a >> b;
//     AllinOne(a,b);
// }


//////////////////Three//////////////////////
//Return type Boolean function
// #include<iostream>
// using namespace std;
// bool TrueFlase(int x){
//         if(x == 0){
//             return false;
//         }else if(x == 1){
//             return true;
//         }else{
//               return false;
//         }
// }
// int main(){
//   int x;
//   cout << "Please Enter 0 or 1\n";
//   cin >> x;
//   bool output = TrueFlase(x);
//   cout << boolalpha << "You always tell " << output; 
// }




////////////////// Four //////////////////////
//Two Fractional BooleanAdd, subtract, multiply, 
//and divide by determine symbols
// #include<iostream>
// using namespace std;
// double calFrac(int x, double y, double z){
//   if(x == 1){
//     return y+z;
//   }else if(x == 2){
//     return y-z;
//   }else if (x == 3){
//     return y*z;
//   }else{
//     return y/z;
//   }
// }
// int main() {
//   int x;
//   double y,z;
//   string ch = "a";
//   cout << "Press (+) for 1: ";
//   cout << "\nPress (-) for 2: ";
//   cout << "\nPress (x) for 3: ";
//   cout << "\nPress (/) for 4: \n";
//   cout << "\nPlease Select an Option: ";
//   cin >> x;
//   while (x < 1 || 4 < x)
//   {
//     cout << "Wrong! Please select Correct Option: ";
//     cin >> x;
//   }

//   if (x == 1)
//   {
//     ch = "+ ";
//   }else if (x == 2){
//     ch = "- ";
//   }else if (x == 3){
//     ch = "x ";
//   }else{
//     ch = "/ ";
//   }
//   cout << "  ";
//   cin >> y;
//   cout << ch ;
//   cin >> z;
//   cout << "----------------\n";
//   cout << "  ";
//   double result = calFrac(x,y,z);
//   cout << result;
// }

////////////////Five///////////////
//Calculte number with recursive function

// #include<iostream>
// using namespace std;
// int calculte(int x, int y, int z){
//     if(x == 1){
//         return y + z;
//     }else if(x == 2){
//         return y - z;
//     }else if(x == 3){
//         return y * z;
//     }else if(x == 4){
//         return y / z;
//     }else{
//         cout << "Please Select Correct Option" << endl;
//         cout << "Enter 1 for(+): ";
//         cout << "\nEnter 2 for(-): ";
//         cout << "\nEnter 3 for(x): ";
//         cout << "\nEnter 4 for(/): ";
//         cin >>  x >> y >> z;
//         return calculte(x,y,z);
//     }
// }

// int main(){
//     int x,y,z;
//     cout << "Enter 1 for(+): ";
//     cout << "\nEnter 2 for(-): ";
//     cout << "\nEnter 3 for(x): ";
//     cout << "\nEnter 4 for(/): ";
    
//     cin >>  x >> y >> z;
    

//     int result = calculte(x, y, z);
//     cout << "Result is: " << result << "\n";

// }

//////////////////Six////////////////////
//Calculte number with recursive function

// #include<iostream>
// using namespace std;

// int multiply(int x, int y){
//     cout << "Beffore Increment in Funtion x is:" << x << ", y is:" << y << endl;
//     int result = ++x * ++y;
//     cout << "After Increment in Funtion x is:" << x << ", y is:" << y << endl;
//     return result;
// }

// int main(){
//     int x = 10;
//     int y = 5;
//     cout << "Beffore Increment in function Outside of Funtion x is:" << x << ", y is:" << y << endl;
//     int result = multiply(x, y);
//     cout << "After Increment in function Outside of Funtion x is:" << x << ", y is:" << y << endl;

// }

// ////////////SEVEN/////////////
// #include<iostream>
// using namespace std;
// // Function declaration
// int max(int x, int y);
// int min(int x, int y);
// //You can do this here also
// int add(int , int );

// int main(){
//     int x, y;
//     cout << "Pelase Enter Two Number: ";
//     cin >> x >> y;

//     cout << "Maximum Number: " << max(x, y) << endl;
//     cout << "Minimum Number: " << min(x, y) << endl;
//     cout << "Summation of Number: " << add(x, y);
// }
// //Funtion Definition
// //Find Maximum
// int max(int x, int y){
//     if(x < y){
//         return y;
//     }else{
//         return x;
//         }
// };

// //Find Minimum
// int min(int x, int y){
//      if(x > y){
//         return y;
//     }else{
//         return x;
//         }
// };

// //Add Number: 
// int add(int x, int y){
//     return x + y;
// };

//////////////EIGHT/////////////
//Return String Method
// #include<iostream>
// using namespace std;
// string wishMe(){
//     return "Good Luck";
// }


// int main(){
//     cout << wishMe() << endl;
// }

//////////////NINE/////////////
//Receive to String and add them
// #include<iostream>
// using namespace std;
// string AddtwoString(string x, string y){
//     return x + y;
// }

// int main(){
//    string x = "Hello, ";
//    string y = "what's up?";
   
//    cout << AddtwoString(x, y) << endl;
// }


//////////////TEN/////////////
// //First Letter of Your Name
// #include<iostream>
// #include <cctype>
// using namespace std;

// string findFirstLastLetter(string x){
//     int len = x.length();
//     string s(1, x[0]);
//     string s2(1, x[len - 1]);
//     string res = "First Letter of your name is: " + s + "\nLast Letter of your name is: " + s2;
//     return res;
// }

// int main(){
//     string fullName;
//     cout << "Please enter your name: ";
//     cin >> fullName;
//     cout << endl;

//     cout << findFirstLastLetter(fullName) << endl;
// }

//////////////////ELEVEN////////////////////
//REceive an Array and Sum all element

// #include<iostream>
// using namespace std;
// int addArray(int arr[], size_t len){
//     int sum = 0;
    
//     for (size_t i = 0; i < len; i++)
//     {
//         sum += arr[i];
//     }
    
//     return sum;
    
// }
// int main(){
//     int arr[8] = {1,2,3,4,5,5,4,32};
//     int res = addArray(arr,sizeof(arr)/sizeof(arr[0]));
//     cout << "Sum of ALl Array Elments is: " << res << endl;
// }


//////////////////ELEVEN////////////////////
//REceive an Array and Sum all element

// #include<iostream>
// using namespace std;
// int addArray(int arr[], size_t len){
//     int sum = 0;
    
//     for (size_t i = 0; i < len; i++)
//     {
//         sum += arr[i];
//     }
    
//     return sum;
    
// }
// int main(){
//     int arr[8] = {1,2,3,4,5,5,4,32};
//     int res = addArray(arr,sizeof(arr)/sizeof(arr[0]));
//     cout << "Sum of ALl Array Elments is: " << res << endl;
// }


////////////////////////TWELEVE///////////////////////
//////////////////REVERSE AN ARRAY////////////////////
// #include<iostream>
// using namespace std;
// void addArray(int arr[], size_t len){
//     int sum = 0;
//     int *p = &arr[len-1];
//     for (size_t i = 0; i < len; i++)
//     {
//        cout << *p-- << " ";
//     }
// }
// int main(){
//     int arr[8] = {1,2,3,4,5,5,4,32};
//     addArray(arr,sizeof(arr)/sizeof(arr[0]));
// }

////////////////////////THIRTEEN//////////////////////
//////////////////REVERSE AN STRING////////////////////
// #include<iostream>
// using namespace std;
// string reverse_String(string str, int len){
//     string rev;
//     for(int i = len; i >= 0; i--){
//         rev += str[i];
//     }

//     return rev;
// }

// int main(){
//     string str;
//     cout << "Enter a string: ";
//     getline(cin,str);
//     int len = str.length()-1;
//     string rev_string = reverse_String(str, len);
//     cout << rev_string << endl;
// }

////////////////////////FOURTEEN///////////////////////
//////////////////MAKE POWER FUNTINON//////////////////
// #include<iostream>
// using namespace std;
// size_t Power(size_t base, size_t power){
//     size_t res = 1;
//     if(power == 0){
//         return 1;
//     }else{
//        for(int i = 0; i < power; i++){
//         res *= base;
//        }
//        return res;
//     }
// }

// int main(){
//     size_t base, power;
//     cout << "Please enter a base and power this format: Power(base, power): ";
//     cin >> base >> power;
//     size_t powRest = Power(base, power);
//     cout << "\nBase: " << base << "\nPower: " << power << "\nResult: " << powRest << endl; 
// }


//  #include<iostream>
//  #include <cstdlib>
//  using namespace std;

//  int main(){
//     int randomNumber = (rand() % 35) + 1;
//     cout << randomNumber << endl;
//  }


//Fifteen///// 
//lottery with random function

// #include <ctime>
// #include <iostream>

// using namespace std;

// string lotteryWinnner(int x){
//   srand((unsigned) time(0) + 2);
//   int randomNumber;
//   randomNumber = (rand() % 5) + 1;
//   if(x == randomNumber){
//     return "Winnner!";
//   }else{
//     return "Soory, Try for next time.";
//   }
// }

// int main() {
  
//     int x;
//     cout << "Please Input a postive 1 to 5: ";
//     cin >> x;
    
//     while (x < 0 || x > 5)
//     {   
//         cout << "\nRead carefully description Instructions!" << endl;
//         cout << "Please Enter a valid number: " ;
//         cin >> x;
//     }
  
//     string winner = lotteryWinnner(x);
//     cout << endl <<  winner << endl  << endl;
   
// }

// #include<iostream>
// using namespace std;

// // first name space
// namespace first_space {
//    int x = 10;
//    void func() {
//       cout << "Inside first_space" << endl;
//    }
// }

// // second name space
// namespace second_space {
//    int x = 20;
//    void func1() {
//       cout << "Inside second_space" << endl;
//    }
  
// }

// int main() {
//   cout << first_space:: x << endl;
//   cout << second_space:: x << endl;
// }

// #include<iostream>
// using namespace std;
// class Test{
//    public:
//      int result;
//      Test(int x, int y){
//        result = x + y;
//     };
//     void Hello(){
//          cout << result << endl;
//     };
// };
// int main(){
//     Test test(10,20);
//     test.Hello();
// }

// Problem 3
// #include<iostream>
// using namespace std;
// class coordinate{
//     public:
//      int x, y, z; 
//      void set(int a, int b, int c){
//             x = a;
//             y = b;
//             z = c;
//      }

//      void show(){
//         cout << x << " " << y << " " << z << endl;
//      }
// };
// int main(){
//     coordinate obj1, obj2;
//     obj1.set(5,10,20);
//     obj2 = obj1;
//     obj1.show();
//     obj2.show();
// }


//Problem 2: V:01
// #include<iostream>
// using namespace std;
// class Circle{
//     public:
//         double area;
//         int radius;
     
//         Circle(int x){
//             radius = x;
//             area = 3.1416 * (radius * radius);
//             cout << "Radius: " << radius << " Area: " << area << endl;
//         }

//         Circle(){
//             radius = 1;
//         }

//         double getArea(){
//             area = 3.1416 * (radius * radius);
//             return area;
//         }
// };
// int main(){
//     Circle obj1(2), obj2(12), obj3(24);
//     obj2 = 35; 
// }

// //Problem 2: V:02
// #include<iostream>
// using namespace std;
// class Circle{
//     public:
//         double area;
//         int radius;
     
//         Circle(int x){
//             radius = x;
//         }

//         Circle(){
//             radius = 1;
//         }

//         double getArea(){
//             area = 3.1416 * (radius * radius);
//             cout << "Radius: " << radius << " Area: " << area << endl;
//             return area;
//         }

        
// };
// int main(){
//     Circle obj1(2), obj2(12), obj3(24);
//     obj1.getArea();
//     obj2.getArea();
//     obj3.getArea();
//     obj2 = 35; 
//     obj2.getArea();
// }

// // //Program One
// #include <iostream>
// using namespace std;
// class cse37{
//     public:
//         float cgpa;
//         int id;  

//         cse37(float rCgpa, int rId){
//             cgpa = rCgpa;
//             id = rId;
            
//         }

//         void display(){
//             cout << "Id  : " << id << endl << "Cgpa: " << cgpa << endl;
//         }
// };
// int main(){
//     cse37 obj(3.95, 16171819);
//     obj.display();
// }

//Problem 2: V:02
// #include<iostream>
// using namespace std;
// class Circle{
//     public:
//         double area;
//         int radius;
     
//         Circle(int x){
//             radius = x;
//             area = 3.1416 * (radius * radius);
//         }

//         void display(){
//             cout << "Radius: " << radius << " Area: " << area << endl;
//         }

        
// };
// int main(){
//     Circle obj1(2), obj2(12), obj3(24);
//     obj1.display();
//     obj2.display();
//     obj3.display();
//     obj2 = 35; 
//     obj2.display();
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x = 2147483648;
//     cout << x;
// }

// //Problem 2: V:01
// #include<iostream>
// using namespace std;
// class Circle{
//     public:
//         double area;
//         int radius;
     
//         Circle(int x){
//             radius = x;
//             area = 3.1416 * (radius * radius);
//         }

//         void display(){
//             cout << "Radius: " << radius << " Area: " << area << endl;
//         }
// };
// int main(){
//     Circle obj1(2), obj2(12), obj3(24);
//     obj1.display();
//     obj2.display();
//     obj3.display();
//     obj2 = 35; 
//     obj2.display();
// }

// Problem 3
// #include<iostream>
// using namespace std;
// class coordinate{
//     public:
//      int x, y, z; 
//      void set(int a, int b, int c){
//             x = a;
//             y = b;
//             z = c;
//      }

//      void show(){
//         cout << x << " " << y << " " << z << endl;
//      }
// };
// int main(){
//     coordinate obj1, obj2;
//     obj1.set(5,10,20);
//     obj2 = obj1;
//     obj1.show();
//     obj2.show();
// }


//problem 3
// #include<iostream>
// using namespace std;
// class coordinate{
//     public: 
//     int x, y, z;
//     void set(int x_r, int y_r, int z_r){
//         x = x_r;
//         y = y_r;
//         z = z_r;
//     }

//     void show(){
//         cout << x << " " << y << " " << z << endl;
//     }
// };
// int main(){
//     coordinate obj1,obj2;
//     obj1.set(5,10,20);
//     obj2 = obj1;
//     obj1.show();
//     obj2.show();
// }

//Problem 2
// #include<iostream>
// using namespace std;
// class Circle{
//     public: 
//     float radius;
//     float area;
//     Circle(float x){
//         radius = x;
//     }
//     float getArea(){
//         double area1;
//         area1 = 3.1416 * radius * radius;
//         return area1;
//     }
//     Circle(){
//         radius = 1;
//     }

//     void display(){
//         area = getArea();
//         cout << radius  << " " << area << endl;
//     }

// };

// int main(){
//     Circle obj1(2.0),obj2(12),obj3(24), obj4;
//     obj1.display();
//     obj2.display();
//     obj3.display();
//     obj4.display();
//     obj2.radius = 35;
//     obj2.display();
// }
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
// #include<iostream>
// using namespace std;
// class two;
// class one{
//     //friend class two;
//     two ob;
//     private:
//         int x;
//     public: 
//         int y;
//         int z;
//         void func(int x_r, int y_r){
//             ob.x = x_r;
//             ob.y = y_r;
//             cout << ob.x + ob.y;
//         }

// };

// class two{
//     int x, y;
//     //one ob;
//     friend class one;
//     public:
//         int z;
//         // void func(int x_r, int y_r, int z_r){
//         //     ob.x = x_r;
//         //     ob.y = y_r;
//         //     ob.z = z_r;
//         //     cout << ob.x + ob.y + ob.z;
//         // }
// };

// int main(){
//     //two ob;
//     //ob.func(10,2,2);

//     one ob1;
//     ob1.func(1,22);
   
// }

// #include<iostream>
// using namespace std;
// class square{
//     int length;

//     public: 
//         void setLength(int l){
//             length = l;
//         }
       
//        friend int area(square obj);
// };

// int area(square obj){
//     return obj.length * obj.length;
// }
// int main(){
//     square obj;
//     obj.setLength(10);
//     cout << "Area: " << area(obj);
// }

// #include<iostream>
// using namespace std;
// class Box{
//     int length, width, height;
//     public:
//         Box(int l, int w, int he){
//             length = l;
//             width = w;
//             height = he;
//         }

//         void display(){
//             cout << "Length: " << length << " Width: " << width << " Height: " << height << endl;
//         }

//         friend int area (Box obj);
// };

// int area(Box obj){
//     return obj.height * obj.width * obj.length;
// }

// int main(){
//     Box obj(10,2,2);
//     obj.display();
//     cout << "Area: " << area(obj) << endl;
// }

// #include<iostream>
// #include <cmath>
// using namespace std;
// class Triangle{
//     float base, perpendicular, hyperbola;
//     public: 
//         Triangle(float b, float p, float h){
//             base = b;
//             perpendicular = p;
//             hyperbola = h;
//         }

//         Triangle(){
//             base = 3;
//             perpendicular = 4;
//             hyperbola = 5;
//         }

//         float area(){
//             float s = (base + perpendicular + hyperbola)/2;
//             return  sqrt((s * ((s-base) * (s-perpendicular) * (s-hyperbola))));
//         }

//         float perimeter(){
//             return base + perpendicular + hyperbola;
//         } 
// };

// int main(){
//     Triangle ob;
//     cout << "Area: " << ob.area() << endl;
//     cout << "Perimeter: " << ob.perimeter() << endl;
    

//     Triangle ob1(2,3,2);
//     cout << "Area: " << ob1.area() << endl;
//     cout << "Perimeter: " << ob1.perimeter() << endl;

// }

// #include<iostream>
// #include <cmath>
// using namespace std;
// class Triangle{
//     float base, perpendicular, hyperbola;
//     public: 
//         Triangle(float b, float p, float h){
//             base = b;
//             perpendicular = p;
//             hyperbola = h;
//         }

//         Triangle(){
//             base = 3;
//             perpendicular = 4;
//             hyperbola = 5;
//         }

//         friend void peri_area(Triangle);
// };
// void peri_area(Triangle ob){
//     float s = (ob.base + ob.perpendicular + ob.hyperbola)/2;
//     float perimeter = ob.base + ob.perpendicular + ob.hyperbola;
//     float area = sqrt((s * ((s-ob.base) * (s-ob.perpendicular) * (s-ob.hyperbola))));
//     cout << "Area: " << area << endl;
//     cout << "Perimeter: " << perimeter << endl;
// };
// int main(){
//     Triangle ob;
//     peri_area(ob);
//     Triangle ob1(2,3,2);
//     peri_area(ob1);
// }

// #include<iostream>
// #include <cmath>
// using namespace std;
// class Triangle{
//     float base, perpendicular, hyperbola;
//     public: 
//         float area, perimeter;
//         Triangle(float b, float p, float h){
//             base = b;
//             perpendicular = p;
//             hyperbola = h;
//         }

//         Triangle(){
//             base = 3;
//             perpendicular = 4;
//             hyperbola = 5;
//         }

//          friend Triangle peri_area(Triangle);
// };
// Triangle peri_area(Triangle ob){
//     float s = (ob.base + ob.perpendicular + ob.hyperbola)/2;
//     ob.perimeter = ob.base + ob.perpendicular + ob.hyperbola;
//     ob.area = sqrt((s * ((s-ob.base) * (s-ob.perpendicular) * (s-ob.hyperbola))));
//     return ob;
// };
// int main(){
//     Triangle ob;
//     Triangle objCal = peri_area(ob);
//     cout << "Area: " << objCal.area << endl;
//     cout << "Perimeter: " << objCal.perimeter << endl;

//     Triangle ob1(2,3,2);
//     objCal = peri_area(ob1);
//     cout << "Area: " << objCal.area << endl;
//     cout << "Perimeter: " << objCal.perimeter << endl;
// }

// #include <iostream>
// using namespace std;

// class Average{
//     public:
//         int a,b,c;
//         Average(int x, int y, int z){
//             a = x;
//             b = y;
//             c = z;
//         }

//         int calculte(){
//             return (a + b +c)/3;
//         }
        
// };


// int main(){
//     int x, y, z;
//     cin >> x >> y >> z;
//     Average ob(x, y, z);
//     cout << endl;

//     cout << "Average: " << ob.calculte() << endl;
// }

// #include <iostream>
// using namespace std;

// class Employee{
//     public:
//         int salary, hours;
//         void getInfo(int s, int h) {
//             salary = s;
//             hours = h;

//             if(s < 500){
//                 salary = AddSal();
//             }

//             if(h > 6){
//                 salary = AddWork();
//             }
//         }

//         int AddSal(){
//             salary = salary + 10;
//             return salary;
//         }

//         int AddWork(){
//             salary = salary + 5;
//             return salary;
//         }


// };

// int main(){
//     Employee ob;
//     ob.getInfo(400,7);
//     cout << ob.salary << endl;
// }

// #include <iostream>
// using namespace std;

// class Employee{
//     private: 
//         int salary, hours;
//     public:
//         void getInfo(int s, int h) {
//             salary = s;
//             hours = h;

//             if(s < 500){
//                 salary = AddSal();
//             }

//             if(h > 6){
//                 salary = AddWork();
//             }
//         }

//         int AddSal(){
//             salary = salary + 10;
//             return salary;
//         }

//         int AddWork(){
//             salary = salary + 5;
//             return salary;
//         }

//         friend int FinalSalary(Employee em);
// };

// int FinalSalary(Employee em){
//     return em.salary;
// }

// int main(){
//     Employee ob;
//     ob.getInfo(400,6);
//     cout << FinalSalary(ob) << endl;
// }

// #include<iostream>
// using namespace std;

// class Runner{
//     string CarModel, CarName, CarOwner;
//     int CarPrice;
//     public:
//     void intialValues(string& cM, string& cN, string& cO, int& pr){
//         cout << "Please Enter Car Model: ";
//         getline(std::cin, cM);
//         cout << "Please Enter Car Name : ";
//         getline(std::cin, cN);
//         cout << "Please Enter Car Owner: ";
//         getline(std::cin, cO);
//         cout << "Please Enter Car Price : ";
//         cin >> pr;
//         }

//     void dsiplay(string& cM, string& cN, string& cO, int& pr){
//         cout << "Car Model : " << cM << endl;
//         cout << "Car Name  :" << cN << endl;
//         cout << "Car Owner :" << cO << endl;
//         cout << "Car Price :" << pr << endl;   
// }

// };


// int main(){
//     string CarModel, CarName, CarOwner;
//     int CarPrice;

     
   
    
// }


// #include<iostream>
// using namespace std;
// class Car{
//     public: 
//         int x;
//         int y;
// };
// Car meth(Car car){
//     car.x = 10;
//     car.y = 10;
//     return car;
// }
// int main(){
//     Car car;
//     car = meth(car);
//     cout << car.x + car.y;

// }



// #include<iostream>
// using namespace std;

// int x(int x, int y){
//     return x + y;
// }


// int main(){
    
// }





// #include<iostream>
// using namespace std;

// class Car{
//     int x,y;
//     public:
//     void name(int x, int y, int z){
//         int sum = x + y +  z;
//     }

// };

// int main(){
//     int i = 1025;
//     int *p  = &i;
//     char *s = (char *) &i;
//     int x = *s;
//     cout << x << endl;
//     x = *(s+1);
//     cout << x+1 << endl;
//     Car ob;
//     cout << sizeof(ob) << endl;
//     ob.name(1,2,3);
//     cout << sizeof(ob);
// }





// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     int b = 40;

//     a = b;
//     b = a;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char c = 'a';
//     char b = 'c';

//     cout << c << b << endl;
// }


// Note: 
// Explain Charater Again
// if conditon
// pointer

// #include<iostream>
// using namespace std;

// class A{
//     private:
//         int a, b;
//     public:
//         // int x,y;

//         // void setA(int c){
//         //     a = c;
//         // }

//         // int getA(){
//         //     return a;
//         // }
//         // void Assign(int a){
//         //     int x, uy, uz;
//         //     x = a;
//         // }

//         // void Assign(){
//         //    x = 100;
//         // }
//         // A(){
//         //      cout << "Default Constructor" << endl;
//         // }
//         // A(double a, int b){
//         //     cout << "One double One Interger" << endl;
//         // }
//         // A(int a, double b){

//         // }
//         // A(int a, int b){

//         // }

//         // A(double a, double b){
//         //     cout << "Two double Values" << endl;
//         // }

//         //  A(double a, double b, double c){
            
//         // }




// };


// int main(){
//     //A obj, obj2(83.9, 30), obj3(98.3,383.32);
//     // obj.Assign(50);
//     // cout << obj.x << endl;
//     // obj.Assign();
//     // cout << obj.x << endl;
//     //cout << obj.x << endl;
//     //cout << sizeof(obj);
//     A obj;
//     // obj.setA(10);
//     // cout << obj.getA() << endl;
//     // obj.a = 200;
//     // obj.b = 23002;
// }



// class A{
//     // private: 
//     //     int x;
//     //     friend class B;

// };

// class B{
//     // public:
//     //     A obj;
//     //     int Assign(){
//     //         return obj.x = 100;
//     //     }
// };
// class A{
//     private: 
//        int a;
//        int b;
//     public:
//         int x;
//         int y;
    
// };


// A Func(A obj){
//     obj.x = 199;
//     obj.y = 100;
//     return obj;
// }

// int main(){
//     A obj;
//     A ob1 = Func(obj);
//     cout << ob1.x << endl;
//     cout << ob1.y;
// }   

// void funct(int x, int y, int& sum){
//     //cout << ++x << endl;
//     sum = x + y;
// }

// #include<iostream>
// int main(){
//     int x = 10, y =20 , sum;
//     funct(x, y,sum);
//     cout << sum;
// }
// #include<iostream>
// using namespace std;
// class Football{
//     public: 
//         int radius, weight;
//         void display(){
//             cout << "radius: " << radius << " Weight: " << weight <<endl;
//         }

//         Football(int r, int w){
//             radius = r;
//             weight  = w;
//         }

//         Football(){
//             radius = 1;
//             weight = 2;
//         }
// };

// int main(){
//     Football ob1(10,20), ob2;
//     ob1.display();
//     ob2.display();
// }


// #include<iostream>
// using namespace std;

// class Resgistration{
//     public:
//         void chooseCoruse(string x, string y, string z){
//             cout << x << ", " << y << ", " << z << endl;
//         }
//         void chooseCoruse(string x, string y, string z, string a){
//              cout << x << ", " << y << ", " << z << ", " << a << endl;
//         }
        
//         void chooseCoruse(string x, string y, string z, string a, string b){
//               cout << x << ", " << y << ", " << z << ", " << a << " ," << b << endl;
//         }
//         void chooseCoruse(string x, string y, string z, string a, string b, string c){
//                 cout << x << ", " << y << ", " << z << ", " << a << " ," << b << ", " << c << endl;
//         }

// };


// int main(){
//     Resgistration obj;
//     obj.chooseCoruse("Cse 101", "Cse 102", "cse 103");
//     obj.chooseCoruse("Cse 101", "Cse 102", "cse 103", "ces 123");
//     obj.chooseCoruse("Cse 101", "Cse 102", "cse 103", "ces 123", "cse37");
//     obj.chooseCoruse("Cse 101", "Cse 102", "cse 103", "ces 123", "cse37", "Cse 502");
    
// }   

// #include<iostream>
// using namespace std;

// class A{
//     friend class B;
//     public: 
//         int x;
//     protected:
//         int y;    
// };
// class B{
//     A a;
//     public:
//         int func(){
//             a.x = 100;
//             a.y = 3;
//             return a.x;
//         }
// };
// int main(){
//     B a;
//     cout << a.func() << endl;
// }

// #include<iostream>
// class B;
// class A{
//     friend class B;
//     B obj;
//     public:
//         int x = 199;
        
// };

// class B{
//     friend class A;
//     A obj;

// };

// int main(){
   
// }

// #include <iostream>
// class B;
// class A{
//     public: 
//         int a_i=10;
//         //only a declaration here
//         void A_lookup(B b);        
// };
// class B{
//     public:
//         int b_i=20;
//         void B_lookup(A a){
//             std::cout << a.a_i <<std::endl;
//         }
// };
// //this is a definition. At this point B is a complete type 
// void A::A_lookup(B b)
// {
//     std::cout << b.b_i <<std::endl;
// }
// int main(void){
//     A a;
//     B b;
//     a.A_lookup(b);
// }

// #include<iostream>
// using namespace std;
// int main(){
    // int x = 10;

    // do{
    //     cout << "Testing";
    // }while(x < 10);




    // int i = 1;
    // do {
    //     cout << i << "\n";
    // }
    // while (++i < 5);

    // for(int i=0; i < 5;){
    //     cout << "Testing" << endl;
    //     ++i;
    // }
// }

// #include<iostream>
// using namespace std;
// class Test{
//     private:
//         int x;
//     public: 
//         void setX(int y){
//              x = y;
//         }
//         // Test(int x){
//         //     this -> x = x;
//         // }

//         //Test(){};
//         friend void Name(Test);
// };
// void Name(Test test){
//     cout << test.x << endl;
// }
// int main(){
//     //Test obj(19);
//     Test obj;
//     obj.setX(100);
//     Name(obj);
// }


// #include<iostream>
// using namespace std;

// class A{
//     int x = 10;
//     friend void area();
    
//     public: 
//     int a = 100;
// };

// // void area(){
// //     A a;
// //     cout << a.x << endl;
// //     cout << a.a << endl;
// // }

// void area(){
//     A a;
//     cout << a.x << endl;
//     cout << a.a << endl;
// }

// int main(){
//     //A a;
//     area();
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 0;
//     for (size_t i = n; i++ < 5;)
//     {
//         cout << i << endl;
//         n++;
//     }
    
// }


// #include <iostream>
// using namespace std;



// int main(){
//     // char c = 'a';
//     // char b = 'd';

//     // char s = c + b;
//     // cout << s << endl;
//     // int x = 0;
//     // do{
//     //     cout << x << endl;
//     //    x++;
//     // }while(x < 5);



// }


// #include <iostream>
// using namespace std;
// class Circle{
//     private: 
//         int b;
//     public:
//         Circle(){

//         }

//         Circle(){
            
//         }
//         Circle(int x){
//             b = x;
//         }
   

//         void setB(int y){
//             b = y;
//         }


//         //int a;
//         // void setA(int x){
//         //     a = x;
//         // }
//         //  void setA(){
//         //     cout << a << endl;
//         // }

//         // void setB(int b){
//         //      a = b;
//         // }
//         // void setB(int y){
//         //     b = y;
//         // }

//         // int getB(){
//         //     return b;
//         // }
        
// };


// int main(){
//     Circle ob;
//     // A ob;
//     // ob.a = 100;
//     //cout << ob.a << endl;

//     // A ob1;
//     // cout << ob1.a << endl;

//     // A ob;
//     // ob.setA(100);
//     // cout << ob.a << endl;
//     // ob.setA();

//     // A ob2;
//     // cout << ob2.a << endl;
//     // A obj2;
//     // obj2.setB(388);
//     // cout << obj2.getB() << endl;

//     Circle obj3;
//     cout << obj3.getB() << endl;
//     //cout << obj2.setB()  << endl;
//     // cout << obj2.getB() << endl;
    
// }


// #include <iostream>
// using namespace std;
// class Circle{
//     private: 
//         int b,c;
        
//     public:
//         int a;
//     friend void SetValue(int x);
//         // Circle(){
        
//         // }

//         // Circle(int x){
//         //     b = x;

//         // }
    
//         // Circle(int x, int y){
//         //     b = x;
//         //     c = y;
//         // }
   

//         // void setB(int y){
//         //     b = y;
//         // }


        
// };


// void SetValue(int x){
//    Circle c;
//    c.a = 100;
//    //c.t = 1;
//    c.b = x;
//    cout << c.b << endl;
// }

// int main(){
    // Circle c, c1(10), c2(20,30);
    // cout << c2.b << endl;
    // cout << c2.c << endl;
    // cout << c1.b << endl;
    // c1.b = 20;
    // cout << c1.b << endl;
    // cout << c.b << endl;
    // c.setB(59);
    // cout << c.b << endl;
    // Circle c3;
    // cout << c3.b << endl;

    //Circle c;
   // c.b = 20;
    //c.t = 20;
    // SetValue(10);

    // Circle c;
    // cout << c.a << endl;

// }


// class Circle;
// class Square{
//     private:
        
//         int y;
//     public:
//       // int x;
//        //friend class Circle;
// //        Circle * cr;
// //        void zValue(){
// //         cr->z = 100;
// //         cout << cr -> z << endl;
// //        }
// // };

// class Circle{
//      friend class Square;
//    // Square sq;
//     int z;
//     public:
//     // void xValue(){
//     //     sq.x = 100;
//     //     sq.y = 22;
//     //     cout << sq.x << endl;
//     // }
// };

// int main(){
//     // Circle c;
//     // c.xValue();
//     // Square sq;
//     // sq.zValue();
// }




// void xObject(Circle obj){
//     cout << obj.x << endl;
// }


// #include<iostream>
// using namespace std;

// class Circle{
//     public:
//       int x;
//       int y;
// };


// Circle xyObject(Circle obj){
//     //cout << obj.x << endl;
//     obj.x = 500;
//     obj.y = 1000;
//     return obj;
// }

// int main(){
//     Circle c,c1;
//     c.x = 100;
//     c.y = 500;
//     xyObject(c);
// }


// #include<iostream>
// #include <cmath>
// using namespace std;
// class Triangle{
//     float base, perpendicular, hyperbola;
//     public: 
//         float area, perimeter;
//         Triangle(float b, float p, float h){
//             base = b;
//             perpendicular = p;
//             hyperbola = h;
//         }
//         Triangle(){
//             base = 3;
//             perpendicular = 4;
//             hyperbola = 5;
//         }
//          friend Triangle peri_area(Triangle);
// };
// Triangle peri_area(Triangle ob){
//     float s = (ob.base + ob.perpendicular + ob.hyperbola)/2;
//     float perimeter = ob.base + ob.perpendicular + ob.hyperbola;
//     float area = sqrt((s * ((s-ob.base) * (s-ob.perpendicular) * (s-ob.hyperbola))));
//     return ob;
// };
// int main(){
//     Triangle ob(2,3,2), ob1;
//     peri_area(ob);

//     cout << ob.area << endl;


   
// }



// #include<iostream>
// using namespace std;
// class Cse37{
//     public:
//         float cgpa;
//         long int id;
//         void display(){
//             cout << "Id: " << id << endl;
//             cout << "Cgpa: " << cgpa << endl;
//         }

//         Cse37(float x, long int y){
//             cgpa = x;
//             id = y;
//         }

// };
// int main(){
//     Cse37 ob(3.97, 827637287);
//     ob.display();
    
    
// }



// #include<iostream>
// using namespace std;

// class coordinate{
//     public:
//         int x, y, z;
//         void set(int a, int b, int c){
//             x = a;
//             y = b;
//             z = c;
//         }
//         void show(){
//             cout << x << ", " << y << ", " << z << endl;
//         }
// };


// int main(){
//     coordinate ob1, ob2;
//     ob1.set(5,10,20);
//     ob2 = ob1;
//     ob1.show();
//     ob2.show();
// }
//problem 1
// #include <cmath>
// #include <iostream>
// using namespace std;
// class Triangle{
//     private: 
//         float base, perpendicular, hyperbola;
//     public:
//         Triangle(float b, float p, float h){ 
//             base = b;
//             perpendicular = p;
//             hyperbola = h;
//         }

//         Triangle(){ 
//             base = 3;
//             perpendicular = 4;
//             hyperbola = 5;
//         }
//         friend void peri_area(Triangle ob);
// };

// void peri_area(Triangle ob){
//     float s = ob.base + ob.perpendicular + ob.hyperbola;
//     float area =  sqrt(s*(s - ob.base) * (s - ob.perpendicular) * (s - ob.hyperbola));
//     float perimiter = ob.base + ob.perpendicular + ob.hyperbola;
//     cout << "Area: " << area << endl;
//     cout << "perimiter: " << perimiter << endl;
// }

// int main(){
//     Triangle ob(2 ,32 ,21.2), ob1;
//     peri_area(ob);
//     peri_area(ob1);
// }

// // //problem 2
// #include <cmath>
// #include <iostream>
// using namespace std;
// class Triangle{
//     private: 
//         float base, perpendicular, hyperbola;
//     public:
//         float area, perimiter;
//         Triangle(float b, float p, float h){ 
//             base = b;
//             perpendicular = p;
//             hyperbola = h;
//         }

//         Triangle(){ 
//             base = 3;
//             perpendicular = 4;
//             hyperbola = 5;
//         }
//         friend Triangle peri_area(Triangle ob);
// };

// Triangle peri_area(Triangle ob){
//     float s = ob.base + ob.perpendicular + ob.hyperbola;
//     ob.area =  sqrt(s*(s - ob.base) * (s - ob.perpendicular) * (s - ob.hyperbola));
//     ob.perimiter = ob.base + ob.perpendicular + ob.hyperbola;
//     return ob;
// }

// int main(){
//     Triangle ob(2 ,32 ,21.2), ob1;
//     Triangle obOuput = peri_area(ob);
//     Triangle ob1Output = peri_area(ob1);

//    cout << "Area: " << obOuput.area << endl;
//    cout << "perimiter: " << obOuput.perimiter << endl;

//    cout << "Area: " << ob1Output.area << endl;
//    cout << "perimiter: " << ob1Output.perimiter << endl;
// }

// #include<iostream>
// using namespace std;
// class Triangle{
//     public:
//         float cgpa;
//         long int id;

//         Triangle(float c, long int i){
//            cgpa = c;
//             id = i;
//         }

//         // Triangle(){
//         //     cgpa = cgpa;
//         //     id = id;
//         // }
//         Triangle(){

//         };
// };


// int main(){
//     Triangle  ob(10,22),ob1;
//     cout <<  ob1.cgpa << endl;
//    // cout << ob1.cgpa << endl;
// }

/*
1. Create a class name Average. Declared three variables that are entered by the
user. Pass those variables as constructor arguments. Create a method that
calculates the average of three numbers and returns it. And show the result of
average. 
*/

// #include<iostream>
// using namespace std;
// class Average{
//     public:
//     int a,b,c;
    
//     Average(int x, int y, int z){
//         a = x;
//         b = y;
//         c = z;  
//     };
//    int ave(){
//         int ave = (a + b + c)/3;
//         return ave;
//    }
// };
// int main(){
//     int x,y,z;
//     cin >> x >> y >> z; 
//     Average ob(x,y,z); 
//     cout << "Average: " << ob.ave() << endl;
// }

// #include<iostream>
// using namespace std;

// class millionaire{
//     public:
//     void cars(string a, string b, string c){
//         cout << a << " " << b << " " << c << endl;
//     }
//     void cars(string a, string b, string c , string d){
//         cout << a << " " << b << " " << c << " " << d << endl;
//     }
//     void cars(string a, string b, string c , string d, string e){
//         cout << a << " " << b << " " << c << " " << d << " " << e << endl;
//     }
//     void cars(string a, string b, string c , string d, string e, string f){
//         cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << endl;
//     }
// };

// int main(){
//     millionaire ob;
//     ob.cars( "Orobo", "Muscle", "Halla");
//     ob.cars( "Orobo", "Muscle", "Halla", "Beast");
//     ob.cars( "Orobo", "Muscle", "Halla", "Berry", "BMW");
//     ob.cars( "Orobo", "Muscle", "Halla", "Berry", "BMW", "Audi");
// }
// #include<iostream>
// using namespace std;

// class cse41{
//     float cgpa;
//     long int id;

// public:
//      void display(){
//         cout << "Id: " << id << " Cgpa: " << cgpa << endl;
//      }

//      cse41(float x,long int y){
//          cgpa = x;
//          id = y;
//     }
// };

// int main(){
//     cse41 obj(3.83, 199338);
//     obj.display();
// }
// //Problem 2
// #include<iostream>
// using namespace std;
// class Circle{
//     public: 
//     float radius;
//     float area;
//     Circle(float x){
//         radius = x;
//     }
//     float getArea(){
//         double area1;
//         area1 = 3.1416 * radius * radius;
//         return area1;
//     }
//     Circle(){
//         radius = 1;
//     }

//     void display(){
//         area = getArea();
//         cout << radius  << " " << area << endl;
//     }

// };

// int main(){
//     Circle obj1(2.0),obj2(12),obj3(24), obj4;
//     obj1.display();
//     obj2.display();
//     obj3.display();
//     obj4.display();
//     obj2.radius = 35;
//     obj2.display();
// }

// //Problem class 1: 03
// #include<iostream>
// using namespace std;
// class coordinate{
//     int x,y,z;
//     public:
//         void set(int a, int b, int c){
//             x = a;
//             y = b;
//             z = c;
//         }

//         void show(){
//             cout << "x: " << x << " y: "  << y << " z:" << z << endl;
//         }

// };

// int main()
// {
//     coordinate ob1,ob2;
//     ob1.set(5,10,20);
//     ob1.show();
//     ob2 = ob1;
//     ob2.show();
//     //ob2.show();

// }


// ///Problem class 2: 02
// #include<iostream>
// using namespace std;

// class Box{
//     int length, width, height;
//     public:
//         Box(int l, int w, int h){
//             length = l;
//             width = w;
//             height = h;
//         }

//         void display(){

//             cout << "length: " << length << " Width: "  << width << " Height:" << height << endl;
//         }
//         friend int volume(Box obj);
// };

// //Formula of Box: 2(lw+lh+hw)
// int volume(Box obj){
//     int area = 2*((obj.length * obj.width) + (obj.length * obj.height) + (obj.height * obj.width));
//     return area;
// }


// int main(){
//     Box obj(10,30,10);
//     cout << volume(obj) << endl;

// }

///Problem class 2: 01
// #include<iostream>
// using namespace std;

// class Square{
//     int length;
//     public:
//     void set_length(int x){
//         length = x;
//     }
//     friend int area(Square ob);

// };


// int area(Square ob){
//     int area = ob.length * ob.length;
//     return area;
// }

// int main(){
//   Square ob;
//   ob.set_length(10);
//   cout << "Area: "<< area(ob);

// }

// #include<iostream>
// using namespace std;
// class Football{
//     int radius, weight;
//     public:
//     void display(){
//         cout << "Radius: " << radius  << " Weight: " << weight << endl;
//     }
//     Football(int a, int b){
//         radius = a;
//         weight = b;
//     }
//     Football(){
//         radius = 1;
//         weight = 2;
//     }

// };

// int main(){
//     Football ob1(10,20), ob2;
//     ob1.display();
//     ob2.display();
// }

// #include<iostream>
// using namespace std;
// class Registration{
//    public:
//         void chooseCourse(string a, string b, string c){
//             cout << "Selected Three Course" << endl;
//         }
//         void chooseCourse(string a, string b, string c, string d){
//             cout << "Selected Four Course"<< endl;
//         }
//         void chooseCourse(string a, string b, string c, string d, string e){
//             cout << "Selected Five Course" << endl;
//         }
//         void chooseCourse(string a, string b, string c, string d, string e, string f){
//             cout << "Selected six Course";
//         }

// };
// int main(){
//     Registration obj;
//     obj.chooseCourse("Cse 101", "Cse 102", "Cse 103");
//     obj.chooseCourse("Cse 101", "Cse 102", "Cse 103", "Cs3");
//     obj.chooseCourse("Cse 101", "Cse 102", "Cse 103", "Cs322", "cse22");
//     obj.chooseCourse("Cse 101", "Cse 102", "Cse 103", "Cs322", "cse22","cse112");
// }

//problem 1
// #include <cmath>
// #include <iostream>
// using namespace std;
// class Triangle{
//     private: 
//         float base, perpendicular, hyperbola;
//     public:
//         Triangle(float b, float p, float h){ 
//             base = b;
//             perpendicular = p;
//             hyperbola = h;
//         }

//         Triangle(){ 
//             base = 3;
//             perpendicular = 4;
//             hyperbola = 5;
//         }
//         friend void peri_area(Triangle ob);
// };

// void peri_area(Triangle ob){
//     float s = ob.base + ob.perpendicular + ob.hyperbola;
//     float area =  sqrt(s*(s - ob.base) * (s - ob.perpendicular) * (s - ob.hyperbola));
//     float perimiter = ob.base + ob.perpendicular + ob.hyperbola;
//     cout << "Area: " << area << endl;
//     cout << "perimiter: " << perimiter << endl;
// }

// int main(){
//     Triangle ob(2 ,32 ,21.2), ob1;
//     peri_area(ob);
//     peri_area(ob1);
// }


// // //problem 2
// #include <cmath>
// #include <iostream>
// using namespace std;
// class Triangle{
//     private: 
//         float base, perpendicular, hyperbola;
//     public:
//         float area, perimiter;
//         Triangle(float b, float p, float h){ 
//             base = b;
//             perpendicular = p;
//             hyperbola = h;
//         }

//         Triangle(){ 
//             base = 3;
//             perpendicular = 4;
//             hyperbola = 5;
//         }
//         friend Triangle peri_area(Triangle ob);
// };

// Triangle peri_area(Triangle ob){
//     float s = ob.base + ob.perpendicular + ob.hyperbola;
//     ob.area =  sqrt(s*(s - ob.base) * (s - ob.perpendicular) * (s - ob.hyperbola));
//     ob.perimiter = ob.base + ob.perpendicular + ob.hyperbola;
//     return ob;
// }

// int main(){
//     Triangle ob(2 ,32 ,21.2), ob1;
//     Triangle obOuput = peri_area(ob);
//     Triangle ob1Output = peri_area(ob1);

//    cout << "Area: " << obOuput.area << endl;
//    cout << "perimiter: " << obOuput.perimiter << endl;

//    cout << "Area: " << ob1Output.area << endl;
//    cout << "perimiter: " << ob1Output.perimiter << endl;
// }

// #include<iostream>
// using namespace std;
// class Swap{
//     private:
//         int a,b;
//     public:
//         Swap(int x, int y){
//             a = x; 
//             b = y;
//         }
//         friend void swapTwoNum(Swap ob);
// };

// void swapTwoNum(Swap ob){
//     int temp = ob.a;
//     ob.a = ob.b;
//     ob.b = temp;
//     cout << "ob.a: " << ob.a << " ob.b: " << ob.b << endl;
// }

// int main(){
//     Swap ob(10,20);
//     swapTwoNum(ob);
// }

// #include<iostream>
// using namespace std;

// class student{
//     public:
//         int intake;
//         char c;

//         student setValue(student ob){
//             ob.intake = 41;
//             ob.c = '5';
//             return ob; 
//         }
// };

// int main(){
//     student st;
//     student ob = st.setValue(st);
//     cout << ob.intake << endl;
//     cout << ob.c << endl;
// }

// #include<iostream>
// using namespace std;
// class Rectangle{
//     public:
//         float length, width, area;
        
//         Rectangle(float x, float y){
//             length = x;
//             width = y;
//         }
//         Rectangle(){
//             length = 1;
//             width = 2;
//         }

//         void display(){
//             cout << "Length: " << length << " Width: " << width << endl;
//             cout << "Area: " << getArea() << endl;
//         }

//         float getArea(){
//             area = width *  length;
//             return area;
//         }
// };
// int main(){
//     Rectangle ob1(2.0, 10), ob2(10,20), ob3(24,30), ob;
//     ob1.display();
//     ob2.display();
//     ob3.display();
//     ob.display();
//     ob3.length = 40;
//     ob3.display();
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int N;
//     cin >> N;
//     while (N != 0)
//     {
//             int arr[N][N];
//             int m = 1;
//             int n = 1;
//             int r;
//             for(int col = 0; col < N; col++){
        
//                 for(int row = 0; row < N; row++){
          
//                     }
//                 }
                
      
            

//             for(int row = 0; row < N; row++){   
//                 for(int col = 0; col < N; col++){ 
//                     cout << arr[row][col] << " ";
//                 }
//                 cout << endl;
//             }
//             cin >> N;
//             arr[N][N];
//     }
    
 
// }
// #include<iostream>
// using namespace std;
// class A{
//     public:
//         int a,b;
//         void Add(int a,int b){
//             this -> a = a;
//             this -> b = b;
//             cout << "Sum for B class is: " << this->a + this->b;
//         }

// };
// class B: public A{
//     public:
//         void Add(int a,int b){
//             this -> a = a;
//             this -> b = b;
//             cout << "Sum for B class is: " << this->a + this->b << endl;
//             A:: Add(3,22);
//         }
// };
// class C: public B{
//      public:
//         void Add(int a,int b){
//             this->a = a;
//             this->b = b;
//             cout << "Sum for C class is: " <<  this-> a +  this-> b << endl;
//             B obj;
//             B:: Add(4,3);
//         }
// };
// int main(){
//     C ob;
//     ob.Add(1,2);
// }


// #include<iostream>
// using namespace std;
// class A{
//     public:
//         int a, b;
//         A(int a,int b){
//             this-> a = a;
//             this-> b = b;
//         }
//         A(){

//         }
// };

// class B : public A{
//     public:
//         B(){
//             cout << "Hello!" << endl;
//         }
// };

// int main(){
//     B obj;
    
// }

// #include<iostream>
// using namespace std; 
// class B{
//     public:
//         B(int a, char b){
//             cout << "In B Class" << endl;
//         }

// };
// class A : public B{
//     public:
//         A(int a, int b) : B(a,b){
//             cout << "In A Class" << endl;
//         }

// };
// int main(){
//     A ob(10,'a');
// }




// #include<iostream>
// using namespace std;
// class Account{
//     int acNo;
//     public: 
//         int acBala;
//         Account(int a, int b){
//             acNo = a;
//             acBala = b;
//         }
//         Account(){

//         }
// };
// class child : private Account{
//         public: 
//             child(){
//                 cout << Account:: acBala << endl;
//             }
            
// };
// class childSon : public child{
//       public: 

// };

// int main(){
//    Account ob(1,22);
//    child ob1;
// }


// #include<iostream>
// using namespace std;
  
// class base {
// public:
//     virtual void print()
//     {
//         cout << "print base class\n";
//     }
  
//     void show()
//     {
//         cout << "show base class\n";
//     }
// };
  
// class derived : public base {
// public:
//     void print()
//     {
//         cout << "print derived class\n";
//     }
  
//     void show()
//     {
//         cout << "show derived class\n";
//     }
// };
  
// int main()
// {
//     base *bptr;
      
//     // Non-virtual function, Relded at compile time
//     bptr->show();
    
//     derived d;
//     bptr = &d;
  
//     // Virtual function, Relded at runtime
//     bptr->print();

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class A{
//     public:
//         void sum(int x, int y){
//             cout << x + y << endl;
//         }

//         void print(){
//             cout << "Hello" << endl;
//         }

//         A(int x, int y){
//             cout << x - y << endl;
//         }

//         A(){
//             cout << "Hello" << endl;
//         }

        

// };

// class B : public A{
//      public:
//         B(){

//         }
//         B(int x, int y){
//             cout << x - y << endl;
//         }
// };
// int main(){
//     B ob;
//     B ob2(5,3);
//     ob.sum(2,2);
//     ob.print();
// }





//Ambigute Problem



// 
//7. Runtime polymorphism using pointer with Function/Method
// #include<iostream>
// using namespace std;
// class base {
// public:
//     virtual void print()
//     {
//         cout << "print base class\n";
//     }
// };
  
// class derived : public base {
// public:
//     void print()
//     {
//         cout << "print derived class\n";
//     }
  
// };
// int main()
// {
//     base *bptr;
//     base bp;
//     derived d;
//     bptr = &d;
//     bptr->print();
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class A{
//     public:
//         int x;
//         int y;
//         void print(){
//             cout << "Hello";
//         }
        
//     protected:
//         int a, b;
//     private: 
//         int c,d;
// };

// class B : private A{
//     public:
//         using A::print;
//         using A:: a;
//         using A :: x;
// };

// int main(){

//     B ob;
//     ob.x = 10;
//     ob.print();
//     ob.a = 10;
// }



// #include<iostream>
// using namespace std;
// class Div{
//     public: 
//         void calculation(int x, int y){
//             cout << "Division: " << x / y << endl;   
//         }
// };

// class Mult : public Div{
//      public: 
//         void calculation(int x, int y){
//              cout << "Multipication: " << x * y << endl;  
//              //Div:: calculation(x,y);   
//         }
// };

// class Sub : public Mult{
//        public: 
//         void calculation(int x, int y){
//                 cout << "Substraction: " << x - y << endl;  
//                // Mult:: calculation(x,y);
//         }
// };

// class Add : public Sub{
//      public: 
//         void calculation(int x, int y){
//             cout << "Addition: " << x + y << endl;  
//            // Sub:: calculation(x, y); 
//         }
// };

// int main(){
//     Add obj;
//     // obj.calculation(20,10);
//     // obj.Sub:: calculation(20,10);
//     // obj.Mult:: calculation(20,10);
//     // obj.Div:: calculation(20,10);

//     // ob.print();
//     // cout << endl;
// }

// #include<iostream>
// using namespace std;
// class Account{
//     int acNo;
//     public: 
//         int acBala;
//         Account(int a, int b){
//             acNo = a;
//             acBala = b;
//         }
// };
// class child : public Account{
//         public: 
//             child(int a, int b): Account(a,b){
            
//             }
//             void showBal(){
//                 cout << acBala << endl;
//             }
// };
// class childSon : public child{
//       public: 
//          childSon(int a, int b): child(a,b){

//          }
// };
// int main(){
//     childSon ob(11101111,113333);
//     ob.showBal();
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5] = {8,13,12,23,21};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     cout << size << endl;
//     int temp = 0;
//     for(int i = 0; i < size-1; i++){
//         for(int j = 0; j < size-i-1; j++){
//               if(arr[j + 1] > arr[j]){
//                     // temp = arr[j+1];
//                     // arr[j+1] = arr[j];
//                     // arr[j] = temp; 
//                     swap(arr[j+1], arr[j]);  
//               }
//         }
//     }

//     for(int i = 0; i < size; i++){
//         cout << arr[i] << endl;
//     }
// }




// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//      for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << "\n";
//     }

//     cout << "\n";
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             cout << arr[j][i] << " ";
//         }
//         cout << "\n";
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     char arr[6] = {'x', 'y', 'z','a','b','r'};

//     for(int i = 0; i < 5; i++){
//         for(int j = i+1; j < 6; j++){
//             if(arr[i] < arr[j]){
//                 swap(arr[i],arr[j]);
//             }
//         }
//     }

//     for(int i = 0; i < 6; i++){
//         cout << arr[i] << " ";
//     }
// }


// #include<iostream>
// using namespace std;
// class A{
//     public:
//         int x;
// };
// class B : public A{
//     public:
//         int y;
// };

// class C: public B{
//         public:
//             int z;
//             void print(){
//                 cout << x << endl << y << endl << z << endl;
//             }
// };

// int main(){
//     C ob;
//     ob.x = 100;
//     ob.y = 200;
//     ob.z = 300;
//     ob.print();
// }


//Access Modifier with Inheritance(public, private, protected)
// #include<iostream>
// using namespace std;
// class A{
//     public:
//         int x;
//     private: 
//         int y;
//     protected:
//         int z;
// };

// class B: public  A{

// };

// class C: protected B{
//     public:

// };

// class D: private C{
//     public:
//         void print(int x, int z){
//             this->x = x;
//             this->z = z;
//             cout << x << endl << z << endl;
//         }
//         int r;
// };

// class E: public D{

// };
// int main(){
//     E ob;
//     ob.r = 200;
//     cout << ob.r << endl;
//     ob.print(4,2);
// }

// Constructor Call with inheritace
// #include<iostream>
// using namespace std;
// class A{
//     public: 
//         A(int x, int y){
//             cout << "Sum: " << x + y << endl;
//         }

//         A(){
//            cout << "I am A" << endl;
//         }
// };

// class B : public A{
//     public:
//         B(){
//             cout << "I am B" << endl;
//         }
//         B(int x, int y): A(x,y){
//             cout << "Sub: " << x - y << endl;
//         }
     
// };
// int main(){
//     B ob;
//     B ob1(40,30);
// }


//Method/Function Overriding
// #include<iostream>
// using namespace std;
// class Sub{
//         public:
//         void Calculation(int x, int y){
//             cout << "Subtraction: " << x - y << endl;
//         }
// };

// class Add : public Sub{
//         public:
//         void Calculation(int x, int y){
//             cout << "Addition: " << x + y << endl;
//         }
// };
// int main(){
//    Add ob;
//    ob.Calculation(20,10);
//    ob.Sub::Calculation(20,10);
// }

// #include<iostream>
// using namespace std;
 
// // Base class A
 
// class A {
//     public:
 
//     void func() {
//         cout << " I am in class A" << endl;
//     }
// };
 
// // Base class B
 
// class B{
//     public:
 
//     void func() {
//         cout << " I am in class B" << endl;
//     }
// };
 
// // Derived class C
// class C: public A, public B {
 
 
// };
 
// Driver Code
 
//6. Ambiguity Problem and Solve with virtual inheritance.
// #include <iostream>
// using namespace std;
  
// class A {
// public:
//     void print(){
//         cout << "I am annonymous" << endl;
//     }
// };
  
// class B : public virtual A {
// };
  
// class C : public virtual A {
// };
  
// class D : public B, public C {
// };
  
// int main()
// {
//     D object; 
//     object.print();
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int a, b;
//     cin >> a;
//     cin >> b;

//     for(int i = a; i <= b; i++){
//         if( i <= 9){
//             if(i == 1){
//                 cout << "one" << endl;
//             }else if(i == 2){
//                 cout << "two" << endl;
//             }else if(i == 3){
//                 cout << "three " << endl;
//             }else if(i == 4){
//                 cout << "four" << endl;
//             }else if(i == 5){
//                 cout << "five" << endl;
//             }else if(i == 6){
//                 cout << "six" << endl;
//             }else if(i == 7){
//                 cout << "seven" << endl;
//             }else if(i == 8){
//                 cout << "eight" << endl;
//             }else{
//                 cout << "nine" << endl;
//             }
//         }else{
//             if(i % 2 == 0){
//                 cout << "even" << endl;
//             }else{
//                 cout << "odd" << endl;
//             }
//         }
//     }
// }

// #include <iostream>
// #include <cstdio>
// using namespace std;
// int  max_of_four(int a, int b, int c, int d){
//     if(a > b && a > c && a > d){
//         return a;
//     }else if(b > a && b > c && b > d){
//         return b;
//     }else if(c > a && c > b && c > d){
//         return c;
//     }else if(d > a && d > b && d > c){
//         return d;
//     }else{
//         return 0;
//     }
// }
// int main() {
//     int a, b, c, d;
//     scanf("%d %d %d %d", &a, &b, &c, &d);
//     int ans = max_of_four(a, b, c, d);
//     printf("%d", ans);
    
//     return 0;
// }

// #include <stdio.h>
// using namespace std;
// void update(int *a,int *b) {
//     int x;
//     if(*a < *b){
//          x = *b;
//          *b = *b - *a; 
//         *a = *a + x;    
        
//     }else{
//          x = *b;
//         *b = *a - *b;
//         *a = *a + x;    
//     }
// }

// int main() {
//     int a, b;
//     int *pa = &a, *pb = &b;
    
//     scanf("%d %d", &a, &b);
//     update(pa, pb);
//     printf("%d\n%d", a, b);

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
// //    int r;
//    cin >> r;
//    int k = 1;
//     int s = 1;
//    for( ; ;){
//         for(int j = 1; j <= s; j++){
//             cout << k << " ";
//             k++;
//         }
//         cout << endl;
//         if(k-1 == r){
//             break;
//         }
//         s++;
//    } 
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int r;
//     cin >> r;
//     int k = 0;
//     for(int i = 1; i <= r; i++){
//         for(int j = 1; j <= i; j++){
//             if(k == r){
//                 break;
//             }
//             cout << ++k << " ";
//         }
//         cout << endl;
//         if(k == r){
//             break;
//         }
//     }
// }

// #include<iostream>    
// using namespace std;
// int main()
// {  
//    //Given Array
//    int arr[] = { 11, 22, 33, 44 };
//    int n = end(arr) - begin(arr);
//    cout<<"The Length of the Array is : "<<n; //length
   
//    return 0;
// }

// #include<iostream>
// using namespace std;
// class A{
//     public:
//         int x;
// };
// class B : public A{
//     public:
//         int y;
//         void print(){
//                 cout << x << endl << y << endl;
//         }
// };
// int main(){
//     B ob;
//     ob.x = 100;
//     ob.y = 200;
//     ob.print();
// }


// #include<iostream>
// using namespace std;
// template<typename T>
// T mini(T x, T y){
//     return x < y ? x : y;
// }
// int main(){
//     cout << mini(5,6) << endl;
//     cout << mini(5.1,5.09) << endl;
//     cout << mini('d','y') << endl;
// }


// // 8. Abstract class(Pure Virtual Function)
// #include<iostream>
// using namespace std;
// class A{
//     public: 
//         virtual void show() = 0;
// };

// class B : public A{
//     public:
//         void show(){
//             cout << "Pure Virtual Function" << endl;
//         }
// };
// int main(){
//     A* ob1;
//     B ob2;
//     ob1 = &ob2;
//     ob1->show();

//     B ob;
//     ob.show();
// }

// #include<iostream>
// using namespace std;
// class Shape{
//     public:
//     virtual void shape(){
//         cout << "Draw Shape" << endl;
//     }
// };

// class Circle : public Shape{
//     public:
//     void shape(){
//         cout << "Draw Circle" << endl;
//     }
// };
// int main(){
//     Shape* shape;
//     Shape shape1;
  
//     Circle c;
//     shape = &c;

//     shape->shape();
//     shape1.shape();
// }

// #include<iostream>
// using namespace std;
// ///Template//////
// template <typename T>
// void sortArr(T arr, T size){
//     int s = static_cast<int> (*size);
//     for(int i = 0; i < s-1; i++){
//         for(int j = i+1; j < s; j++){
//             if(arr[i] > arr[j]){
//                 swap(arr[i], arr[j]);
//             }
//         }
//     }
// }
// int main(){
//     //Sort int Number
//     int arr[5] = {8,13,12,23,21};
//     int size = end(arr) - begin(arr);
//     sortArr(arr, &size);

//     cout << "Sort int Number: \n";
//     for(int i = 0; i < size; i++){
//          cout << arr[i] << " ";
//     }

//     //Sort charater
//     char arr1[10] = {'a', 'x', 'y', 'z', 'd', 'e', 'f','l','m','c'};
//     char size1 = static_cast<char>(end(arr1) - begin(arr1));
//     sortArr(arr1, &size1);

//     cout << "\nSort Character: \n";
//     for(int i = 0; i < static_cast<int>(size1); i++){
//          cout << arr1[i] << " ";
//     }
 
//     //Sort double
//     double arr3[6] = {2.5,2.4,2.3,2.2,2.1, -3.3};
//     double size3 = static_cast<double>(end(arr3) - begin(arr3));
//     sortArr(arr3, &size3);

//     cout << "\nSort Double: \n";
//     for(int i = 0; i < static_cast<int>(size); i++){
//          cout << arr3[i] << " ";
//     }
  
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char str[50] = {"+-++---+-"};
//     int i = 0;
//     int spec = 0;
//     int len = 0;
//     int max = 1;
//     while (str[i] != '\0')
//     {
//         while(str[i] == str[i+1]){
//             max++;
//             i++;
//         }
        
//         if(max > len){
//            spec = i;
//            len = max;
//         }
        
//         i = i+1;
//         max = 1;
//     }
//     cout << len << endl;
    
// }

// #include<iostream>
// using namespace std;
// class Add{
//     public: 
//         int x, y;
//         Add(){
//             x = 0;
//             y = 0;
//         }

//         Add(int x, int y){
//             this->x = x;
//             this->y = y;
//         }

//         // Add operator +(Add ob){
//         //     ob.x = x + ob.x;
//         //     ob.y = y + ob.y;
//         //     return ob;
//         // }

//         Add operator +(Add ob){
//             ob.x = x + ob.x;
//             ob.y = y + ob.y;
//             return ob;
//         }

//         void display(){
//             cout << x << " " << y << endl;
//         }


// };

// int main(){
//     Add p1(10,30), p2(200,330),p3(3,32),p4;
//     p4 = p1+p2;
//     (p4+p3).display();
   
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char str[50] = {"+-++---+-"};
//     int i = 0;
//     int spec = 0;
//     int len = 0;
//     int max = 1;
//     while (str[i] != '\0')
//     {
//         while(str[i] == str[i+1]){
//             max++;
//             i++;
//         }
        
//         if(max > len){
//            spec = i;
//            len = max;
//         }
        
//         i = i+1;
//         max = 1;
//     }
//     cout << len << endl;
    
// }

// #include<iostream>
// using namespace std;
// class Rel{
//     private:
//         int x,y;
//     public:
//         void operator +(Rel obj){
//             // x = x  + obj.x;
//             // y = y  + obj.y;
//             // cout << x << " " << y << endl;
//             x > obj.x? cout << x << endl : cout << obj.x << endl;
//             y > obj.y? cout << y : cout << obj.y;

//         }
//         Rel(int r_x, int r_y){
//             x = r_x;
//             y = r_y;
//         }
// };

// struct Rel
// {
//     int x;
//     /* data */
// };


// struct Add: public Rel
// {
//     /* data */
// };


// int main(){
//    Add ob;
//    ob.x = 100;
//     cout << ob.x << endl;
// }


// #include<iostream>
// using namespace std; 
// class Una{
//     public:
//         int x  = 5;

// };

// int main(){
//     Una ob;
    
// }

//Constructor call and method overriding
// #include <iostream>
// using namespace std;
// class Hen{
//     public:
//         int x,d;
//         char y,m;
//         Hen(int a, char b){
//            x = a;
//            y = b;
//         }

//         void display(){
//             cout << x << ", " << y << endl;
//         }
       
// };  
// class Dog: public Hen{
//     public:
//     Dog(int a, char c):Hen(2,'m'){
//         d = a;
//         m = c;
//     }
//     void display(){             
//         cout << d << ", " << m << endl;
//     }
// };
// int main(){
//   Dog ob(10,'e');
//   ob.display();
//   ob.Hen::display();
// }



// #include<iostream>
// using namespace std;
// class Account{
//     int acc_no;
//     public: 
//         int balance;
//         Account(int a, int b){
//             acc_no = a;
//             balance = b;
//         }
// };
// class child : private Account{
//         public: 
//             child(int a, int b): Account(a,b){
            
//             }
//             void showBal(){
//                 cout << balance << endl;
//             }
// };
// class childSon : public child{
//       public: 
//          childSon(int a, int b): child(a,b){

//          }
// };
// int main(){
//     childSon ob(11101111,113333);
//     ob.showBal();
// }

//Constructor Call in inheritance
// #include<istream>
// using namespace std;
// class Add{
//     public:
//     Add(int x, int y){
//         cout << x + y << endl;
//     }
// };

// class Sub: public Add{
//     public:
//      Sub(int x, int y):Add(x,y){
//             cout << x - y << endl;
//         }
// };

// class Mult:public Sub{
//     public:
//      Mult(int x, int y):Sub(x,y){
//         cout << x * y << endl;
//     }

// };
// int main(){
//     Mult  ob(19,2);
// }


//Abstract Class/pure virtual function
//Pure virtual Function: সি++ এর যে মেথডের কোন বডি থাকেনা এবং তারসাথে যদি ঐ মেথডে virtual কীওয়ার্ড থাকে তবে তাকে Pure virtual Function বলে।
//Abstract class: যে ক্লাসে কোন পিউর virtual ফাংশন থাকে এবং যে ক্লাসের কোন অবজেক্ট তৈরি করা যায়না তাকে Abstract class বলে।
// #include<iostream>
// using namespace std;
// class Football{
//     public: 
//         virtual void print();
//         void display(){
//             cout << "Football";
//         }
// };

// class Cric: public Football{
//     public:
//         virtual void print(){
//             cout << "Cric" << endl;
//         }

// };
// int main(){
// //    Cric cr;
// //    cr.print();
//     Football *ob;
//     Cric cr;
//     ob = &cr;
//     ob->print();
//     ob->display();
// }

// #include<iostream>
// using namespace std;

//  class A {
//     public:
//     void func() {
//         cout << " I am in class A" << endl;
//     }
// };
 
// // Base class B
// class B : virtual public A{
   
// };

// class C : virtual public A{
    
// };

// class D: public B, public C {
 
 
// };
 
// int main() {
//    D ob;
//    ob.func();
// }

//Question 1: Problem(1)
// #include<iostream>
// using namespace std;
// template<typename T>
// void PerFectNumber(T n){
//     int x = 1;
//     for(int i = 2; i < n; i++){
//         if(n % i == 0){
//             x += i;
//         }
//     }
//     if(x == n){
//         cout << "Perfect Number" << endl;
//     }else{
//         cout << "Not a perfect number" << endl;
//     }
// }


// int main(){
//     PerFectNumber(6);
//     PerFectNumber(28);
//     PerFectNumber(13);
// }

//Question 1: Problem(2)
// #include<iostream>
// using namespace std;
// class Merge_string{
//     public:
//         string a;
//         Merge_string(){
//             a = " ";
//         }
//         Merge_string(string s){
//             a = s;
//         }

//         Merge_string operator +(Merge_string s1){
//                 Merge_string ob;
//                 ob.a = a + s1.a;

//                 return ob;
//         }

//         void display(){
//             cout << a << endl;
//         }

// };

// int main(){
//     Merge_string o1("Good "), o2("Morning"), o3;
//     o3 = o1 + o2;
//     o3.display();
// }

//Question 1: Problem(3)
// #include<iostream>
// using namespace std;
// class Shop{
//     public:
//         virtual void show()=0;
// };
// class Book : public Shop{
//     public:
//         void show(){
//             cout << "sells books" << endl;
//         }
// };
// class Rice : public Shop{
//     public:
//         void show(){
//             cout << "sells rice" << endl;
//         }
// };

// int main(){
//     Shop * shop;
//     Book book;
//     Rice rice;

//     shop = &book;
//     shop->show();

//     shop = &rice;
//     shop->show();
// }
// #include<iostream>
// using namespace std;
// class FinalExam{
//     public:
//         int a;
//         FinalExam(){
//             a = 0;
//         }
//         FinalExam(int s){
//             a = s;
//         }
//         FinalExam operator +(FinalExam s1){
//                 FinalExam ob;
//                 ob.a = a + s1.a;

//                 return ob;
//         }
//         bool operator ==(FinalExam s1){
//                 if(s1.a == a){
//                     return true;
//                 }else{
//                     return 0;
//                 }
//         }
// };
// int main(){
//     FinalExam e1(40), e2(30), e3(70), e4;
//     e4 = e1 + e2;
    
//     if(e3 == e4){
//         cout << "Equal";
//     }else{
//         cout << "Not Equal";
//     }
// }

// //Question 2: Problem(3)
// #include<iostream>
// using namespace std;
// template <typename T>
// T MaxNum(T n1, T n2, T n3){
  /*Find max number with conditional Operator
    T max = x > y ? x > z ?  x  :  z : y > z?  y :  z;
    return max;
  */  

//   if (n1 >= n2 && n1 >= n3){
//     return n1;
//   }
//   else if (n2 >= n1 && n2 >= n3){
//     return n2;
//   }
//   else{
//     return n3;
//   }
       
// }
// int main(){
//     cout << MaxNum(18,3,18) << endl;
//     cout << MaxNum('a','k','z') << endl;
//     cout << MaxNum(1.001,1.003,1.002) << endl;
// }

// #include<iostream>
// using namespace std;
// class alpha{
//     public:
//         alpha(int x, char y){
//             cout << "In alpha class" << endl;
//         }
// };

// class beta:public alpha{
//     public: 
//         beta(int x, char y):alpha(x, y){
//             cout << "In beta class" << endl;
//         }
// };

// class gamma:public beta{
//     public: 
//         gamma(int x, char y):beta(x, y){
//             cout << "In gamma class" << endl;
//         }
// };

// int main(){
//     gamma g(12,'a');
// }


// #include<iostream>
// using namespace std; 
// class A{
//     public:
//         int x;
// };

// class B{
//     public:
//         int y;
// };

// class C: public A, public B{
//     public:
//         int z;
// };

// int main(){
//     C ob;
//     ob.x = 12;
//     ob.y = 13;
//     ob.z = 22;
//     cout << ob.x << " " << ob.y << " " << ob.z << endl;
// }


// #include<iostream>
// using namespace std;
// class Gamma{
//   int x;
//   //int r;
//   double y;
// };

// class alpha{
//   double a;
//  // int b;
//   int m;
// };
// int main(){
//   Gamma g;
//   alpha a;

//   cout << sizeof(g) << endl;
//   cout << sizeof(a) << endl;
// }

// #include<iostream>
// using namespace std;
// class A{
//   public:
//   void show(){
//     cout << "Ambbiguty";
//   }
// };
// class B : public A{};
// class C : public A{};
// class D : public B, public C{};

// int main(){
//   D ob;
//   //ob.show();
// }


// #include<iostream>
// using namespace std;
// class Father{
//   public: 
//     void display(int x, int y){
//       cout << x + y << endl;
//     }
// };

// class Son: public Father{
//   public: 
//     void display(int x, int y){
//       cout << x - y << endl;
//     }
// };
// int main(){
//   Son ob;
//   ob.Father::display(10,20);
//   ob.display(10,20);
// }




// #include<iostream>
// using namespace std;

// template <typename A>
// void perfectNumber(A a){
//   int sum = 0;
//   for(int i = 1; i < a; i++){
//     if(a % i == 0){
//       sum = sum +  i; 
//     }
//   }

//   if(a == sum){
//     cout << "Perfect Number" << endl;
//   }else{
//      cout << "Not Perfect Number" <<endl;
//   }

// }

// int main(){
//   perfectNumber(6);
//   perfectNumber(3);
//   perfectNumber(28);
//   perfectNumber(24);
// }





// #include<iostream>
// using namespace std;

// class grandFather{
//   public: 
//     void show(){
//       cout << "I am grandFather. " << endl;
//     }
// };

// class Father : public grandFather{
//   public: 
//     void show(){
//       cout << "I am Father. " << endl;
//     }
// };

// class  Son: public Father{
//   public: 
//     void show(){
//       cout << "I am Son. " << endl;
//     }
// };




// #include<iostream>
// using namespace std;
// class Merge_string{
//     public:
//        string s;
//        Merge_string(string a){
//          s = a;
//        } 

//        Merge_string(){
//         s = " ";
//        }

//       Merge_string operator +(Merge_string ob){
//           return s + ob.s;
//       }

//       void display(){
//         cout << s << endl;
//       }

// };
// int main(){
//     Merge_string o1("Good "), o2("Morning"), o3;
//     o3 = o1 + o2;
//     o3.display();
// }


// #include<iostream>
// using namespace std;

// template <typename T>
// T maximum(T a, T b, T c){
//   if(a >= b && a >= c){
//     return a;
//   }else if(b >= a && b >= c){
//       return b;
//   }else{
//     return c;
//   }
// }

// int main(){
//   int m = maximum(21,20,1);
//   cout << m << endl;
//   cout << maximum(1.1,1.5,1.2) << endl;
//   cout << maximum('a','k','z') << endl;
// }


// class FinalExam{
//     public:
//         int a;
//         FinalExam(){
//             a = 0;
//         }
//         FinalExam(int s){
//             a = s;
//         }
//         FinalExam operator +(FinalExam s1){
//                 FinalExam ob;
//                 ob.a = a + s1.a;

//                 return ob;
//         }
//         bool operator ==(FinalExam s1){
//                 if(s1.a == a){
//                     return true;
//                 }else{
//                     return 0;
//                 }
//         }
// };

// #include<iostream>
// using namespace std;
// class FinalExam{
//     public: 
//         int n;
//         FinalExam (int a){
//           n = a;
//         }

//         FinalExam(){
//           n  = 0;
//         }

//         FinalExam operator +(FinalExam ob){
//           FinalExam on;
//           ob.n = n + ob.n;
//           return ob;
//         }

//         int operator ==(FinalExam ob){
//             if(n == ob.n){
//                 return 1;
//             }else{
//               return 0;
//             }
//         }
// };
// int main(){
//     FinalExam e1(40), e2(30), e3(80), e4;
//     e4 = e1 + e2;
    
//     if(e3 == e4){
//         cout << "Equal";
//     }else{
//         cout << "Not Equal";
//     }


// #include<iostream>
// using namespace std;

// int main(){
//   string txt;
//   txt = "Hellopw";
//   cout << end(txt) - begin(txt) << endl;
// }


// #include<iostream>
// using namespace std;
// class Merge_string{
//   public:
//     int length;
//     string s;

//     Merge_string(string a){
//       length = a.length();
//       s  = a;
//       cout << s.length() << endl;
//     }

//     Merge_string(){
//       s = " ";
//       length = 0;
      
//     }

//     Merge_string operator +(Merge_string ob){
//       Merge_string n1;
//       n1.s = s + ob.s;
//       return n1;
//     }

//     void display(){
//       cout << s << endl;
//     }
// };

// int main(){
//   Merge_string o1("Good "), o2("Morning"), o3;
//   o3 = o1 + o2;
//   o3.display();
// }

// #include<iostream>
// using namespace std;
// class Rel{
//   public: 
//     int x, y;

//     Rel(int a, int b){
//       x = a;
//       y = b;
//     }

//     Rel() = default;

//     Rel operator >(Rel ob){
//       Rel obn;

//       if(x > ob.x){
//         obn.x = x;
//       }else{
//         obn.x = ob.x;
//       }

      
//       if(y > ob.y){
//         obn.y = y;
//       }else{
//         obn.y = ob.y;
//       }
//      return obn;
     
//     }

//     void display(){
//       cout << x << endl;
//       cout << y << endl;
//     }
// };



// int main(){
//     Rel ob(10,20), ob1(12,3),ob3;
//     ob3 = ob > ob1;
    
//     ob3.display();
// }

// #include<iostream>
// using namespace std;

// int main(){
//   int x,y;
//   cin >> x >> y;

//   try{
//      if(x == 0){
//       throw "Non Sences";
//      }else{
//         cout << x / y << endl;
//      }
     

//   }catch(const char* s){
//     cout << s << endl;
//   }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     try
//     {
//       int x;
//       cin >> x;
//       if(x > 18){
//         cout << "You can Cast your Vote";
//       }else{
//         throw "Not casting vote because your age is below than 18"; 
//       }
//     }
//     catch(const char *e)
//     {
//      cout << e << '\n';
//     }
// }

// #include<iostream>
// using namespace std;

// class Cricket{
//   public:
//     Cricket(int a, char b){
//       cout << "In Cricket Class" << endl;
//     }
// };

// class Football{
//   public:
//     Football(int a, char b){
//       cout << "In Footbal Class" << endl;
//     }
// };

// class Badminton: public Football, public Cricket{
//   public:
//     Badminton(int a, char b):Football(a, b), Cricket(a, b){
//       cout << "In Badminton Class" << endl;
//     }
// };

// int main(){
//   Badminton ob(10,'a');
// }
#include<iostream>
using namespace std;
class Base{
  public:
    virtual void print(){
      cout << "In Base class" << endl;
    }
};

class Derived1 : public Base  {
  public:
    void print(){
      cout << "In Derrived class" << endl;
    }
};

int main(){
   Base * ob;
   Derived1 ob1;
   ob = &ob1;
   ob->print();
   ob->Base::print();
}