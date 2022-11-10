#include <iostream>
using namespace std;
int sum(int, int);
float sum(float, float);
float sum(int, float);
int main(){
   int num1, num2, x;
   float num3, num4, y;
   cout<<"Enter two integer numbers: ";
   cin>>num1>>num2;
   //This will call the first function
   cout<<"Result: "<<sum(num1, num2)<< endl;
   cout<<"Enter two float numbers: ";
   cin>>num3>>num4;
   //This will call the second function
   cout<<"Result: " <<sum(num3, num4)<< endl;
   cout<<"Enter one int and one float number: ";
   cin>>x>>y;
   //This will call the third function
   cout<<"Result: " <<sum(x, y)<< endl;
   return 0;
}
int sum(int a, int b){
   return a+b;
}
float sum(float a, float b){
   return a+b;
}
float sum(int a, float b){
   return a+b;
}
/*C++ Program to Add Two Numbers Using Function Overloading
The Function Overloading is an ability to create multiple functions which can have the same name but with the different implementations. Function Overloading is also called as Method Overloading.

In this program, we will declare three functions with the same name but their operations will be different.
*/
